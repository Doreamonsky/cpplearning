#include <iostream>

using namespace std;

int main()
{
    int a[10] = {0};

    cout << "Input 10 numbers:";

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 9; i >= 0; i--)
    {
        cout << a[i] << " ";
    }

    cout << endl;
}