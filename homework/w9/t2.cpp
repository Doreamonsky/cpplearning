#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<float, int> distinctNumList;

    cout << "Enter Ten Numbers: ";

    for (int i = 0; i < 10; i++)
    {
        float tempInput = 0;
        cin >> tempInput;

        auto it = distinctNumList.find(tempInput);

        if (it == distinctNumList.end())
        {
            distinctNumList[tempInput] = 1;
        }
        else
        {
            distinctNumList[tempInput]++;
        }
    }
    cout << "Distinct Number: ";

    for (auto p : distinctNumList)
    {
        if (p.second == 1)
        {
            cout << p.first << " ";
        }
    }

    cout << endl;

    cout << "Number: ";

    for (auto p : distinctNumList)
    {
        cout << p.first << " ";
    }

    cout << endl;
}
