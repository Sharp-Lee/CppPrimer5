#include <iostream>

using namespace std;

int main()
{
	cout << 'a' << ':' << sizeof('a') << ' ' << L'a' << ':' << sizeof(L'a') << ' ' << "a" << ':' << sizeof("a") << ' ' << L"a" << ':' << sizeof(L"a") << endl;

	return 0;
}
