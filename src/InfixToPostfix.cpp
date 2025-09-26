//
// Created by Steph on 9/25/2025.
//

#include "InfixToPostfix.h"
#include <stack>

std::string removeWS(const std::string& str) {
    std::string s;
    for (char c : str) {
        if (!isspace(c)) {
            s += c;
        }
    }

    return s;
}

int precedence(char c) {
    if (c == '^')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}


bool isRightAssociative(char c) {
    return c == '^';
}

std::string infixToPostfix(const std::string& infix) {
    std::stack<char> s;
    std::string result = removeWS(infix);
    std::string output;

    for (char c : result) {
        if (isalnum(c)) {
            output += c;
            output += ' ';
        }
        else if (c == '(') {
            s.push(c);
        }
        else if (c == ')') {
            while (!s.empty() && s.top() != '(') {
                output += s.top();
                output += ' ';
                s.pop();
            }
            s.pop();
        }
        else {
            while (!s.empty() && s.top() != '(' &&
                   (precedence(s.top()) > precedence(c) ||
                   (precedence(s.top()) == precedence(c) && !isRightAssociative(c)))) {
                output += s.top();
                output += ' ';
                s.pop();
                   }
            s.push(c);
        }
    }

    while (!s.empty()) {
        output += s.top();
        output += ' ';
        s.pop();
    }

    return output;
}