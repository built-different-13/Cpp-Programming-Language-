#include <iostream>
using namespace std;
int main() {
    char c;
    cout << "Enter the Character" << endl;
    cin >> c;
    int count=0;
    while(c!='$') {
        count++;
        cout << "Enter the character" << endl;
        cin >> c;
    }
    cout << "The number of counts are" << " ";
    cout << count << endl;
    return 0;
}