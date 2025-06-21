// Copy the content of one string to the other string
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[1000];
    cout << "Enter the string 1" << endl;
    cin.getline(str1,1000,'\n');
    char str2[1000];
    cout << "The string 2 is" << " ";
    strcpy(str2,str1);
    cout << str2 << endl;
    return 0;
}