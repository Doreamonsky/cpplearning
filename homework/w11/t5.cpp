#include <iostream>
#include <cmath>

using namespace std;

bool isValid(float a, float b, float c)
{
    bool c1 = a + b > c && a - b < c;
    bool c2 = a + c > b && a - c < b;
    bool c3 = b + c > a && b - c < a;

    return c1 && c2 && c3;
}

float area(float a, float b, float c)
{
    float s = (a + b + c) * 0.5f;

    float area = sqrt(s * (s - a) * (s - b) * (s - c));

    return area;
}

int main()
{
    cout << "Enter 3 sides";

    float a, b, c;

    cin >> a >> b >> c;

    if (isValid(a, b, c))
    {
        cout << "Area: " << area(a, b, c);
    }
    else
    {
        cout << "Invalid";
    }
}