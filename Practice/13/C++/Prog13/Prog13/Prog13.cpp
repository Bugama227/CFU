#include <iostream>

using namespace std;

bool isPrime(long long int n);

int main()
{
    setlocale(LC_ALL, "Russian");

    long long int n;

    cout << "Введите число для проверки ";
    cin >> n;

    isPrime(n);
}

bool isPrime(long long int n)
{
    for (long long int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "Это составное число делится на " << i << " без остатка";
            return false;
        }
    }
    cout << "Это простое число";
    return true;
}