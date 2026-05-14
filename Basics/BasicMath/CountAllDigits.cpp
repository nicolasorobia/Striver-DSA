#include <iostream>
#include <cmath>
using namespace std;

int main() {

    // Brute force
    // Time Complexity: O(log10N + 1), Space Complexity O(1)

    int n = 234;
    int temp = n;
    int count = 0;

    // manually performs log10 by repeatedly dividing by 10
    // number of iterations depends on how many digits n has
    // method simulates steps in formula
    while (temp > 0) {
        temp /= 10;
        count++;
    }
    cout << "The number 234 has " << count << " digits\n";

    // Optimal approach - apply formula directly
    // Result: single math expression replaces the entire loop → O(1)

    int optimal_count = static_cast<int>(log10(n) + 1);
    cout << "The one true answer to n: " << optimal_count;


    return 0;
}