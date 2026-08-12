#include <iostream>
#include <vector>

void setZeroes(std::vector<std::vector<int>>& matrix) {
    int row = matrix.size();
    int col = matrix[0].size();
    bool rowZero = false;
    bool colZero = false;

    // Step 1: flag if row 0 and col 0 needs to be zeroed
    // row 0 and col 0 needs their own check because they act as the border of the matrix
    for (int i = 0; i < row; i++)
    {
       if (matrix[i][0] == 0)
       {
            colZero = true;
            break;
       }
            
    }

    for (int j = 0; j < col; j++)
    {
       if (matrix[0][j] == 0)
       {
            row = true;
            break;
       }
    }


    // Step 2: find zeroes inside matrix and place markers on them
    // these place markers on the bordering rows and cols if zeroes are found inside the borders of the matrix
    // hence why this check is separate from step 1
    for (int i = 1; i < row; i++)
    {
        for (int j = 1; j < col; j++)
        {
            if (matrix[i][j] == 0)
            {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }

    // Step 3: set zeroes in matrix where the markers were placed from step 2
    for (int i = 1; i < row; i++)
    {
        for (int j = 1; j < col; j++)
        {
            if (matrix[i][0] == 0 || matrix[0][j] == 0)
            {
                matrix[i][j] = 0;
            }
        }
    }

    // Step 4: Place zeroes in row 0 and col 0 if needed based on the check from step 1
    if (rowZero) {
        for (int j = 0; j < col; j++) {
            matrix[0][j] = 0;
        }
    }

    if (colZero) {
        for (int i = 0; i < row; i++) {
            matrix[i][0] = 0;
        }
    }

}

int main() {

    std::vector<std::vector<int>> matrix1 {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };

    setZeroes(matrix1);

   for (auto& row: matrix1) {
        for (auto num: row) {
            std::cout << num << " ";
        }
        std::cout<< "\n";
   }

    return 0;
}