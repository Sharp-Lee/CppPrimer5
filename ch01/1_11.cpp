#include <iostream>

using std::cout;
using std::endl;
using std::cin;

void printNum( const int& hi, const int& lo )
{
	if ( hi < lo ){
		printNum( lo, hi );
		return;
	}
	for ( int i = hi; i >= lo; --i){
		cout << i << " ";
	}
	cout << endl;
	return;
}

int main()
{
	cout << "Enter tow intNum: ";
	int n1 = 0, n2 = 0;
	cin >> n1 >> n2;
	printNum( n1, n2 );
	
	return 0;
}
