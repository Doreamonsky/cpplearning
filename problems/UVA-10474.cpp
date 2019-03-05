//https://vjudge.net/problem/UVA-10474

// There can be multiple test cases. Total no of test cases is less than 65. Each test case consists begins
// with 2 integers: N the number of marbles and Q the number of queries Mina would make. The next
// N lines would contain the numbers written on the N marbles. These marble numbers will not come
// in any particular order. Following Q lines will have Q queries. Be assured, none of the input numbers
// are greater than 10000 and none of them are negative.
// Input is terminated by a test case where N = 0 and Q = 0.

#include <iostream>
#include <algorithm>

using namespace std;

const int maxN = 1000;

int main()
{
    freopen("problems/10474.txt", "r", stdin);
    freopen("problems/out.txt", "w", stdout);

    int N, Q, a[maxN], x, kase = 0;

    while (scanf("%d%d", &N, &Q) == 2 && N)
    {
        kase++;

        printf("CASE:%d \n", kase);

        for (int i = 0; i < N; i++)
        {
            scanf("%d", &a[i]);
        }

        sort(a, a + N);

        while (Q--)
        {
            scanf("%d", &x);

            int pos = lower_bound(a, a + N, x) - a;

            if (a[pos] == x)
            {
                printf("%d found at %d \n", x, pos + 1);
            }
            else
            {
                printf("%d Not Found \n", x);
            }
        }
    }
}
