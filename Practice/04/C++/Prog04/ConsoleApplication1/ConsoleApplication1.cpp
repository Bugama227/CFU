#include <iostream>

using namespace std;

int main()
{
	int a, b, c, s;

	cout << "a = ";
	cin >> a;

	cout << "b = ";
	cin >> b;
	
	cout << "With additional var(1) or without(2) = ";
	cin >> s;

	switch (s)
	{
		case 1:
			c = a;
			a = b;
			b = c;
			break;
		case 2:
			a = a + b;
			b = a - b;
			a = a - b;
			break;
		default:
			cout << "Incorrect input" << endl;
			break;
	}

	cout
		<< "a = " << a << endl
		<< "b = " << b << endl;
}