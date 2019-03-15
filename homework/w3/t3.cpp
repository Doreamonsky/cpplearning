#include <iostream>

using namespace std;

int main()
{
    cout << "Enter an three-digit integer:";
    int num;
    cin >> num;

    int a = num / 100;
    int b = num % 10;

    if (a == b)
    {
        cout << num << " is a palindrome";
    }
    else
    {
        cout << num << " is not a palindrome";
    }
}