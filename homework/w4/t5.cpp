#include <iostream>

using namespace std;

int main()
{
    int number;

    cout << "Input Number" << endl;

    cin >> number;

    while (number > 1)
    {
        for (int i = 2; i <= number; i++)
        {
            if (number % i == 0)
            {
                number = number / i;
                cout << i << " ";
                break;
            }
        }
    }
}