#include <iostream>
#include <algorithm>

using namespace std;

int randomFromRange(int a, int b)
{
    return (rand() % (b - a + 1) + a);
}

int main(int argc, char const *argv[])
{
    freopen("data.txt", "r", stdin);
    freopen("data.txt", "w", stdout);

    for (int i = 0; i < 100; i++)
    {
        cout << randomFromRange(0, 100) << " ";
    }

    int a[100] = {0};

    for (int i = 0; i < 100; i++)
    {
        cin >> a[i];
    }

    sort(a, a + 100);

    cout << "Sorted" << endl;

    for (int i = 0; i < 100; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
