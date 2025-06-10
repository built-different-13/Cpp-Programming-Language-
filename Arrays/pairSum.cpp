#include <iostream>
using namespace std;

int pairSum(int input[], int size, int x) {
    int cnt=0;
    for (int i=0; i<size-1; ++i) {
        for (int j=size-1; j>i; j--) {
            if(input[j]+input[i]==x) {
               cnt++;
            }
        }
    }
    return cnt;
}

int main() {
    int n;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    int input[1000];
    cout << "Enter the elements of the array" << endl;
    for (int i=0; i<n; ++i) {
        cin >> input[i];
    }
    int x;
    cout << "Enter the number whose pair sum has to find" << endl;
    cin >> x;
    cout << "The number of Pair Sum are" << " ";
    int ans = pairSum(input,n,x);
    cout << ans << endl;
    return 0;
}