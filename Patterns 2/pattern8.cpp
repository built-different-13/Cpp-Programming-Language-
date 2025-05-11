#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows" << endl;
    cin >> n;
    cout << "The Pattern is Printed below" << endl;
    int i=1;
    while(i<=n) {
        int j=1;
        while(j<=n-i) {
            cout << " " << " ";
            j++;
        }
        int k=i;
        while(k<=(i*2)-1) {
            cout << k << " ";
            k++;
        }
        int s=(i*2)-2;
        while(s>=i) {
            cout << s << " ";
            s--;
        }
        cout << endl;
        i++;
    }
    return 0;
}