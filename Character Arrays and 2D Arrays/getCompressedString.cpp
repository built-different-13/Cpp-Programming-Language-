#include <iostream>
#include <cstring>
#include <climits>
#include <string>
using namespace std;

string getCompressedString(string input) {
string output="";
int cnt=0;
char temp = input[0];
for (int i=0; i<input.size(); i++) {
     if(input[i]==temp) {
        cnt++;
     } else {
        output+=temp;
        if(cnt>1) {
            output+=to_string(cnt);
        }
            temp=input[i];
            cnt=1;
        }
     }
output+=temp;
if(cnt>1) {
    output+=to_string(cnt);
}
return output;
}

int main() {
    string s;
    cout << "Enter the string" << endl;
    cin >> s;
    cout << "The updated string is printed below" << endl;
    string output = getCompressedString(s);
    cout << output << endl;
    return 0;
}