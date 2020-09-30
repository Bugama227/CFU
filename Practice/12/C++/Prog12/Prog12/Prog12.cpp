#include <iostream>

using namespace std;

long long int getFactorial(int fact);

int main()
{
    setlocale(LC_ALL, "Russian");

    long long int fact;

    cout << "Введите число для превращения в факториал ";
    cin >> fact;

    if (fact < 0)
        cout << "Введено недопустимое значение (1 <= n <= 10**9)" << endl;
    else
        cout << "Факториал от " << fact << " = " << getFactorial(fact);
}

long long int getFactorial(int fact)
{
    long long int sum = 1;

    if (fact == 0)
        return 1;
    else
    {
        for (int i = 1; i <= fact; i++)
            sum *= i;

        return sum;
    }
}