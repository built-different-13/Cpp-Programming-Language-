// Copy the first n character's from string 1 to string 2
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
    cout << "The updated strings are printed below" << endl;
    strncpy(str1,str2,5);
    cout << str1 << endl;
    cout << str2 << endl;
    return 0;
}