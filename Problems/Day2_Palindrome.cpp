#include <iostream>
#include <string>

class Day2 {
public:
    static bool  isPalindrome(const std::string& str){
    int left = 0;
    int right = str.size() - 1;

        while (left < right) {
            if (str[left] != str[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};

int main() { 
    std::string input;
    std::string output;

    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    
    if(Day2::isPalindrome(input))
    {
        output = "Yes!";
    }
    else
    {
        output = "No!";
    }
    
    // Print the reversed string
    std::cout << "Is " << input << " a palindrome? " << output << std::endl;
    
    return 0;
}