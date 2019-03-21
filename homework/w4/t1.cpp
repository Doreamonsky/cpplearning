#include <iostream>

using namespace std;

int main()
{
    cout << "Enter an integer,the input ends if it is :";

    float inN;

    float negCount = 0, posCount = 0;
    float numberSum = 0;

    while (true)
    {
        cin >> inN;

        if (inN == 0)
        {
            if (negCount + posCount == 0)
            {
                cout << "No numbers are entered except 0" << endl;
                break;
            }

            float mean = numberSum / (negCount + posCount);

            cout << "The number of pos is " << posCount << endl;

            cout << "The number of neg is " << negCount << endl;

            cout << "The total is " << numberSum << endl;

            cout << "The average is " << mean;

            break;
        }

        if (inN > 0)
        {
            posCount++;
        }
        else
        {
            negCount++;
        }

        numberSum += inN;
    }
}