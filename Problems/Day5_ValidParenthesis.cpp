#include <iostream>
#include <stack>
#include <string>

class Day5 {
public:
    static void ValidParenthesis(const std::string str)
    {       
        std::stack<char> stackParentheses;
        bool balancedParenthesis = false;

        for (char c : str) {
            if (c == '(' || c == '[' || c == '{') //Push opening brackets into the stack first. If character = one of the opening brackets, push(character).
            {
                stackParentheses.push(c);
            } 
            else if (c == ')' || c == ']' || c == '}') 
            {
                if (stackParentheses.empty()) 
                {
                    balancedParenthesis = false; //Unmatched closing parenthesis
                    break;
                }

                char top = stackParentheses.top();
                stackParentheses.pop();

                if ((c == ')' && top != '(') ||
                    (c == ']' && top != '[') ||
                    (c == '}' && top != '{')) 
                    {
                        balancedParenthesis = false;  // Mismatched opening and closing parenthesis
                        break;
                    }
            }
    }
        balancedParenthesis = stackParentheses.empty();  // True if all parentheses are matched and balanced

        if(balancedParenthesis)
        {
            std::cout << str <<  " is balanced" << std::endl;
        }
        else
        {
            std::cout << str <<  " is NOT balanced" << std::endl;
        }
    }
};

int main() {
    std::string input;
    //std::cout << "Enter a string of parenthesis:";
    //std::getline(std::cin, input);

    std::string defaultString1 = "(([{()}]))";
    std::string defaultString2 = "[({)}]";

    Day5::ValidParenthesis(defaultString1);
    Day5::ValidParenthesis(defaultString2);
    return 0;
}