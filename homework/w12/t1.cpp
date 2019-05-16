#include <iostream>

using namespace std;

double sumColumn(double m[][4], int rowSize, int columnIndex)
{
    double sum = 0;

    for (int i = 0; i < rowSize; i++)
    {
        sum += m[i][columnIndex];
    }
    return sum;
}

int main()
{
    cout << "Enter a 3*4 matrix row by row" << endl;

    double m[3][4] = {0};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> m[i][j];
        }
    }

    for (int i = 0; i < 4; i++)
    {
        cout << "Sum at column " << i << " is " << sumColumn(m, 3, i) << endl;
    }
}