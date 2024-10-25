#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

#include "helpers.h"

int findClosestNumber(int *nums, int numsSize);
char *mergeAlternately(char *word1, char *word2);
int romanToInt(char *s);
bool isSubsequence(char *s, char *t);
int maxProfit(int *prices, int pricesSize);
char *longestCommonPrefix(char **strs, int strsSize);
char **summaryRanges(int *nums, int numsSize, int *returnSize);
int *productExceptSelf(int *nums, int numsSize, int *returnSize);
int **merge(int **intervals, int intervalsSize, int *intervalsColSize, int *returnSize, int **returnColumnSizes);
int *spiralOrder(int **matrix, int matrixSize, int *matrixColSize, int *returnSize);
void rotate(int** matrix, int matrixSize, int* matrixColSize);