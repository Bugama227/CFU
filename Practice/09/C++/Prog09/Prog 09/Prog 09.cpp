#include <iostream>
#include <string>
using namespace std;

void isMeeting();

int main()
{
    setlocale(LC_ALL, "Russian");

    while (true)
        isMeeting();
}

void isMeeting()
{
    string s1, s2;
    int m1, m2, h1, h2;
    char delim;
    cout << "Введите первое время встречи" << endl;
    cin >> h1 >> delim >> m1;
    cout << "Введите второе время встречи" << endl;
    cin >> h2 >> delim >> m2;
    
    //int m1 = stoi(s1.substr(s1.length() - 2));
    //int m2 = stoi(s2.substr(s2.length() - 2));
    //int h1 = stoi(s1.substr(0, s1.length() - 3));
    //int h2 = stoi(s2.substr(0, s2.length() - 3));

    int mdiff = (m2 - m1 < 0)
            ? 60 + (m2 - m1)
            : m2 - m1
        ;

    if (h1 - h2 == 0 && mdiff < 15)
        cout << "Состоится" << endl;
    else
        cout << "Не состоится" << endl;
}