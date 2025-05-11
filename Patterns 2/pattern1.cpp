#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows" << endl;
    cin >> n;
    cout << "The Pattern is Printed below" << endl;
    int i=1;
    while(i<=n) {
        int k=1;
        while(k<=n-i) {
            cout << " " << " ";
            k++;
        }
        int j=1;
        while(j<=i) {
            cout << "*" << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}