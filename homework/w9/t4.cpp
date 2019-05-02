#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a[10], b[10];

    cout << "Enter 10 Numbers" << endl;

    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }

    cout << "Numbers in B:" << endl;

    for (int i = 0; i < 10; i++)
    {
        b[i] = a[9 - i];
        cout << b[i] << " ";
    }

    return 0;
}
