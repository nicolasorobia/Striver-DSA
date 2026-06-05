#include <iostream>
#include <iomanip>
using namespace std;

int function_activation_count {0};

double a_penny_doubled_everyday(int, double amount = 0.01);

void amount_accumulated() {

    double total_amount {};

    cout <<  "If I start with a penny and doubled it every day for 25 days, " 
             "I will have $" << setprecision(10) << total_amount;
}

double a_penny_doubled_everyday(int days, double amount) {
    function_activation_count++;


}

int test_function_activation_count() {
    return function_activation_count;
}

int main() {

    
    return 0;
}