#include <iostream>
#include <math.h>

using namespace std;

float sideL(float x1, float y1, float x2, float y2)
{
    return pow(pow((x1 - x2), 2) + pow((y1 - y2), 2), 0.5f);
}

int main()
{
    float x1, y1, x2, y2, x3, y3;

    cout << "Enter three points for a triangle: ";

    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    cout << endl;

    float s1 = sideL(x1, y1, x2, y2);
    float s2 = sideL(x2, y2, x3, y3);
    float s3 = sideL(x3, y3, x1, y1);

    float s = (s1 + s2 + s3) * 0.5f;

    float area = pow(s * (s - s1) * (s - s2) * (s - s3), 0.5f);

    cout << "The area of the riangle is " << area << endl;
}