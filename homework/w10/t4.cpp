#include <iostream>
#include <vector>
#include <algorithm>
#include <time.h>

using namespace std;

struct GuessWord
{
    int missTime;
    string word;
    vector<int> revealed;

    GuessWord(string _word) : word(_word)
    {
        missTime = 0;
    };

    void OnGuess(char w)
    {
        bool flag = false;

        for (int i = 0; i < word.length(); i++)
        {
            if (word[i] == w)
            {
                vector<int>::iterator it = find(revealed.begin(), revealed.end(), i);

                if (it == revealed.end())
                {
                    flag = true;
                    revealed.push_back(i);
                }
            }
        }

        if (!flag)
        {
            missTime++;
        }
    }

    bool isFull()
    {
        return word.length() == revealed.size();
    }

    string printWorld()
    {
        string outPut;

        for (int i = 0; i < word.length(); i++)
        {
            vector<int>::iterator it = find(revealed.begin(), revealed.end(), i);

            if (it != revealed.end())
            {
                outPut = outPut + word[i];
            }
            else
            {
                outPut = outPut + '*';
            }
        }
        return outPut;
    }
};

//[a,b)
int randomFromRange(int a, int b)
{
    return (rand() % (b - a) + a);
}

int main()
{
    string words[] = {"hello",
                      "cpp",
                      "create",
                      "wonderful",
                      "things",
                      "with",
                      "her",
                      "it",
                      "is",
                      "not",
                      "a",
                      "dream",
                      "good",
                      "luck",
                      "to",
                      "her"};

    srand(time(NULL));

    while (true)
    {
        string word = words[randomFromRange(0, sizeof(words) / sizeof(words[0]))];

        GuessWord guessWord = GuessWord(word);

        while (!guessWord.isFull())
        {
            cout << "(Guess) Enter a letter in word " << guessWord.printWorld() << " > ";

            char tempInput = 'a';
            cin >> tempInput;

            guessWord.OnGuess(tempInput);
        }

        cout << "The word is " << word << ". You missed " << guessWord.missTime << "." << endl;

        cout << "y to continue n to exit> ";

        char option = 'n';

        cin >> option;

        if (option != 'y')
        {
            exit(0);
        }
    }
}