#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    while (true)
    {
        char userInput[12] = "";

        int temp;

        cout << "Enter the first 12 digits of an ISBN as interger:";

        cin >> userInput;

        cout << endl;

        if (strlen(userInput) == 12)
        {
            int validNum = 0;

            for (int i = 0; i < 12; i++)
            {
                int temp = userInput[i] - '0';

                int index = i + 1;

                validNum += temp * (index % 2 == 0 ? 3 : 1);
            }

            validNum = 10 - (validNum % 10);

            if (validNum == 10)
            {
                cout << "The ISBN-12 number is " << userInput << "0" << endl;
            }
            else
            {
                cout << "The ISBN-12 number is " << userInput << validNum << endl;
            }
        }
        else
        {
            break;
        }
    }
}