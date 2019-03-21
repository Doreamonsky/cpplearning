#include <iostream>

using namespace std;

int main()
{
    cout << "KG"
         << "      "
         << "Pound" << endl;

    for (int i = 1; i < 200; i += 2)
    {
        float equalPound = i * 2.2f;

        cout << i << "       " << equalPound << endl;
    }
}