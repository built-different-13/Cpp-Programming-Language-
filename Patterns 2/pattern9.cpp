#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows" << endl;
    cin >> n;
    cout << "The Pattern is Printed below" << endl;
    int i=1;
    while(i<=(n/2)+1) {
        int j=1;
        while(j<=((n/2)+1)-i) {
            cout << " " << " ";
            j++;
        }
        int k=1;
        while(k<=i) {
            cout << "*" << " ";
            k++;
        }
        int s=i-1;
        while(s>=1) {
            cout << "*" << " ";
            s--;
        }
        cout << endl;
        i++;
    } 
    int p=1;
    while(p<=(n/2)) {
        int t=1;
        while(t<=p) {
            cout << " " << " ";
            t++;
        }
        int d=1;
        while(d<=(n)-((n/2)+p)) {
            cout << "*" << " ";
            d++;
        }
        int r=1;
        while(r<=(n/2)-p) {
            cout << "*" << " ";
            r++;
        }
        cout << endl;
        p++;
    }
    return 0;
}