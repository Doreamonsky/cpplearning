#include <iostream>
#include <time.h>

using namespace std;

int randomFromRange(int a, int b)
{
    return (rand() % (b - a + 1) + a);
}

int main()
{
    srand(time(NULL));

    int matrix[6][6];

    //Matrix Test Unit
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         matrix[i][j] = randomFromRange(0, 1);
    //     }
    // }

    // for (int j = 0; j < 6; j++)
    // {
    //     int colSum = 0;

    //     for (int i = 0; i < 5; i++)
    //     {
    //         colSum += matrix[i][j];
    //     }

    //     matrix[5][j] = colSum % 2 == 0 ? 0 : 1;
    // }

    // for (int i = 0; i < 6; i++)
    // {
    //     int rowSum = 0;

    //     for (int j = 0; j < 5; j++)
    //     {
    //         rowSum += matrix[i][j];
    //     }

    //     matrix[i][5] = rowSum % 2 == 0 ? 0 : 1;
    // }

    // for (int i = 0; i < 6; i++)
    // {
    //     for (int j = 0; j < 6; j++)
    //     {
    //         cout << matrix[i][j] << " ";
    //     }

    //     cout << endl;
    // }

    // 0 0 1 0 0 0
    // 1 1 1 1 1 1
    // 1 1 0 1 0 1
    // 1 0 0 1 0 0
    // 0 1 1 1 0 1
    cout << "Enter a 6 by 6 matrix row by row" << endl;

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int invalidI = 0;
    int invalidJ = 0;

    for (int j = 0; j < 6; j++)
    {
        int colSum = 0;

        for (int i = 0; i < 6; i++)
        {
            colSum += matrix[i][j];
        }

        if (colSum % 2 == 1)
        {
            invalidJ = j;
        }
    }

    for (int i = 0; i < 6; i++)
    {
        int rowSum = 0;

        for (int j = 0; j < 6; j++)
        {
            rowSum += matrix[i][j];
        }

        if (rowSum % 2 == 1)
        {
            invalidI = i;
        }
    }

    cout << "The flipped cell is at(" << invalidI << "," << invalidJ << ")" << endl;
}