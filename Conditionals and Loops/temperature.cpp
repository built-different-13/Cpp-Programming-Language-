#include <iostream>
using namespace std;
int main() {
    int S;
    cout << "Enter the start Fahrenheit value" << endl;
    cin >> S;
    int E;
    cout << "Enter the end Fahrenheit value" << endl;
    cin >> E;
    int W;
    cout << "Enter the step size value" << endl;
    cin >> W;
    while(S<=E) {
        cout << S << " ";
        double temp = (S-32)*(5.0/9);
        int k = temp;
        cout << k << endl;
        S+=W;
    }
    return 0;
}