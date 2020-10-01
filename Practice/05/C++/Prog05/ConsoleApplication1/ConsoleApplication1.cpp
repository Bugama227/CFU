#include <iostream>
#include <math.h>

using namespace std;

double accelerMotion(double x0, double v0, double t);

const double G = 9.8;

int main()
{
    double x0, v0, t;

    cout << "Insert x0, v0, t" << endl;
    cin >> x0 >> v0 >> t;

    cout << accelerMotion(x0, v0, t);
}

double accelerMotion(double x0, double v0, double t)
{
    return abs((x0 + v0 * t - (G * t * t) / 2) - x0);
}