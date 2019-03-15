#include <iostream>

using namespace std;

float det(float a11, float a12, float a21, float a22)
{
    return a11 * a22 - a12 * a21;
}

int main()
{
    float x1, x2, y1, y2;

    float x3, x4, y3, y4;

    float a11, a12, a21, a22, b1, b2;

    cout << "Enter x1,y1,x2,y2,x3,y3,x4,y4: ";

    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    a11 = y1 - y2;
    a12 = -1 * (x1 - x2);

    a21 = y3 - y4;
    a22 = -1 * (x3 - x4);

    b1 = (y1 - y2) * x1 - (x1 - x2) * y1;
    b2 = (y3 - y4) * x3 - (x3 - x4) * y3;

    float d = det(a11, a12, a21, a22);

    float d1 = det(b1, a12, b2, a22);

    float d2 = det(a11, b1, a21, b2);

    if (d == 0)
    {
        cout << "The two lines are parallel";
    }
    else
    {
        float x = d1 / d;
        float y = d2 / d;

        cout << "The intersecting point is at (" << x << "," << y << ")";
    }
}
