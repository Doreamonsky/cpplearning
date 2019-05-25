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

int main(int argc, char const *argv[])
{
    int a[200] = {0};

    int length = 0;

    freopen("output.txt", "w", stdout);

    for (int i = 2; i < 1000; i++)
    {
        if (isPrimer(i))
        {
            a[length] = i;
            length++;
        }
    }

    for (int i = 1; i < length; i++)
    {
        if (a[i] - a[i - 1] == 2)
        {
            cout << "(" << a[i - 1] << "," << a[i] << ")" << endl;
        }
    }
}
