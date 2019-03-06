//https://vjudge.net/problem/UVA-10815
//Andy's First Dictionary UVA - 10815

#include <iostream>
#include <set>
using namespace std;

int main()
{
    freopen("problems/10815.txt", "r", stdin);
    freopen("problems/out.txt", "w", stdout);

    string inputWord;

    set<string> dic;

    while (cin >> inputWord)
    {
        for (int i = 0; i < inputWord.length(); i++)
        {
            if (isalpha(inputWord[i]))
            {
                inputWord[i] = tolower(inputWord[i]);
            }
            else
            {
                inputWord[i] = '\0';
            }
        }

        dic.insert(inputWord);
    }

    for (set<string>::iterator it = dic.begin(); it != dic.end(); ++it)
    {
        cout << *it << "\n";
    }

    //TODO: Fix the blank in the front of the word
}