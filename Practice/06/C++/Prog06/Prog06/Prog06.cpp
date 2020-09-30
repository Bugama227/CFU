#include <iostream>

using namespace std;

double getValue(string str);
void getRoots(double a, double b, double c);

int main()
{
    setlocale(LC_ALL, "Russian");

    double a = getValue("a");
    double b = getValue("b");
    double c = getValue("c");

    getRoots(a, b, c);
}

double getValue(string str) 
{
    string buff = "Введите число " + str + " ";
    double a;

    while (true)
    {
        cout << buff;
        cin >> a;
        if (cin.get() == (double)'\n')
            break;
        else
        {
            cout << "Введено не число" << endl;
            cin.clear();
            cin.ignore(32767, '\n');
        }
    }

    return a;
}

void getRoots(double a, double b, double c)
{
    if (a == 0 && b != 0)
    { 
        cout << "x = " << -c / b << endl;
        return;
    }
    else if (a == 0 && b == 0 && c != 0)
    {
        cout << "Решений нет" << endl;
        return;
    }
    else if (a == 0 && b == 0 && c == 0)
    {
        cout << "(0 == 0) => Решений бесконечно много" << endl;
    }
    
    double disc = b * b - 4 * a * c;
    
    if (disc > 0)
        cout
        << "x1 = " << (-b + sqrt(disc)) / 2 * a << endl
        << "x2 = " << (-b - sqrt(disc)) / 2 * a << endl;
    else if (disc == 0)
        cout << "x1 = " << (-b + sqrt(disc)) / 2 * a << endl;
    else
        cout << "Действительных корней нет" << endl;
}