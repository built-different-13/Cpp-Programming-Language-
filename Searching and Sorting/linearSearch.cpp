#include <iostream>
using namespace std;

int linearSearch(int input[], int n, int x) {
    int ans=-1;
    for (int i=0; i<n; ++i) {
        if(input[i]==x) {
            ans=i;
        }
    }
    return ans;
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
    cout << "Enter the element to be search" << endl;
    cin >> x;
    cout << "The index of the element to be searched is at" << " ";
    int output = linearSearch(input,n,x);
    cout << output << endl;
    return 0;
}