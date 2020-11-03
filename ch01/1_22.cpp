#include <iostream>
#include "1/Sales_item.h"

using namespace std;

int main()
{
	Sales_item total;
	if( cin >> total ){
		Sales_item curr;
		while( cin >> curr ){
			if ( total.isbn() == curr.isbn() )
				total += curr;
			else{
				cout << total << endl;
				total = curr;
			}
		}
		cout << total << endl;
	}
	else
	{
		cerr << "No data cin." << endl;
	}

	return 0;
}
