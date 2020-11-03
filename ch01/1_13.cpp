#include <iostream>

int sum( const int& lo, const int& hi)
{
	if( lo > hi ){
		sum( hi, lo );
		return 0;
	}
	int sum = 0;
	for ( int i = lo; i <= hi; ++i ){
		std::cout << i << " ";
		if( i - lo % 10 == 0 && i - lo != 0)
			std::cout << std::endl;
		sum += i;
	}
	std::cout << std::endl;	
	return sum;
}


int main()
{
	int n1 = 0, n2 = 0;
	std::cout << "Enter two Num: ";
	std::cin >> n1 >> n2;
	std::cout << sum( n1, n2 ) <<std::endl;

	return 0;
}
