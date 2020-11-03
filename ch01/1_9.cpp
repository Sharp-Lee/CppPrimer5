#include <iostream>

int sum( const int& lo, const int& hi)
{
	int sum = 0, i = lo;
	while( i <= hi ){
		sum += i;
		++i;
	}
	
	return sum;
}

int main()
{
	std::cout << "sum = " << sum( 50, 100 ) <<std::endl;

	return 0;
}
