#include <iostream>
#include <numeric>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
    vector<float> numList;

    cout << "Input Ten Numbers:" << endl;

    while (numList.size() < 10)
    {
        float tempInput;
        cin >> tempInput;
        numList.push_back(tempInput);
    }

    float sum = accumulate(numList.begin(), numList.end(), 0);
    float mean = sum / numList.size();
    float var = 0;

    for (auto p : numList)
    {
        var += (p - mean) * (p - mean);
    }

    var = var / (numList.size() - 1);

    float sd = sqrt(var);

    cout << "Mean: " << mean << " SD:" << sd;
}