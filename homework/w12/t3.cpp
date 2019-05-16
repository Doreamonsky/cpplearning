#include <iostream>

using namespace std;

int gcd(int m, int n)
{
    if (m % n == 0)
    {
        return n;
    }
    else
    {
        gcd(n, m % n);
    }
}
int main()
{
    cout << "Input 2 numbers" << endl;

    int m, n;

    cin >> m >> n;

    cout << "gcd: " << gcd(m, n);
}