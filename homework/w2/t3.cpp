#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float weight, height;

    float bmi = 0;

    cout << "Enter weight in kgs: ";

    cin >> weight;

    cout << endl;

    cout << "Enter height in inches: ";

    cin >> height;

    cout << endl;

    bmi = weight / pow(height, 2);

    cout << "BMI is " << bmi;
}