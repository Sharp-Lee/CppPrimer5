#include <iostream>

int main()
{
	std::cout << "Enter a array: ";
	int sum = 0;
	for( int i = 0; std::cin >> i; sum += i );
	std::cout << sum << std::endl;
	return 0;
}
