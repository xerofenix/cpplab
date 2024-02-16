#include <iostream>

int main() {
    // Declare and initialize the array
    int arr[] = {1, -2, 3, -4, 5, 6, -7, 8, -9, 10};

    // Initialize the counters
    int positiveCount = 0;
    int negativeCount = 0;
    int evenCount = 0;
    int oddCount = 0;

    // Iterate over the array
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        // Check if the number is positive or negative
        if (arr[i] > 0) {
            positiveCount++;
            std::cout << "Positive number: " << arr[i] << std::endl;
        } else if (arr[i] < 0) {
            negativeCount++;
            std::cout << "Negative number: " << arr[i] << std::endl;
        }

        // Check if the number is even or odd
        if (arr[i] % 2 == 0) {
            evenCount++;
            std::cout << "Even number: " << arr[i] << std::endl;
        } else {
            oddCount++;
            std::cout << "Odd number: " << arr[i] << std::endl;
        }
    }

    // Display the counts
    std::cout << "Positive Numbers: " << positiveCount << std::endl;
    std::cout << "Negative Numbers: " << negativeCount << std::endl;
    std::cout << "Even Numbers: " << evenCount << std::endl;
    std::cout << "Odd Numbers: " << oddCount << std::endl;

    return 0;
}
