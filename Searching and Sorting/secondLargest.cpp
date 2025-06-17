#include <iostream>
using namespace std;

int findSecondLargest(int input[], int n) {
    for (int i=1; i<n; ++i) {
        int current=input[i], j;
        for (j=i-1; j>=0; --j) {
            if(input[j]>current) {
                input[j+1]=input[j];
            } else {
                break;
            }
        }
        input[j+1]=current;
    }
    return input[n-2];
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
    cout << "The second largest element of the array is" << " ";
    int ans = findSecondLargest(input,n);
    cout << ans << endl;
    return 0;
}