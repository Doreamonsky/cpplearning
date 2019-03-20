#include <iostream>
#include <array>

using namespace std;

const int maxDepth = 1 << 19;

int main()
{
    freopen("problems/679.txt", "r", stdin);
    freopen("problems/out.txt", "w", stdout);

    int testCaseN = 0;

    cin >> testCaseN;

    for (int i = 1; i <= testCaseN; i++)
    {
        array<bool, maxDepth> treeState;
        treeState.fill(false);

        int D, I;

        cin >> D;
        cin >> I;

        for (int ballN = 1; ballN <= I; ballN++)
        {
            int k = 1;

            int lastNode = (1 << (D)) - 1;

            while (true)
            {
                int currentK = k;

                k = treeState[k] ? 2 * k + 1 : 2 * k;

                treeState[currentK] = !treeState[currentK];

                if (k > lastNode)
                {
                    if (ballN == I)
                    {
                        cout << currentK << endl;
                    }
                    break;
                }
            }
        }
    }
}