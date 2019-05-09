#include <iostream>

using namespace std;

bool isValid(string password)
{
    if (password.length() < 8)
    {
        return false;
    }

    int digit = 0;

    for (int i = 0; i < password.length(); i++)
    {
        if (isdigit(password[i]))
        {
            digit++;
        }
        else if (isalpha(password[i]))
        {
        }
        else
        {
            return false;
        }
    }

    if (digit >= 3)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string password;

    cout << "Enter a password: ";
    cin >> password;

    if (isValid(password))
    {
        cout << "Valid";
    }
    else
    {
        cout << "Invalid";
    }
}