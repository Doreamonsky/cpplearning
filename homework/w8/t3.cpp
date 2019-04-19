#include <iostream>
#
using namespace std;

int main()
{
    int a[4] = {0};

    cout << "Input 4 numbers:";

    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &a[i]);
    }

    int maxScore = a[0];

    for (int i = 0; i < 4; i++)
    {
        maxScore = max(maxScore, a[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        cout << "Score: " << a[i] << " ";

        if (a[i] >= maxScore - 10)
        {
            cout << "Rank A" << endl;
        }
        else if (a[i] >= maxScore - 20)
        {
            cout << "Rank B" << endl;
        }
        else if (a[i] >= maxScore - 30)
        {
            cout << "Rank C" << endl;
        }
        else if (a[i] >= maxScore - 40)
        {
            cout << "Rank D" << endl;
        }
        else
        {
            cout << "Rank F" << endl;
        }
    }
}