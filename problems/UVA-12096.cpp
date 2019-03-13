#include <iostream>
#include <algorithm>
#include <stack>
#include <set>
#include <map>
#include <vector>

using namespace std;

typedef set<int> Set;

map<Set, int> dic;

stack<int> myStack;

vector<Set> cacheSet;

int GetStackID(Set x)
{
    if (dic.count(x))
    {
        return dic[x];
    }
    else
    {
        cacheSet.push_back(x);

        int id = cacheSet.size() - 1;

        dic[x] = id;
    }
}
// 对于集合的集合，我们很难直接表示，因此，我们可以换一种想法，
// 既然集合的集合难以表示，我们就只需要给每种集合一个唯一的ID就可以了，
// 这样，集合中的元素就可以通过ID来表示。一个集合就可以表示为一个set<int>

int main()
{
    freopen("problems/12096.txt", "r", stdin);
    freopen("problems/out.txt", "w", stdout);

    int testCase;

    cin >> testCase;

    while (testCase--)
    {
        int opCase = 0;

        cin >> opCase;

        while (opCase--)
        {
            string op;

            cin >> op;

            if (op == "PUSH")
            {
                myStack.push(GetStackID(Set()));
            }

            else if (op == "DUP")
            {
                myStack.push(myStack.top());
            }
            else
            {
                Set A, B, Result;

                A = cacheSet[myStack.top()];

                myStack.pop();

                B = cacheSet[myStack.top()];

                myStack.pop();

                if (op[0] == 'U')
                {
                    set_union(A.begin(), A.end(), B.begin(), B.end(), inserter(Result, Result.begin()));
                }
                else if (op[0] == 'I')
                {
                    set_intersection(A.begin(), A.end(), B.begin(), B.end(), inserter(Result, Result.begin()));
                }
                else if (op[0] == 'A')
                {
                    Result = B;
                    Result.insert(GetStackID(A));
                }

                myStack.push(GetStackID(Result));
            }

            cout << cacheSet[myStack.top()].size() << endl;
        }

        cout << "***" << endl;
    }
}