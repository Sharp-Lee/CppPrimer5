#include <iostream>

int main()
{
	int num1 = 0, num2 = 0;
	std::cin >> num1 >> num2;
	std::cout << num1;
	std::cout << " * ";
	std::cout << num2;
	std::cout << " = ";
	std::cout << num1 * num2;
	std::cout << std::endl;
	
	return 0;
}
