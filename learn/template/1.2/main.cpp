#include <iostream>
#include <Template.h>

using namespace std;

int main()
{
    int list[] = {2, 3, 9, 12};

    cout << "Max Value is:" << *max(&list, 4) << endl;
}