#include <iostream>
#include <numeric>
#include <math.h>
using namespace std;

float GetMean(int num[], int length)
{
    float sum = accumulate(num, num + length, 0);
    return sum / length;
}

float GetSD(int num[], int length)
{
    float var = 0;
    float mean = GetMean(num, length);

    for (int i = 0; i < length; i++)
    {
        var += (num[i] - mean) * (num[i] - mean);
    }
    var = var / (length - 1);
    return sqrt(var);
}

int main(int argc, char const *argv[])
{
    int num[10] = {0};

    for (int i = 0; i < 10; i++)
    {
        cin >> num[i];
    }

    float mean = GetMean(num, 10);
    float sd = GetSD(num, 10);

    freopen("TempResult.txt", "w", stdout);

    cout << "Mean:" << mean << endl;
    cout << "SD:" << sd << endl;

    return 0;
}
