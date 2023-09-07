#include <iostream>
#include <vector>
#include <cmath>

int farthestCoordinate(const std::vector<int>& arr) {
    int position = 0;
    int farthest = 0;

    for (int num : arr) {
        position += num;
        farthest = std::max(farthest, std::abs(position));
    }

    return farthest;
}

int main() {
    std::vector<int> test_case_1 = {1, 1, 1};
    std::vector<int> test_case_2 = {2, -1, -2};

    int output_1 = farthestCoordinate(test_case_1);
    int output_2 = farthestCoordinate(test_case_2);

    std::cout << "Test case [1, 1, 1]: " << output_1 << std::endl;  // Expected output: 6
    std::cout << "Test case [2, -1, -2]: " << output_2 << std::endl;  // Expected output: 5

    return 0;
}
