#include <iostream>

using namespace std;

void displayPattern(int n)
{
    int row = 1;

    n += 1;

    while (row < n)
    {
        for (int i = 0; i < n; i++)
        {
            if (i < row)
            {
                cout << " ";
            }
            else
            {
                cout << n - i;
            }

            cout << " ";
        }

        cout << endl;

        row++;
    }
}
int main()
{
    int num;

    cout << "Enter a Number: ";
    cin >> num;
    displayPattern(num);
}