#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows" << endl;
    cin >> n;
    int i=1;
    cout << "The Pattern is printed below" << endl;
    while(i<=n) {
       int j=1;
       while(j<=n) {
        cout << "*" << " ";
        j++;
       }
       cout << endl;
       i++;
    }
    return 0;
}