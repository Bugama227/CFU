#include <iostream>
#include <time.h>
#include <string>

using namespace std;

int guessGame();

int main()
{
    setlocale(LC_ALL, "Russian");

    int n;
    while (true)
    {
        cout << "Вы хотите сыграть?(1) или выйти(2)?" << endl;
        cin >> n;
        if (n == 1)
            guessGame();
        else
            break;
    }
}

int guessGame()
{
    srand(time(0));
    int goal = rand() % 101;
    int count = 0;
    int buff;

    cout << "Попробуй угадать" << "("<< goal << ")" << endl;

    while (count < 5)
    {
        cin >> buff;
        if (buff < goal)
            cout << "Ваше число меньше" << endl;
        else if (buff > goal)
            cout << "Ваше число больше" << endl;
        else
        {
            cout << "Вы угадали, число действительно " << goal << endl;
            return 0;
        }
        count++;
    }
    cout << "Вам так и не удалось отгадать число, а это было " << goal << endl;
}