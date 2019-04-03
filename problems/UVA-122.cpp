#include <iostream>
#include <string.h>
#include <map>
#include <queue>
#include <stack>

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
//Breadth First Search
void Bfs(Node *root)
{
    queue<Node *> nodeQueue;

    nodeQueue.push(root);

    while (!nodeQueue.empty())
    {
        auto top = nodeQueue.front();

        cout << top->val << endl;

        nodeQueue.pop();

        if (top->left != NULL)
        {
            nodeQueue.push(top->left);
        }

        if (top->right != NULL)
        {
            nodeQueue.push(top->right);
        }
    }
}

void Dfs(Node *root)
{
    if (root == NULL)
        return;

    cout << root->val << endl;

    if (root->left != NULL)
    {
        Dfs(root->left);
    }
    if (root->right != NULL)
    {
        Dfs(root->right);
    }
}

void DfsByStack(Node *root)
{
    stack<Node *> nodeStack;

    nodeStack.push(root);

    while (!nodeStack.empty())
    {
        auto top = nodeStack.top();

        cout << top->val << endl;

        nodeStack.pop();
        //Important If you want to print it from left to right make sure the right branch is pushed into the stack first.
        if (top->right != NULL)
        {
            nodeStack.push(top->right);
        }

        if (top->left != NULL)
        {
            nodeStack.push(top->left);
        }
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
            //Bfs
            cout << "Bfs" << endl;
            Bfs(mainTree);

            cout << "Dfs By Iteration" << endl;
            Dfs(mainTree);

            cout << "Dfs By Stack" << endl;
            DfsByStack(mainTree);

            cout << "Tree Finished" << endl;

            mainTree = new Node();
            continue;
        }
        int val;

        sscanf(&s[1], "%d", &val);

        auto pos = strchr(s, ',') + 1;

        AddNode(pos, val);
    }
}
