#include <iostream>
using namespace std;

template <typename T>
T const &max(T const *list, unsigned int length)
{
    T const *maxValue(list);

    for (unsigned int i = 0; i < length; ++i)
    {
        if (list[i] > *maxValue)
        {
            maxValue = &list[i];
        }
    }

    return *maxValue;
}

int main()
{
    int list[] = {2, 3, 9, 12};

    cout << "Max Value is:" << *max(&list, 4) << endl;
}