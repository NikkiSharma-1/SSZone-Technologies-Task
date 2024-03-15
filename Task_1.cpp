#include <iostream>

int main() {
    char op;
    double num1, num2, result;

    // Get operator and operands from user
    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> op;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    // Perform operation based on operator
    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                std::cout << "Error: Division by zero is not allowed." << std::endl;
                return 1;
            }
            break;
        default:
            std::cout << "Error: Invalid operator." << std::endl;
            return 1;
    }

    // Display result
    std::cout << "Result: " << result << std::endl;

    return 0;
}
