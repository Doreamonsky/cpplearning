#include <iostream>
#include <time.h>
#include <cstring>

using namespace std;

int randomFromRange(int a, int b)
{
    return (rand() % (b - a + 1) + a);
}

int main()
{
    srand(time(NULL));

    int a[10] = {0};

    for (int i = 0; i < 100; i++)
    {
        a[randomFromRange(0, 9)]++;
    }

    for (int i = 0; i < 9; i++)
    {
        cout << "Num:" << i << "Times:" << a[i] << endl;
    }
}