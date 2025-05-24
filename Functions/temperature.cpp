#include <iostream>
using namespace std;

int main() {
    int S;
    cout << "Enter the start value" << endl;
    cin >> S;
    int E;
    cout << "Enter the end value" << endl;
    cin >> E;
    int W;
    cout << "Enter the difference value" << endl;
    cin >> W;
    cout << "The Fahrenheit to Celsius values are printed below" << endl;
    while(S<=E) {
        double cel = (S-32)*(5.0/9);
        cout << S << "\t" << cel << endl;
        S+=W;
    }
    return 0;
}