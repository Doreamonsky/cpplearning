#include <iostream>
#include <time.h>
#include <algorithm>
#include <list>

using namespace std;

int randomFromRange(int a, int b)
{
    return (rand() % (b - a + 1) + a);
}

int binarySearch(int *a, int low, int high, int key)
{
    if (low > high)
        return -1;

    int mid = (low + high) / 2;

    if (a[mid] == key)
        return mid;

    if (a[mid] > key)
        return binarySearch(a, low, mid - 1, key);
    else
        return binarySearch(a, mid + 1, high, key);
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
    //Sort Before binary Search
    sort(a, a + range);

    int randomIndex = randomFromRange(0, range);
    int randomElement = a[randomIndex];

    //o(logn)foundIndex
    cout << "Time: o(log" << range << ")" << endl;

    int foundIndex = binarySearch(a, 0, range, randomElement);

    cout << "Find Element: " << a[foundIndex] << " At Index: " << foundIndex << endl;

    return 0;
}
