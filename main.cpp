#include <iostream>
#include "src/InfixToPostfix.h"

using namespace std;

int main() {
    cout << "Welcome to the Infix To Postfix Program" << endl;
    cout << "Here are some test cases we can do to show that this program turns infix to postfix." << endl;

    cout << "Infix: 2 + 3";
    cout << "\nPostfix: " << infixToPostfix("2 + 3") << endl << endl;

    cout << "Infix: (3 - 2) * 2";
    cout << "\nPostfix: " << infixToPostfix("(3 - 2) * 2") << endl << endl;

    cout << "Infix: 8 / 2";
    cout << "\nPostfix: " << infixToPostfix("8 / 2") << endl << endl;

    cout << "Infix: (8 / 2) * 2";
    cout << "\nPostfix: " << infixToPostfix("(8 / 2) * 2") << endl << endl;

    cout << "Infix: (8 / 2) ^ 2";
    cout << "\nPostfix: " << infixToPostfix("(8 / 2) ^ 2") << endl << endl;

    return 0;
}