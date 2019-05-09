#include <iostream>
#include <math.h>

using namespace std;

bool isPrimer(int n)
{
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

bool isPalindrome(int n)
{
    int a = 0, b = n;

    while (b > 0)
    {
        a = a * 10 + b % 10;
        b /= 10;
    }
    if (a == n)
        return true;
    else
        return false;
}

int main()
{
    int sum = 0;

    int n = 2;

    while (sum < 100)
    {
        /* code */
        if (isPrimer(n) && isPalindrome(n))
        {
            sum++;
            cout << n << " ";
        }
        n++;
    }
}