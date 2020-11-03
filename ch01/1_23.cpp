#include <iostream>
#include "1/Sales_item.h"

using namespace std;

int main()
{
	Sales_item base;
	int cnt = 1;
	if ( cin >> base ){
		Sales_item curr;
		while( cin >> curr ){
			if (base.isbn() == curr.isbn() )
				++cnt;
			else{
				cout << base.isbn() << " occurs " << cnt << " times." << endl;
				base = curr;
				cnt = 1;
			}
		}
		cout << base.isbn() << " occurs " << cnt << " times." << endl;
	}

	return 0;
}
