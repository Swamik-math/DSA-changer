#include <iostream>

int main() {
    int num1, num2, sum;

    // Prompt user for input
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Calculate the sum
    sum = num1 + num2;

    // Display the result
    std::cout << "The sum is: " << sum << std::endl;

    return 0;
}