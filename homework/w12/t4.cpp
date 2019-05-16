#include <iostream>

using namespace std;

double m(int i)
{
    if (i > 0)
    {
        double Un = (double)i / (2 * i + 1);
        return Un + m(i - 1);
    }
    else
    {
        return 0;
    }
}

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << "s(" << i << ") =  " << m(i) << endl;
    }
}