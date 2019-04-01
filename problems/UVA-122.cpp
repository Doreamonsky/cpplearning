#include <iostream>
#include <string.h>
#include <map>

using namespace std;

struct Node
{
    /* data */
    Node *left, *right;

    bool hasVal;

    int val;

    Node() : hasVal(false), val(0), left(NULL), right(NULL) {}
};

Node *mainTree;

void AddNode(char *pos, int val)
{
    auto lens = strlen(pos);

    Node *current = mainTree;

    for (size_t i = 0; i < lens; i++)
    {
        if (pos[i] == 'L')
        {
            if (current->left == NULL)
            {
                current->left = new Node();
            }
            current = current->left;
        }
        if (pos[i] == 'R')
        {
            if (current->right == NULL)
            {
                current->right = new Node();
            }
            current = current->right;
        }
    }
    if (current->hasVal)
    {
        //None
    }
    else
    {
        current->val = val;
        current->hasVal = true;
    }
}

int main()
{
    freopen("problems/122.txt", "r", stdin);
    freopen("problems/out.txt", "w", stdout);

    char s[256];

    mainTree = new Node();

    while (true)
    {
        if (scanf("%s", s) != 1)
        {
            break;
        }

        if (!strcmp(s, "()"))
        {
            mainTree = new Node();
            break;
        }
        int val;

        sscanf(&s[1], "%d", &val);

        auto pos = strchr(s, ',') + 1;

        AddNode(pos, val);
    }

    cout << "Tree Finished" << endl;
}
