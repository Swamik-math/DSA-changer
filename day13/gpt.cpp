// #include <iostream>

// int main() {
//     int num1, num2, sum;

//     // Prompt user for input
//     std::cout << "Enter the first number: ";
//     std::cin >> num1;

//     std::cout << "Enter the second number: ";
//     std::cin >> num2;

//     // Calculate the sum
//     sum = num1 + num2;

//     // Display the result
//     std::cout << "The sum is: " << sum << std::endl;

//     return 0;
// }


#include <iostream>

int main() {
    int a, b, c;

    std::cout << "Enter three numbers: ";
    std::cin >> a >> b >> c;

    if (a >= b && a >= c) {
        std::cout << "The largest number is: " << a << std::endl;
    } else if (b >= a && b >= c) {
        std::cout << "The largest number is: " << b << std::endl;
    } else {
        std::cout << "The largest number is: " << c << std::endl;
    }

    return 0;
}