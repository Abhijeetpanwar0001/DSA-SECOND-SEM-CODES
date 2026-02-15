//Given a matrix, calculate the sum of its primary diagonal elements. T
//he primary diagonal consists of elements where row index equals column index.

#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    int matrix[m][n];
    int sum = 0;

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            if(i == j) {
                sum += matrix[i][j];
            }
        }
    }

    printf("%d", sum);

    return 0;
}
