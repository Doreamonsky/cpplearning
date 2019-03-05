#include <iostream>

using namespace std;

//Learn struct

struct Point
{
    int x, y;
    Point(int _x, int _y) : x(_x), y(_y){};

    // Complex Way
    // Point(int _x, int _y)
    // {
    //     this->x = _x; this 指向当前对象的指针
    //     this->y = _y;
    // }
};

Point operator+(const Point &A, const Point &B)
{
    return Point(A.x + B.x, A.y + B.y);
}

//This operator (<<) applied to an output stream is known as insertion operator. It is overloaded as a member function for:
//Link: http://www.cplusplus.com/reference/ostream/ostream/operator%3C%3C/
ostream &operator<<(ostream &out, const Point &point)
{
    out << "(" << point.x << "," << point.y << ")";
    return out;
}

template <typename T>
T Sum(T *begin, T *end)
{
    T *p = begin;
    T result = 0;

    for (; p != end; p++)
    {
        result = result + *p;
    }

    return result;
}

int main()
{
    Point p0 = Point(1, 3);

    cout << p0;

    Point a(1, 2), b(12, 6);

    cout << a + b;

    Point array[] = {Point(2, 54), Point(-1, 2)};
    // cout << Sum(array, array + 1);

    Point *p;
    p = &p0; //Get memory position;
    cout << p->y;

    getchar();
}