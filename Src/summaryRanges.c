#include "../Headers/ArrayAndString.h"


char **summaryRanges(int *nums, int numsSize, int *returnSize)
{
    char **ranges = (char **)malloc(numsSize * sizeof(char *));
    for (int i = 0; i < numsSize; i++)
    {
        ranges[i] = (char *)malloc(25 * sizeof(char));
    }
    int count = 0;
    int start, end;
    int k = 0;
    for (int i = 0; i < numsSize; i += k)
    {
        start = nums[i];
        end = nums[i];
        for (k = 1; i + k < numsSize; k++)
        {
            if (nums[i + k] != nums[i] + k)
            {
                break;
            }
            end = nums[i + k];
        }
        if (start == end)
        {
            sprintf(ranges[count], "%d", start);
        }
        else
        {
            sprintf(ranges[count], "%d->%d", start, end);
        }
        count++;
    }
    *returnSize = count;
    return ranges;
}