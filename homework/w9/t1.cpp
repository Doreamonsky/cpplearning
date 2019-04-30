#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
    cout << "Input Scores: (Input negative number to stop)" << endl;

    float userInput = 0;

    vector<float> scoreList;

    do
    {
        cin >> userInput;

        if (userInput >= 0)
        {
            scoreList.push_back(userInput);
        }
    } while (userInput >= 0);

    float scoreSum = accumulate(scoreList.begin(), scoreList.end(), 0);
    float mean = scoreSum / scoreList.size();

    int aboveAverage = 0, lowerAverage = 0;

    for (auto p : scoreList)
    {
        if (p > 100)
        {
            continue;
        }

        if (p >= mean)
        {
            aboveAverage++;
        }
        else
        {
            lowerAverage++;
        }
    }

    cout << "Above Average Count: " << aboveAverage << "Lower than Average Count:  " << lowerAverage << endl;
}