#include <iostream>
#include <cstring>
using namespace std;

void sortString(char input[]) {
    int n = strlen(input);
    for (int i=0; i<n-1; i++) {
        for (int j=0; j<n-1-i; j++) {
            if(input[j]>input[j+1]) {
                char temp = input[j];
                input[j] = input[j+1];
                input[j+1] = temp;
            }
        }
    }
}

bool isPermutation(char input1[], char input2[]) {

    int len1 = strlen(input1);
    int len2 = strlen(input2);

    sortString(input1);
    sortString(input2);

    int ans = strcmp(input1,input2);
    if(ans==0) {
        return true;
    }
    return false;
}

int main() {
    char input1[1000];
    cout << "Enter the string 1" << endl;
    cin >> input1;
    char input2[1000];
    cout << "Enter the string 2" << endl;
    cin >> input2;
    bool output = isPermutation(input1,input2);
    if(output) {
        cout << input1 << " and " << input2 << " are Permutation of each other" << endl;
    } else {
        cout << input1 << " and " << input2 << " are not Permutation of each other" << endl;
    }
    return 0;
}