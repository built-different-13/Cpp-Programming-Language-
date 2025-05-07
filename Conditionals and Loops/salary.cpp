#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int basic;
    cout << "Enter the basic salary" << endl;
    cin >> basic;
    char grade;
    cout << "Enter the grade value" << endl;
    cin >> grade;
    double hr = (0.20*basic);
    double da = (0.50*basic);
    double pf = (0.11*basic);
    int allow;
    if(grade=='A') {
        allow = 1700;
    } else if(grade=='B') {
        allow = 1500;
    } else {
        allow = 1300;
    }
    double totalSalary = basic+hr+da+allow-pf;
    int ans = round(totalSalary);
    cout << "The total salary is" << " ";
    cout << ans << endl;
    return 0;
}