#include <iostream>

using namespace std;

int main()
{
    int levelNum = 0;

    cout << "Enter the number of lines: ";

    cin >> levelNum;

    for (int i = 1; i <= levelNum; i++)
    {
        for (int j = 0; j < levelNum - i; j++)
        {
            cout << "  ";
        }

        for (int k = i; k > 0; k--)
        {
            cout << k << " ";
        }

        for (int k = 2; k <= i; k++)
        {
            cout << k << " ";
        }

        cout << endl;
    }
}