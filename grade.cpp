//grade of 5 subject (dsa, maths, physics, chemistry, biology) below 40 F, 40-60 c, 60-80 B, 80-100 A
#include<iostream>
using namespace std;
int main() {
    float dsa, maths, physics, chemistry, biology;
    cout << "Enter marks for DSA: ";
    cin >> dsa;
    cout << "Enter marks for Maths: ";
    cin >> maths;
    cout << "Enter marks for Physics: ";
    cin >> physics;
    cout << "Enter marks for Chemistry: ";
    cin >> chemistry;
    cout << "Enter marks for Biology: ";
    cin >> biology;

    float total = dsa + maths + physics + chemistry + biology;
    float percentage = (total / 500) * 100;

    if (percentage < 40) {
        cout << "Grade: F" << endl;
    } else if (percentage < 60) {
        cout << "Grade: C" << endl;
    } else if (percentage < 80) {
        cout << "Grade: B" << endl;
    } else {
        cout << "Grade: A" << endl;
    }

    return 0;
}