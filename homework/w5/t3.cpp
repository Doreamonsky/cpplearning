#include <iostream>

using namespace std;

bool isPrime(int number)
{
    bool flag = true;

    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            flag = false;
        }
    }
    if (flag)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int numberPrinted = 0;

    for (int i = 2; i < 1000; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";

            ++numberPrinted;

            if (numberPrinted % 8 == 0)
                cout << endl;
        }
    }
}