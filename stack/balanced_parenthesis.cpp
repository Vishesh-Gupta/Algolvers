#include <iostream> 
#include <sstream>
#include <stack>

/*
 * balanced_parenthesis checks if the ( ) are balanced in the
 * text
 * 
 * @param text: string that needs to be checked for balanced ( )
 * 
 * Runtime: O(n), where n is number of characters in the text
 */
bool balanced_paranthesis(std::string text) {
    std::stack<std::string> parenthesis;
    std::string value{};
    std::istringstream iss{text};
    while(iss >> value) {
        if (value == "(") {
            parenthesis.push("(");
        }
        if (value == ")") {
            if (parenthesis.empty()) {
                throw "ERROR";
            }
            parenthesis.pop();
        }
    }
    if (!parenthesis.empty()) {
        throw "ERROR";
    }
}