#include <iostream>
#include <sstream>
#include <string>
#include <time.h>

using namespace std;

struct Number
{
    /* data */
    short a, b, c;

    Number(short _a, short _b, short _c) : a(_a), b(_b), c(_c) {}

    Number(string str)
    {
        auto num = stoi(str);

        a = num / 100;
        b = (num - a * 100) / 10;
        c = num % 10;
    }
    bool isEqualTo(Number *target)
    {
        return this->a == target->a && this->b == target->b && this->c == target->c;
    }

    bool ContainNumber(short target)
    {
        if (a == target)
        {
            return true;
        }
        else if (b == target)
        {
            return true;
        }
        else if (c == target)
        {
            return true;
        }
        return false;
    }

  public:
    void Print()
    {
        cout << this->a << this->b << this->c << endl;
    }
};

int randomFromRange(int a, int b)
{
    return (rand() % (b - a + 1) + a);
}

Number *randomNumber()
{
    return new Number(randomFromRange(1, 9), randomFromRange(0, 9), randomFromRange(0, 9));
}

int main()
{
    srand(time(NULL));

    while (true)
    {
        cout << "Input a Number:";

        string userStr;
        cin >> userStr;

        auto computer = randomNumber();
        auto player = new Number(userStr);

        cout << "Computer:";
        computer->Print();

        if (computer->isEqualTo(player))
        {
            cout << "Get 10,000" << endl;
        }
        else
        {
            if (player->ContainNumber(computer->a) || player->ContainNumber(computer->b) || player->ContainNumber(computer->c))
            {
                cout << "Get 1,000" << endl;
            }
            else
            {
                cout << "Try ur luck next time" << endl;
            }
        }
    }
}