#include <cstdio>

void swap2(int &a, int &b)
{
    int t = b;
    b = a;
    a = t;
}

int main()
{
    int a, b;

    while (scanf("%d%d", &a, &b) == 2)
    {
        swap2(a, b);
        printf("%d %d", a, b);
    }

    return 0;
}
