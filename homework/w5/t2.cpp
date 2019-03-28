#include <iostream>
#include <time.h>
#include <map>

using namespace std;

int randomFromRange(int a, int b)
{
    return (rand() % (b - a + 1) + a);
}

int compareUserWin(int user, int pc)
{
    if (user == pc)
    {
        return 2;
    }

    switch (user)
    {
    case 0:
        if (pc == 1)
            return false;
        break;
    case 1:
        if (pc == 2)
            return false;
        break;
    case 2:
        if (pc == 0)
            return false;
        break;
    }

    return true;
}

int main()
{
    srand(time(NULL));

    map<int, string> dic = {
        {0, "scissor"},
        {1, "rock"},
        {2, "paper"}};

    int playerWin = 0, computerWin = 0;
    while (abs(playerWin - computerWin) < 2)
    {
        cout << "scissor(0),rock(1),paper(2): ";

        int userInput = 0;
        int computerInput = randomFromRange(0, 2);

        cin >> userInput;

        int isUserWin = compareUserWin(userInput, computerInput);

        cout << "Computer is " << dic[computerInput] << " You are " << dic[userInput];

        if (isUserWin == 0)
        {
            ++computerWin;
            cout << ". You lost." << endl;
        }
        else if (isUserWin == 1)
        {
            ++playerWin;
            cout << ". You won." << endl;
        }
        else
        {
            cout << ". It's a draw." << endl;
        }
    }

    if (playerWin > computerWin)
    {
        cout << "Player Win" << endl;
    }
    else
    {
        cout << "Computer Win" << endl;
    }
}