#include <iostream>
using namespace std;

bool checkMember(int n) {
    // Edge Case
    if(n==0 || n==1) {
        return true;
    }
    int i=0, j=1, k=i+j;
    while(k<=n) {
        if(k==n) {
            return true;
        }
        i=j;
        j=k;
        k=i+j;
    }
    return false;
}

int main() {
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    bool ans = checkMember(n);
    if(ans) {
        cout << n << " is a member of Fibonacci Series" << endl;
    } else {
        cout << n << " is not a member of Fibonacci Series" << endl;
    }
    return 0;
}