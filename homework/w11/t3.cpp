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

int main()
{
    int sum = 0;

    for (int i = 2; i <= 10000; i++)
    {
        if (isPrimer(i))
        {
            sum++;
        }
    }

    cout << "Count: " << sum;
}