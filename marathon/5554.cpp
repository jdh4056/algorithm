#include <bits/stdc++.h>
using namespace std;

int main() {
    int homeToSchool, schoolToPC,PCToAcademy,academyToHome;
    cin >> homeToSchool;
    cin >> schoolToPC;
    cin >> PCToAcademy;
    cin >> academyToHome;
    int sum = 0;
    sum += homeToSchool + schoolToPC + PCToAcademy + academyToHome;
    int minite = sum / 60;
    int second = sum % 60;

    cout << minite << '\n' << second;

}