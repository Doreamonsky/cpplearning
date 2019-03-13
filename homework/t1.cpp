#include <iostream>
using namespace std;

int main()
{
    double t, ct;

    cout << "Enter a degree in Celsius:";

    cin >> t;

    ct = (9.0 / 5.0) * t + 32;

    cout << t << " Celsius is " << ct << " Fahrenheit" << endl;
}