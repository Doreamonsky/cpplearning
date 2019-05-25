#include <iostream>

using namespace std;

int randomFromRange(int a, int b)
{
    return (rand() % (b - a + 1) + a);
}

int main(int argc, char const *argv[])
{
    freopen("Salary.txt", "w", stdout);

    for (int i = 0; i < 1000; i++)
    {
        bool isAssistance = randomFromRange(1, 2) == 1;

        string title = isAssistance ? "assistance" : "associate";

        int salary = isAssistance ? randomFromRange(50000, 8000) : randomFromRange(60000, 110000);

        cout << "FirstName" << i << " "
             << "LastName" << i << " " << title << " " << salary;
    }
    return 0;
}
