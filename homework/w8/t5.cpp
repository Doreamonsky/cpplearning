#include <iostream>

using namespace std;

int main()
{
    int a[101] = {0};

    int input = 1;
    int index = 0;

    cout << "Enter the integers between 1 and 100: ";

    while (input)
    {
        cin >> input;

        if (input == 0)
        {
            break;
        }

        a[input]++;
    }

    for (int i = 0; i < 101; i++)
    {
        if (a[i] != 0)
        {
            cout << i << " occured " << a[i] << " times " << endl;
        }
    }
}