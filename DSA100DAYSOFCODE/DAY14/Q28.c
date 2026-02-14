//You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise). 
//You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. 
//DO NOT allocate another 2D matrix and do the rotation

void rotate(int** matrix, int matrixSize, int* matrixColSize) {
    int i, j, temp;
    int n = matrixSize;

    // Step 1: Transpose the matrix
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    // Step 2: Reverse each row
    for(i = 0; i < n; i++) {
        for(j = 0; j < n / 2; j++) {
            temp = matrix[i][j];
            matrix[i][j] = matrix[i][n - j - 1];
            matrix[i][n - j - 1] = temp;
        }
    }
}
