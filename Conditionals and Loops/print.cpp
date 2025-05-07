#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    cout << "The numbers from 1 to n are printed below" << endl;
    int i=1;
    while(i<=n) {
        cout << i << " ";
        i++;
    }
    return 0;
}