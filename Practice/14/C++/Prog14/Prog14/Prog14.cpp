#include <iostream>

using namespace std;

int getPowOfTwo(long long int n);

int main()
{
    long long int n;

    cout << "Введите число n ";
    cin >> n;
    cout << getPowOfTwo(n);
}

int getPowOfTwo(long long int n)
{
    long long int sum = 1;
    int count = 0;

    while (sum <= n)
    {
        sum *= 2;
        count++;
    }

    return count;
}