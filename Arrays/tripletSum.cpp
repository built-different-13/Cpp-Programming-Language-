#include <iostream>
using namespace std;

int tripletSum(int input[], int n, int x) {
    int cnt=0;
    for (int i=0; i<n-2; ++i) {
        for (int j=i+1; j<n-1; ++j) {
            for (int k=j+1; k<n; ++k) {
                if(input[i]+input[j]+input[k]==x) {
                    cnt++;
                }
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
    cout << "Enter the number whose triplet sum has to find" << endl;
    cin >> x;
    cout << "The number of Triplet Sum are" << " ";
    int ans = tripletSum(input,n,x);
    cout << ans << endl;
    return 0;
}