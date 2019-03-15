#include <iostream>

using namespace std;

int main()
{
    float a, b, c;

    cout << "Input length of three sides: ";
    cin >> a >> b >> c;

    bool s1 = a + b > c && a - b < c;
    bool s2 = a + c > b && a - c < b;
    bool s3 = b + c > a && b - c < a;

    if (s1 && s2 && s3)
    {
        cout << "Length: " << a + b + c;
    }
    else
    {
        cout << "Not Valid";
    }
}