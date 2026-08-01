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
            colZero = true;
    }

    for (int j = 0; j < col; j++)
    {
       if (matrix[0][j] == 0)
            rowZero = true;
    }


    // Step 2: check if row 1 and col 1 needs to be zeroed
    // these place markers on row 0 and col 0 if zeroes are found inside the borders of the matrix
    // hence why this check is separate from step 1
    for (int i = 1; i < row; i++)
    {
        for (int j = 1; j < col; j++)
        {
            if (matrix[i][j] == 0)
            {
                matrix[i][0] == 0;
                matrix[0][j] == 0;
            }
        }
    }

    // Step 3: set zeroes in matrix where the markers are placed
    for (int i = 1; i < row; i++)
    {
        for (int j = 1; j < col; j++)
        {
            if (matrix[i][0] == 0 || matrix[0][j] == 0)
            {
                matrix[i][j] == 0;
            }
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

    for (size_t row = 0; row < matrix1.size(); row++) {
        for (size_t col = 0; col < matrix1[row].size(); col++) {
            std::cout << matrix1[row][col] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}