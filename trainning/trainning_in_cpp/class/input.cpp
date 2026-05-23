#include <iostream>

int main()
{
	int number1, number2;

	std::cout << "Enter a number: ";
	std::cin >> number1;

	std::cout << " The number: " << number1 << std::endl;

	std::cout << "Enter other number: ";
	std::cin >> number2;
	std::cout << "The number: " << number2 << std::endl;

	int sum = number1 + number2;

	std::cout << "The numbers sum: " << sum << std::endl;
	
	
	return 0;
}
