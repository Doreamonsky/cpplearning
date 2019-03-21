#include <iostream>

using namespace std;

int main()
{
    int validNumber = 0;

    for (int i = 100; i <= 1000; i++)
    {
        if (i % 5 == 0 || i % 6 == 0)
        {
            cout << i << " ";

            validNumber++;

            if (validNumber % 10 == 0)
            {
                cout << endl;
            }
        }
    }
}