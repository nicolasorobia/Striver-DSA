#include <iostream>
#include <string>
using namespace std;

void tailRecursion(int n) {
    
    if (n == 0) // base case
        return;
    cout << n << " "; // Processing before recursion
    tailRecursion(n - 1); // Recursive call is the last action
}

void headRecursion(int n) {

    if (n > 0) {
        headRecursion(n - 1); // Recursive call before processing
        cout << n << " "; // Processing after recursion
    }
}

void printName(int n) {
    // Print name N times using recursion

    if (n > 0) {
        printName(n - 1);
        cout << "Nico" << " ";
    }
}

int main()
{   
    cout << "Tail Recursion method: ";
    tailRecursion(4);
    cout << "\nHead Recursion method: ";
    headRecursion(4);

    // Print name N times using recursion
    int N {};
    cout << "\nEnter amount for N: ";
    cin >> N;
    printName(N);


    
    return 0;
}