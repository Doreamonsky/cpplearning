#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct student
{
    string name;
    float score;

    student(string _name, float _score) : name(_name), score(_score){};
};

int main(int argc, char const *argv[])
{
    vector<student> studentList;

    int number;

    cout << "Input Student Number:" << endl;

    for (int i = 0; i < number; i++)
    {
        string _name;
        float _score;

        scanf("%s %d", &_name, &_score);

        studentList.push_back(student(_name, _score));
    }

    sort(studentList.begin(), studentList.end(), [](student &a, student &b) {
        return a.score > b.score;
    });

    cout << "Name List:" << endl;

    for (auto p : studentList)
    {
        cout << p.name << endl;
    }

    return 0;
}
