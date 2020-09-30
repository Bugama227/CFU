#include <iostream>
#include <string>

using namespace std;

double calcFromString();
double calcUsingOper(double a, string op, double b);

int main()
{
    setlocale(LC_ALL, "Russian");

    cout << calcFromString();
}


double calcFromString()
{
    string s = "";
    double a, b;
    string op;

    while (true)
    {
        cout
            << "Введите математическое выражение для вычисления в формате {числовой операнд} {оператор} {числовой операнд}"
            << endl;
        getline(cin, s);

        try
        {
            a = stod(s.substr(0, ' '));
            s.erase(0, s.find(' ') + 1);
            op = s.substr(0, s.find(' '));
            s.erase(0, s.find(' ') + 1);
            b = stod(s);

            if (op == "+" || op == "-" || op == "*" || op == "/")
                break;
            else
                cout << "Не удалось распознать оператор" << endl;
        }
        catch(const invalid_argument& ia)
        {
            cout << "Введены неверные данные" << endl;
        }
    }

    return calcUsingOper(a, op, b);
}

double calcUsingOper(double a, string op, double b)
{
    if (op == "+")
        return a + b;
    else if (op == "-")
        return a - b;
    else if (op == "*")
        return a * b;
    else
        return a / b;
}