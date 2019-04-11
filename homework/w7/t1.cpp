#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    while (true)
    {
        char userInput[9] = "";

        int temp;

        cout << "Enter the first 9 digits of an ISBN as interger:";

        cin >> userInput;

        if (strlen(userInput) == 9)
        {
            int validNum = 0;

            for (int i = 0; i < 9; i++)
            {
                int temp = userInput[i] - '0';

                validNum += temp * (i + 1);
            }

            validNum %= 11;

            if (validNum == 10)
            {
                cout << "The ISBN-10 number is " << userInput << "X" << endl;
            }
            else
            {
                cout << "The ISBN-10 number is " << userInput << validNum << endl;
            }
        }
        else
        {
            break;
        }
    }
}