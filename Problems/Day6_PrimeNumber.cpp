#include <iostream>
#include <cmath>

class Day6 {
public:
    static bool PrimeNumber(int input)
    {
        if(input <= 1) return false;

        for(int i = 2; i <= sqrt(input); i++)
        {
            if (input % i == 0) 
            {
                return false;
            }
        }
       return true;
    }
};

int main() {
    
    int input;
    std::cout << "Enter an integer: ";
    std::cin >> input;
    
    if(Day6::PrimeNumber(input))
    {
        std::cout << input << " is a prime number" << std::endl;
    }
    else
    {
        std::cout << input << " is NOT a prime number" << std::endl;
    }
    
    return 0;
}