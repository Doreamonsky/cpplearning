#include <iostream>
#include "Fun.hpp"

using namespace std;

template int const &max(int const *list, unsigned int length);

int main()
{
    int list[] = {2, 3, 9, 12};

    cout << "Max Value is:" << *max(&list, 4) << endl;
}