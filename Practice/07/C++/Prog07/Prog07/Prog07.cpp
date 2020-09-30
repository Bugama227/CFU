#include <iostream>
#include <string>

using namespace std;

double getValue(string str);
double getSquareByCoords();
double getSquareByLength();
int getOption();

int main()
{
    setlocale(LC_ALL, "Russian");

    int s;
    bool flag = true;

    while (flag)
    {
        int s = getOption();

        switch (s)
        {
            case 1:
                cout << getSquareByLength() << endl;
                break;
            case 2:
                cout << getSquareByCoords() << endl;
                break;
            case 3:
                flag = false;
            default:
                cout << "Повторите попытку ввода" << endl;
        }
    }
}

int getOption()
{
    int s;
    while (true)
    {
        cout << "Выберите способ определния площади: (1)длины, (2)координаты. (3)Выйти" << endl;
        cin >> s;

        if (cin.fail())
        {
            cout << "Попробуйте снова" << endl;
            std::cin.clear();
            std::cin.ignore(32767, '\n');
        }
        else
            return s;
    }
}

double getValue(string str)
{
    double a;

    while (true)
    {
        cout << "Введите длину стороны " << str << " ";
        cin >> a;
        
        if (cin.get() == (double)'\n' && a > 0)
            break;
        else
        {
            cout << "Введены некорректные данные" << endl;
            cin.clear();
            cin.ignore(32767, '\n');
        }
    }
    return a;
}

double getSquareByLength()
{
    double a = getValue("a");
    double b = getValue("b");
    double c = getValue("c");
    double p = (a + b + c) / 2;

    if (a + b > c && b + c > a && a + c > b)
        return sqrt(p * (p - a) * (p - b) * (p - c));
    else
    {
        cout << "Треугольник не существует" << endl;

        return 0;
    }
}

double getSquareByCoords()
{
    string str;
    double lele, lulu;
    //                x1    y1    x2    y2    x3    y3
    double buff[6] = {NULL, NULL, NULL, NULL, NULL, NULL};
    //                0     1     2     3     4     5
    
    int i = 0, j = 1;
    
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    while (buff[5] == NULL)
    {
        
        cout << "Введите координаты точки через пробел ";
        getline(cin, str);
        
        try
        {
            if (str.find(' ') != -1 && str.length() > 0)
            {
                lele = std::stod(str.substr(0, ' '));
                str = str.erase(0, str.find(' ') + 1);
                lulu = std::stod(str);
                
                buff[i] = lele;
                buff[j] = lulu;
                
                i += 2;
                j += 2;
            }
            else
                cout << "Введены некорректные данные" << endl;
        }
        catch (const std::invalid_argument& ia)
        {
            cout << "Введены некорректные данные" << endl;
        }
    }

    return abs((buff[0] - buff[4]) * (buff[3] - buff[5]) - (buff[2] - buff[4]) * (buff[1] - buff[5])) / 2;
}