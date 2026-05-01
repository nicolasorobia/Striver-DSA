#include <iostream>
#include <algorithm>
using namespace std;

// Given an integer n. You need to recreate the pattern given below for any value of N.
// Let's say for N = 5, the pattern should look like as below:
/*
    5 5 5 5 5 5 5 5 5 
    5 4 4 4 4 4 4 4 5 
    5 4 3 3 3 3 3 4 5 
    5 4 3 2 2 2 3 4 5 
    5 4 3 2 1 2 3 4 5 
    5 4 3 2 2 2 3 4 5 
    5 4 3 3 3 3 3 4 5 
    5 4 4 4 4 4 4 4 5 
    5 5 5 5 5 5 5 5 5
*/

void pattern(int n) {
    // formula: 2n - 1
    // proof (n = 5): 2(5) - 1 = 10 - 1 = 9 rows/columns
    int grid_size = 2 * n - 1;
    for (int i = 1; i <= grid_size ; i++) {
        for (int j = 1; j <= grid_size; j++) {

            // find distances for a cell to its borders in all direction
            // proof (i = 3, j = 3): should print 3
            // top    = i - 1       = 3 - 1 = 2   (2 rows above me)
            // bottom = grid_size-i = 9 - 3 = 6   (6 rows below me)
            // left   = j - 1       = 3 - 1 = 2   (2 columns left of me)
            // right  = grid_size-j = 9 - 3 = 6   (6 columns right of me)
            int top = i - 1;
            int bottom = grid_size - i;
            int left = j - 1;
            int right = grid_size - j;
            
            // the minimum of all four distances tells us which border we are
            // closest to, determining which "layer" the cell belongs to.
            // layer 0 = outermost border, layer 1 = one step inside, etc.
            // subtracting the layer from n gives the value to print:
            // layer 0 → n - 0 = n (outermost)
            // layer 1 → n - 1
            // layer 2 → n - 2 (deeper inside)
            // proof (i=3, j=3): min(2,6,2,6) = 2 → n - 2 = 5 - 2 = 3 ✅
            int layer = min({top, bottom, left, right});
            cout << (n - layer) << " ";
        }
        cout << "\n";
    }
}

int main() {
    int n = 5;
    pattern(n);

    return 0;
}