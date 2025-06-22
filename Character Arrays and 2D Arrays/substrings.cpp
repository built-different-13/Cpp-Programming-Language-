#include <iostream>
#include <cstring>
using namespace std;

void printAllSubstrings(char str[]) {
    int len = strlen(str);
    for (int i=0; i<len; ++i) {
        for (int j=i; j<len; ++j) {
            for (int k=i; k<=j; ++k) {
                cout << str[k];
            }
            cout << endl;
        }
    }
}

int main() {
    char str[1000];
    cout << "Enter the string" << endl;
    cin.getline(str,1000,'\n');
    cout << "The Substrings of the given string are printed below" << endl;
    printAllSubstrings(str);
    return 0;
}