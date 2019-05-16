#include <iostream>

using namespace std;

int reverseDisplay(int val)
{
    if (val / 10 == 0)
    {

        return val;
    }

    int temp = 1;

    int b = val;

    while (b / 10 > 0)
    {
        temp *= 10;

        b = b / 10;
    }

    return val % 10 * temp + reverseDisplay(val / 10);
}

int main()
{
    cout << "Input a Number:";

    int num = 0;

    cin >> num;

    cout << reverseDisplay(num);
}