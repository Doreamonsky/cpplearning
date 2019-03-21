#include <iostream>

using namespace std;

int main()
{
    int n1 = 0, n2 = 0;

    cout << "Input Number:" << endl;

    cin >> n1 >> n2;

    int d = min(n1, n2);

    for (int i = d; i > 0; i--)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            cout << "GCD:" << d << endl;
            return 0;
        }
    }

    cout << "GCD:1";
}