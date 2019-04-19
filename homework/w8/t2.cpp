#include <iostream>

using namespace std;

int main()
{
    int a[10] = {0};

    int index = 0;

    int min = 0;

    cout << "Input 10 numbers:";

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    min = a[0];

    for (int i = 0; i < 10; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            index = i;
            break;
        }
    }

    cout << "Min Value: " << min << " at index of " << index << endl;
}