#include <iostream>
using namespace std;
int main() {
    int P,R,T;
    cout << "Enter the Principal amount" << endl;
    cin >> P;
    cout << "Enter the Rate of Interest" << endl;
    cin >> R;
    cout << "Enter the time" << endl;
    cin >> T;
    cout << "The Simple Interest is" << " ";
    int SI = (P*R*T)/100;
    cout << SI << endl;
    return 0;
}