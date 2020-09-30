#include <iostream>

using namespace std;

double getPow(int x, int n);

int main()
{
    setlocale(LC_ALL, "Russian");

    int x, n;
    cout << "Введите число для возведения в степень ";
    cin >> x;
    cout << "Введите желаемую степень ";
    cin >> n;

    cout << getPow(x, n);
}

double getPow(int x, int n)
{
    if (x == 0)
    {
        cout << "Недопустимый ввод" << endl;
        return 0;
    }

    if (n == 0)
        return 1;
    
    double pow = 1;
    bool pok = false;

    if (n < 0)
    {
        n = -n;
        pok = true;
    }

    for (int i = 0; i < n; i++)
        pow *= x;

    if (pok)
        return 1 / pow;
    else
        return pow;
    
}