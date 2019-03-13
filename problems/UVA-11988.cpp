#include <iostream>
#include <list>

using namespace std;

int main()
{
    freopen("problems/11988.txt", "r", stdin);
    freopen("problems/out.txt", "w", stdout);

    string sentence;

    while (cin >> sentence)
    {
        list<char> result;

        list<char>::iterator it;

        it = result.begin();

        for (int i = 0; i < sentence.length(); i++)
        {
            char w = sentence[i];

            if (w == '[')
            {
                it = result.begin();
            }
            else if (w == ']')
            {
                it = result.end();
            }
            else
            {
                result.insert(it, w);
            }
        }

        for (it = result.begin(); it != result.end(); ++it)
        {
            cout << *it;
        }
        cout << endl;
    }
}