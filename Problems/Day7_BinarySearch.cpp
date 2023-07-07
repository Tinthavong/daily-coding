#include <iostream>
#include <vector>

class Day7 {
public:
    static int PrimeNumber(const std::vector<int>& inputArray, int n)
    {
        int left = 0;
        int right = inputArray.size() - 1;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;

            if (inputArray[mid] == n)
                return mid;
            else if (inputArray[mid] < n)
                left = mid + 1;
            else
                right = mid - 1;
        }

        return -1;
    }
};

int main() {

    std::vector<int> InputArray = {5, 8, 10, 23, 56, 77 , 78, 100};
    //std::vector<int> InputArray = {2, 7, 12, 17, 22, 28, 33, 39, 44, 50, 55, 60, 66, 71, 77, 82, 88, 93, 98, 104, 109, 115, 120, 126, 131, 137, 142, 148, 153, 159, 164, 170, 175, 180, 186, 191, 197, 202, 208, 213, 219, 224, 230, 235, 241, 246, 252, 257, 263, 268, 274, 279, 285, 290, 296, 301, 307, 312, 318, 323, 329, 334, 340, 345, 351, 356, 362, 367, 373, 378, 384, 389, 395, 400, 405, 411, 416, 422, 427, 433, 438, 444, 449, 455, 460, 466, 471, 477};
    int input;
    std::cout << "Enter an integer to find the index of in the array: " << std::endl;
    std::cin >> input;
    std::cout << Day7::PrimeNumber(InputArray, input);

    
    return 0;
}