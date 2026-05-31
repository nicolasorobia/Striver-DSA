#include <iostream>
#include <string>
using namespace std;

void pattern(int n, string pyramid) {
    for (int i = 0; i < n; i++) {
        // print left hand spaces
        for (int j = 0; j < (n - i); j++) {
            cout << " ";
        }

        // prints contents of strings ascending part
        for (int j = 0; j <= i; j++) {
            cout << pyramid[j];
            
        }

        // prints contents of strings descending part
        for (int j = i - 1; j >= 0 ; j--) {
            cout << pyramid[j];
        }

        // go to new line
        cout << "\n";
    }
}

int main() {

    string pyramid;
    cout << "Enter what to display in pyramid: ";
    getline(cin, pyramid);

    int n = pyramid.length();
    pattern(n, pyramid);

    
    return 0;
}