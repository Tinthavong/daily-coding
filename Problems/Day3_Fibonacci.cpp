#include <iostream>
#include <string>

class Day3 {
public:
    static int Fibonacci(int n)
    {
         if (n <= 1) {
            return n;
        }
        return Fibonacci(n -1) + Fibonacci(n - 2);
    }
};

int main() { 
    int input;
    std::cout << "Enter an integer: ";
    std::cin >> input;
    
    int output = Day3::Fibonacci(input);
    
    std::cout << "Fibonacci of: " << input << " is " << output << std::endl;
    
    return 0;

}