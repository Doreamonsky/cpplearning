#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Enter a number between 0 and 1000:";

    int sum = 0;

    cin >> num;

    while (num)
    {
        sum += num % 10;

        num /= 10;
    }

    cout << sum;
}