#include <iostream>
#include <queue>
#include <vector>
#include <map>

using namespace std;

map<int, int> P2TDic;

int teamID = 0;

void CreateTeam()
{
    int memberN;

    cin >> memberN;

    while (memberN--)
    {
        int memberID;

        cin >> memberID;

        P2TDic[memberID] = teamID;
    }

    teamID++;
}

int main()
{
    while (true)
    {
        P2TDic.clear();

        int teamN;

        cin >> teamN;

        while (teamN--)
        {
            CreateTeam();
        }

        string op;

        do
        {
            cin >> op;

            if (op[0] == 'E')
            {
            }

            if (op[0] == 'D')
            {
            }
        } while (op != "STOP");
    }
}