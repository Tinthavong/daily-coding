#include <iostream>
#include <vector>
#include <string>

class Day4 {
public:
    static void TwoSum(const std::vector<int>& inputArray, int n) //n = target to find
    {
        int outOne = 0;
        int outTwo = 0;

        for(int i = 0; i < inputArray.size(); i++)
        {
            for(int j = i + 1; j < inputArray.size(); j++)
            {
                if (inputArray[i] + inputArray[j] == n)
                {
                    outOne = inputArray[i];
                    outTwo = inputArray[j];
                    std::cout << "[" << outOne << "," << outTwo << "]" << std::endl;
                    return;
                }
            }
        }
        std::cout << "No result for Two Sum found!" << std::endl;

    }
};

int main() {
    bool ready = false;

    std::vector<int> inputArray;
    int size;
    while(!ready)
    {
        std::cout << "Enter an integer between 0-10 for the size of the array: ";
        std::cin >> size;
        if(size <= 10) ready = true;
    }


    std::cout << "Enter " << size << " integers for the array: ";
    for (int i = 0; i < size; i++) {
        int num;
        std::cin >> num;
        inputArray.push_back(num);
    }
    
    
    int input;
    std::cout << "Enter an integer: ";
    std::cin >> input;

    Day4::TwoSum(inputArray, input);
    
    return 0;
}