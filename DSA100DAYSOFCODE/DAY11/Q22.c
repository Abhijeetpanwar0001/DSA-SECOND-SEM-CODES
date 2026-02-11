//Given a 2D integer array matrix, return the transpose of matrix.
//The transpose of a matrix is the matrix flipped over its main diagonal, switching the matrix's row and column indices.


/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced.
 */
int** transpose(int** matrix, int matrixSize, int* matrixColSize, 
                int* returnSize, int** returnColumnSizes) {
    
    int rows = matrixSize;              // number of rows
    int cols = matrixColSize[0];        // number of columns
    
    // Transpose dimensions will be cols x rows
    *returnSize = cols;
    
    // Allocate memory for returnColumnSizes
    *returnColumnSizes = (int*)malloc(cols * sizeof(int));
    
    // Allocate memory for result matrix
    int** result = (int**)malloc(cols * sizeof(int*));
    
    for (int i = 0; i < cols; i++) {
        (*returnColumnSizes)[i] = rows;
        result[i] = (int*)malloc(rows * sizeof(int));
    }
    
    // Fill transpose
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[j][i] = matrix[i][j];
        }
    }
    
    return result;
}
