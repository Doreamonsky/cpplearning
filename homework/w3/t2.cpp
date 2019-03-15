#include <iostream>

using namespace std;

int main()
{
    cout << "Enter an integer:";
    int num;
    cin >> num;

    int flag = 0;

    if (num % 5 == 0 && num % 6 == 0)
    {
        cout << "Is 10 divisible by 5 and 6? true";
    }
    else if (num % 5 == 0 || num % 6 == 0)
    {
        cout << "Is 10 divisible by 5 and 6,but not both? true";
    }
    else
    {
        cout << "Is " << num << " divisible by 5 and 6? false";
    }
}