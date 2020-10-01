#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    long long int s, l1, r1, l2, r2;
    cout << "Input s, l1, r1, l2, r2" << endl;
    getline(cin, str);

    s = stoll(str.substr(0, ' '));
    str.erase(0, str.find(' ') + 1);

    l1 = stoll(str.substr(0, ' '));
    str.erase(0, str.find(' ') + 1);

    r1 = stoll(str.substr(0, ' '));
    str.erase(0, str.find(' ') + 1);

    l2 = stoll(str.substr(0, ' '));
    str.erase(0, str.find(' ') + 1);

    r2 = stoll(str.substr(0, ' '));

    if (l1 + r2 >= s)
        r2 = max(s - l1, l2);
    else
        l1 = min(s - r2, r1);

    if (l1 + r2 == s)
    {
        cout << "x1 = " << l1 << endl;
        cout << "x2 = " << r2 << endl;
    }
    else
        cout << -1;
}