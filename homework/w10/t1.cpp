#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> decks;

    for (int i = 1; i <= 13; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            decks.push_back(j);
        }
    }

    while (next_permutation(decks.begin(), decks.end()))
    {
        for (auto p : decks)
        {
            cout << p;
        }
        cout << endl;
    };
}