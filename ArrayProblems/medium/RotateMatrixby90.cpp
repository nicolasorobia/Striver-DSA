#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void rotateMatrix(vector<vector<int>>& matrix) {
    // TC: O(n^2), SC: O(1)

    // Step 1: Transpose matrix
    int n = matrix.size();

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Step 2: Reverse each row
    for (auto& row: matrix) {
        reverse(row.begin(), row.end());
    }
}

int main() {

    vector<vector<int>> matrix {
        {0, 1, 1, 2},
        {2, 0, 3, 1},
        {4, 5, 0, 5},
        {5, 6, 7, 0}
    };

    rotateMatrix(matrix);

    for (auto& row: matrix) {
        for (auto num: row) {
            std::cout << num << " ";
        }
        std::cout<< "\n";
    }

    return 0;
}