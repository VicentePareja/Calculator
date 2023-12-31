#include <iostream>

int main()
{
    // first number
    double first_number;
    std::cout << "Enter your first number: \n";
    std::cin >> first_number;

    // operation
    char operation;
    std::cout << "Enter the math operation (+, -, *, /): \n";
    std::cin >> operation;

    // second number
    double second_number;
    std::cout << "Enter de second number: \n";
    std::cin >> second_number;

    switch (operation)
    {
    case '+':
        std::cout << first_number + second_number << "\n";
        break;

    case '-':
        std::cout << first_number - second_number << "\n";
        break;

    case '*':
        std::cout << first_number * second_number << "\n";
        break;

    case '/':
        std::cout << first_number / second_number << "\n";
        break;

    default:
        std::cout << "Operation invalid.\n";
    }
}