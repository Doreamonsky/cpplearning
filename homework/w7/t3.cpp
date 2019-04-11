#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout << "Enter ten numbers:";

    float num = 0;

    float sum = 0, squareSum = 0;

    for (int i = 0; i < 10; i++)
    {
        cin >> num;

        sum += num;
        squareSum += num * num;
    }

    float mean = sum / 10.0f;

    float sd = pow((squareSum - (sum * sum) / 10.0f) / 9.0f, 0.5f);

    cout << "Mean:" << mean << endl
         << "SD:" << sd << endl;
}