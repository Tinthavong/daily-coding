#include <iostream>
#include <string>

class Day1 {
public:
    // Function to reverse a string in-place
    static void reverseString(std::string& str) {
        // Initialize two pointers: left and right
        int left = 0;
        int right = str.length() - 1;
        
        // Swap characters from the outer ends towards the middle
        while (left < right) {
            std::swap(str[left], str[right]);
            left++;
            right--;
        }
    }
};

int main() { 
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    
    // Call the reverseString function to reverse the input string
    Day1::reverseString(input);
    
    // Print the reversed string
    std::cout << "Reversed string: " << input << std::endl;
    
    return 0;
    
}
