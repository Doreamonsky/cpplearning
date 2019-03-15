#include <iostream>

using namespace std;

int main()
{
    int min;

    cout << "Enter the number of minutes: ";

    cin >> min;

    cout << endl;

    int yearMin = 365 * 24 * 60;

    int year = min / yearMin;

    int day = (min % yearMin) / (24 * 60);

    cout << min << " minutes is approximately " << year << " years and " << day << " days.";
}