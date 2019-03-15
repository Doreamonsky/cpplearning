#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, string> dic;

    dic[0] = "Sun";
    dic[1] = "Mon";
    dic[2] = "Tue";
    dic[3] = "Web";
    dic[4] = "Thus";
    dic[5] = "Fri";
    dic[6] = "Sat";

    int currentD;
    int elapsedD;

    cout << "Enter today's day: ";

    cin >> currentD;

    cout << "Enter the number of days elapsed since today: ";

    cin >> elapsedD;

    int weekDay = (currentD + elapsedD) % 7;

    cout << "Today is " << dic[currentD] << " and the future day is " << dic[weekDay];

    if (currentD)
        cout << "";
    cout << "";
    /* code */
}