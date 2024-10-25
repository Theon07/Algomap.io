#include "../Headers/ArrayAndString.h"

int findClosestNumber(int *nums, int numsSize)
{
    if (numsSize == 0)
    {
        return 0;
    }
    int result = nums[0];
    for (int i = 1; i < numsSize; i++)
    {
        if (abs(nums[i]) < abs(result) ||
            (abs(nums[i]) == abs(result) && nums[i] > 0))
        {
            result = nums[i];
        }
    }
    return result;
}
