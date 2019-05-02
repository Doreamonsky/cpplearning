#include <iostream>
#include <time.h>

using namespace std;

int randomFromRange(int a, int b)
{
    return (rand() % (b - a + 1) + a);
}

int main(int argc, char const *argv[])
{
    const int range = 100000;

    int a[range];

    srand(time(NULL));

    for (int i = 0; i < range; i++)
    {
        a[i] = rand();
    }

    int randomIndex = randomFromRange(0, range);
    int randomElement = a[randomIndex];

    //o(n)
    cout << "Time: O(" << range << ")" << endl;

    for (int i = 0; i < range; i++)
    {
        if (a[i] == randomElement)
        {
            cout << "Find Element: " << a[i] << "At Index: " << i << endl;
            break;
        }
    }
    return 0;
}
