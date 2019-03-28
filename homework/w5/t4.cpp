#include <iostream>

using namespace std;

int main()
{
    int numberPrinted = 0;

    for (int i = 101; i <= 2100; i++)
    {
        if ((i % 4 == 0 && !(i % 100 == 0)) || i % 400 == 0)
        {
            cout << i << " ";
            ++numberPrinted;

            if (numberPrinted % 10 == 0)
            {
                cout << endl;
            }
        }
    }
}