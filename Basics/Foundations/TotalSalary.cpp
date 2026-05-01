#include <iostream>
#include <cmath>
using namespace std;

int main() {
    //Write your code here
    int salary{};
    char grade{};
    cin >> salary >> grade;

    double hra {salary * .2};
    double da {salary * .5};
    double pf {salary * .11};
    int allow {};

    switch(grade) {
        case 'A': allow = 1700; break;
        case 'B': allow = 1500; break;
        default: allow = 1300; break;
    }

    double total = salary + hra + da + allow - pf;
    cout << static_cast<int>(round(total)) << endl;


    return 0;
}