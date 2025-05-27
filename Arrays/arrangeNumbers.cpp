#include <iostream>
using namespace std;

void arrange(int arr[], int n) {
    int i=0, j=n-1, cnt=1;
    for (int k=0; k<n; ++k) {
        if(cnt%2!=0) {
            arr[i]=cnt;
            cnt++;
            i++;
        } else {
            arr[j]=cnt;
            cnt++;
            j--;
        }
    }
    cout << "The elements of the array are printed below" << endl;
    for (int d=0; d<n; ++d) {
        cout << arr[d] << " ";
    }
}

int main() {
    int n;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    int arr[100];
    arrange(arr,n);
    return 0;
}