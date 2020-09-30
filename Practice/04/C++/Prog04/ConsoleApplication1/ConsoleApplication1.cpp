#include <iostream>
#include <tuple>

using namespace std;

tuple <int, int> threeVarSwapping(int a, int b);
void twoVarSwapping(int *a, int *b);

int main()
{
	int a, b, c, d;

	cin >> a >> b;
	cout << "a = " << a << endl << "b = " << b;

	tie(c, d) = threeVarSwapping(a, b);
	
	cout
		<< "first swapping " << endl
		<< "a = " << c << endl
		<< "b = " << d << endl;

	twoVarSwapping(&a, &b);
	cout
		<< "second swapping " << endl
		<< "a = " << a << endl
		<< "b = " << b << endl;
}
// Попытка в возврат нескольких переменных (не в массиве)
tuple <int, int> threeVarSwapping(int a, int b)
{
	int c = a;
	a = b;
	b = c;

	return make_tuple(a, b);
}
// Попытка в работу с указателями
void twoVarSwapping(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}