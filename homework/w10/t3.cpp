#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the values:" << endl;

    int lastInput = 0, times = 1;

    for (int i = 0; i < 8; i++)
    {
        int tempInput = 0;

        cin >> tempInput;

        if (lastInput == tempInput && i != 0)
        {
            times++;
        }
        else
        {
            times = 1;
        }

        if (times >= 4)
        {
            cout << "True" << endl;
            exit(0);
        }
        lastInput = tempInput;
    }

    cout << "False" << endl;

    return 0;
}