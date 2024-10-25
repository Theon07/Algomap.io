#include "../Headers/ArrayAndString.h"

int *spiralOrder(int **matrix, int matrixSize, int *matrixColSize, int *returnSize)
{

    int m = matrixSize, n = *matrixColSize;
    int count = m * n, direction = 1;
    int i = 0, j = -1, c = 0;
    int* result = (int*)malloc(count*sizeof(int));
    while (c < count) {
        for (int k = 0; k < n; k++) {
            j += direction;
            result[c] = matrix[i][j];
            c++;
        }
        m -= 1;
        for (int k = 0; k < m; k++) {
            i += direction;
            result[c] = matrix[i][j];
            c++;
        }
        n -= 1;
        direction *= -1;
    }
    *returnSize = count;
    return result;
}