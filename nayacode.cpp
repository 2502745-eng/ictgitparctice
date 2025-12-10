#include <iostream>

// Function to calculate the factorial of a number
long long calculateFactorial(int n) {
    // Input validation: Factorial is only defined for non-negative integers
    if (n < 0) {
        std::cerr << "Error: Factorial is not defined for negative numbers." << std::endl;
        return -1; // Return a sentinel value for error
    }

    // Base case: 0! is 1
    if (n == 0) {
        return 1;
    }

    // Iterative calculation
    long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }

    return result;
}

int main() {
    int number;

    // Prompt the user for input
    std::cout << "Enter a non-negative integer to find its factorial: ";
    
    // Read the input number
    if (!(std::cin >> number)) {
        std::cerr << "Invalid input. Please enter a valid integer." << std::endl;
        return 1;
    }

    // Call the calculation function
    long long factorial = calculateFactorial(number);

    // Output the result (if no error occurred)
    if (factorial != -1) {
        std::cout << "The factorial of " << number << " is: " << factorial << std::endl;
    }

    return 0;
}