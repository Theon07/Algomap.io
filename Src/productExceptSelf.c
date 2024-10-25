#include "../Headers/ArrayAndString.h"

int *productExceptSelf(int *nums, int numsSize, int *returnSize)
{
    int *result = (int *)malloc(sizeof(int) * numsSize);
    if (result == NULL)
    {
        *returnSize = 0;
        return NULL;
    }
    *returnSize = numsSize;
    int prod = 1;
    for (int i = 0; i < numsSize; i++)
    {
        result[i] = prod;
        prod *= nums[i];
    }
    prod = 1;
    for (int i = numsSize - 1; i >= 0; i--)
    {
        result[i] *= prod;
        prod *= nums[i];
    }
    return result;
}