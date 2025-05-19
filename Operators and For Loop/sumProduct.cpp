#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    int c;
    cout << "Enter the choice" << endl;
    cin >> c;
    int sum=0, product=1;
    if(c==1) {
        for (int i=1; i<=n; ++i) {
            sum+=i;
        }
        cout << "The Sum of numbers from 1 to " << n << " is " << endl;
        cout << sum << endl;
        return 0;
    } else if(c==2) {
        for (int i=1; i<=n; ++i) {
            product*=i;
        }
        cout << "The sum of numbers from 1 to " << n << " is " << endl;
        cout << product << endl;
        return 0;
    } else {
        cout << "-1" << endl;
        return 0;
    }
    return 0;
}