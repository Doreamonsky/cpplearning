#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

struct EmployeeData
{
    string employeeName;

    int *workHours;
    int sumHours;

    EmployeeData(string _s, int *_n) : employeeName(_s), workHours(_n)
    {
        sumHours = accumulate(workHours, workHours + 7, 0);
    };
};

int main()
{
    int employee0[] = {2, 4, 3, 4, 5, 8, 8};
    int employee1[] = {7, 3, 4, 3, 3, 4, 4};
    int employee2[] = {3, 3, 4, 3, 3, 2, 2};
    int employee3[] = {9, 3, 4, 7, 3, 4, 1};
    int employee4[] = {3, 5, 4, 3, 6, 3, 8};
    int employee5[] = {3, 4, 4, 6, 3, 4, 4};
    int employee6[] = {6, 3, 5, 9, 2, 7, 9};

    vector<EmployeeData> employeeList;

    employeeList.push_back(EmployeeData("0", employee0));
    employeeList.push_back(EmployeeData("1", employee1));
    employeeList.push_back(EmployeeData("2", employee2));
    employeeList.push_back(EmployeeData("3", employee3));
    employeeList.push_back(EmployeeData("4", employee4));
    employeeList.push_back(EmployeeData("5", employee5));
    employeeList.push_back(EmployeeData("6", employee6));

    sort(employeeList.begin(), employeeList.end(), [](EmployeeData &a, EmployeeData &b) {
        return a.sumHours > b.sumHours;
    });

    for (auto p : employeeList)
    {
        cout << "Employee " << p.employeeName << " Hours: " << p.sumHours << "h" << endl;
    }
}