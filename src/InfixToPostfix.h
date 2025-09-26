//
// Created by Steph on 9/25/2025.
//

#ifndef INFIXTOPOSTFIX_H
#define INFIXTOPOSTFIX_H
#include <string>
#include <stack>

std::string removeWS(const std::string& str);

int precedence(char c);

bool isRightAssociative(char c);

std::string infixToPostfix(const std::string& infix);

#endif //INFIXTOPOSTFIX_H
