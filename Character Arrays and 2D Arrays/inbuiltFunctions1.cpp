// Length of the String
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char input[1000];
    cout << "Enter your string name" << endl;
    cin.getline(input,1000,'\n');
    cout << "The length of the string is" << " ";
    int ans = strlen(input);
    cout << ans << endl;
    return 0;
}