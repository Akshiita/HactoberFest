#include <iostream>
#include <vector>

bool linearSearch(const std::vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == target) {
            return true; // Element found
        }
    }
    return false; // Element not found
}

int main() {
    std::vector<int> arr = {5, 2, 9, 1, 5, 6};
    int target = 9;

    if (linearSearch(arr, target)) {
        std::cout << "Element found!" << std::endl;
    } else {
        std::cout << "Element not found!" << std::endl;
    }

    return 0;
}
