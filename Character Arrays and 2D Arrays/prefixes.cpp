#include <iostream>
#include <cstring>
using namespace std;

void printAllPrefixes(char str[]) {
    int len = strlen(str);
    for (int i=0; i<len; ++i) {
        for (int j=0; j<=i; ++j) {
            cout << str[j];
        }
        cout << endl;
    }
}

int main() {
    char str[1000];
    cout << "Enter your string" << endl;
    cin.getline(str,1000,'\n');
    cout << "The Prefixes of the string are printed below" << endl;
    printAllPrefixes(str);
    return 0;
}