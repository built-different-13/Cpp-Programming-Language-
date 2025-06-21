// Compare both the Strings
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[1000];
    cout << "Enter the string 1" << endl;
    cin.getline(str1,1000,'\n');
    char str2[1000];
    cout << "Enter the string 2" << endl;
    cin.getline(str2,1000,'\n');
    int output = strcmp(str1,str2);
    if(output==0) {
        cout << str1 << " and " << str2 << " are equal" << endl;
    } else {
        cout << str1 << " and " << str2 << " are not equal" << endl;
    }
    return 0;
}