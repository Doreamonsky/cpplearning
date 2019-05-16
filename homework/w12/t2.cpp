#include <iostream>

using namespace std;

double tr(double m[][4], int rowSize)
{
    double sum = 0;

    for (int i = 0; i < rowSize; i++)
    {
        sum += m[i][i];
    }

    return sum;
}
int main()
{
    cout << "Enter a 4*4 matrix row by row" << endl;

    double m[4][4] = {0};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> m[i][j];
        }
    }

    cout << "tr: " << tr(m, 4) << endl;
}