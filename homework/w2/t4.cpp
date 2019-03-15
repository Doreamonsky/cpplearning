#include <iostream>

using namespace std;

int main()
{
    float balance, rate;

    cout << "Enter balance and interest rate (e.g. 3 for 3%): ";

    cin >> balance >> rate;

    cout << endl;

    float r = balance * (rate / 1200);

    cout << "The interest is " << r;
}