#include <iostream>

int main() {
	double firstNumber;
	double secondNumber;
	char operation;

	std::cout << "Enter an operator (+, -, *, /): ";
	std::cin >> operation;

	std::cout << "Enter two numbers: ";
	std::cin >> firstNumber >> secondNumber;

	switch (operation) {
		case '+':
			std::cout << "Result: " << firstNumber + secondNumber << '\n';
			break;
		case '-':
			std::cout << "Result: " << firstNumber - secondNumber << '\n';
			break;
		case '*':
			std::cout << "Result: " << firstNumber * secondNumber << '\n';
			break;
		case '/':
			if (secondNumber == 0) {
				std::cout << "Error: cannot divide by zero.\n";
				return 1;
			}
			std::cout << "Result: " << firstNumber / secondNumber << '\n';
			break;
		default:
			std::cout << "Error: invalid operator.\n";
			return 1;
	}

	return 0;
}
