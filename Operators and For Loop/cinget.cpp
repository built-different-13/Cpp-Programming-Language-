#include <iostream>
using namespace std;
int main() {
    char c;
    cout << "Enter the Character" << endl;
    c = cin.get();
    int count=0;
    while(c!='$') {
        count++;
        cout << "Enter the Character" << endl;
        c = cin.get();
    }
    cout << "The number of character's are" << " ";
    cout << count << endl;
    return 0;
}