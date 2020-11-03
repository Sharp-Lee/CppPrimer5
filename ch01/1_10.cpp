#include <iostream>

void printNum( const int& hi, const int& lo )
{
	int itr = hi;
	while( itr >= lo ){
		std::cout << itr << " ";
		--itr;
	}	
	std::cout << std::endl;

	return;
}

int main()
{
	printNum( 10, 0 );
	
	return 0;
}
