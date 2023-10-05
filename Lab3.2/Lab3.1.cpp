#include <iostream>

using namespace std;

int main()
{
    double a;
    double b;
    double c;
    double x;
    double f;

    cout << "Enter a = "; cin >> a;
    cout << "\nEnter b = "; cin >> b;
    cout << "\nEnter c = "; cin >> c;
    cout << "\nEnter x = "; cin >> x;

    if ((x < 0) && (b != 0))
        f = -((2 * x - c) / (c * x - a));
    else
        if ((x > 0) && (b == 0))
            f = (x - a) / (x - c);
        else
            f = -(x / c) + (-c / 2 * x);

    cout << "\nF = " << f;
}

