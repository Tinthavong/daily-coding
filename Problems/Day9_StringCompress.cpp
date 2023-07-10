#include <iostream>
#include <string>

//Day 9: String Compression Implement a method to perform basic string compression using the counts of repeated characters. For example, the string "aabcccccaaa" would become "a2b1c5a3".

class Day9 {
public:
static std::string stringCompressor(const std::string& input)
{
    int count = 1;
    std::string compressedString = "";
    char previousChar = input[0];

    for(int i = 1; i < input.size(); ++i)
    {
        if(input[i] == previousChar) 
        {
            count++;
        }
        else
        {
            compressedString += previousChar + std::to_string(count);
            count = 1;
            previousChar = input[i];
        }   
    }

    compressedString += previousChar + std::to_string(count);
    return (compressedString.size() < input.size()) ? compressedString : input;
}
};

int main() { 
    std::string input = "aabcccccaaa";
    std::cout << "Enter a string: DEFAULT = aabcccccaaa" << std::endl;
    //std::getline(std::cin, input);
    
    std::string output = Day9::stringCompressor(input);
    
    std::cout << "Compressed string: " << output << std::endl;

}