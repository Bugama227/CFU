#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    double a, b;
    cout << "Введите a = ";
    cin >> a;
    cout << "Введите b = ";
    cin >> b;

    int c = (int)a,
        d = (int)b;

    cout
        << "a = " << a << endl
        << "b = " << b << endl
        << "double + double " << endl
        << "+ " << a + b << endl
        << "- " << a - b << endl
        << "* " << a * b << endl
        << "/ " << a / b << endl
        << "int + int" << endl
        << "+ " << c + d << endl
        << "- " << c - d << endl
        << "* " << c * d << endl
        << "/ " << c / d << endl
        << "int + double" << endl
        << "+ " << c + b << endl
        << "- " << c - b << endl
        << "* " << c * b << endl
        << "/ " << c / b << endl
        << "double + int" << endl
        << "+ " << a + d << endl
        << "- " << a - d << endl
        << "* " << a * d << endl
        << "/ " << a / d << endl;
}