#include <iostream>
#include <map>
#include <list>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string normalize(const string &word)
{
    string ans = word;

    for (int i = 0; i < ans.length(); i++)
    {
        ans[i] = tolower(ans[i]);
    }

    sort(ans.begin(), ans.end());

    return ans;
}

int main()
{
    freopen("problems/156.txt", "r", stdin);
    freopen("problems/out.txt", "w", stdout);

    map<string, int> dic;

    vector<string> result;

    string w;

    while (cin >> w)
    {
        if (w == "#")
            break;

        int wc = dic.count(normalize(w));

        if (wc == 0)
        {
            dic[normalize(w)] = 0;
        }
        else
        {
            dic[normalize(w)] += 1;
        }

        result.push_back(w);
    }

    sort(result.begin(), result.end());

    for (vector<string>::iterator it = result.begin(); it != result.end(); it++)
    {
        if (dic[normalize(*it)] == 0)
        {
            cout << *it << endl;
        }
    }
}