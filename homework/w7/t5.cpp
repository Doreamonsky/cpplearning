#include <iostream>

using namespace std;

int Divide(int &number, int mount)
{
    int temp = number / mount;

    number %= mount;

    return temp;
}
int main()
{
    while (true)
    {
        string moneyStr = "";

        cout << "Input a Number" << endl;

        cin >> moneyStr;

        int indexOf = moneyStr.find('.');

        int a = stoi(moneyStr.substr(0, indexOf));
        int b = stoi(moneyStr.substr(indexOf + 1, moneyStr.length()));

        if (b < 10)
        {
            b *= 10;
        }

        int c = 0, d = 0, e = 0, f = 0, g = 0;

        c = Divide(b, 50);
        e = Divide(b, 10);
        f = Divide(b, 5);
        g = Divide(b, 1);
        cout << "Yuan:" << a << endl
             << "5 Jiao:" << c << endl
             << "1 Jiao:" << e << endl
             << "5 Fen:" << f << endl
             << "1 Fen:" << g << endl;

        cout << "Ctrl+C to exit" << endl;
    }
}