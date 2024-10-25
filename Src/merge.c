#include "../Headers/ArrayAndString.h"
#include "../Headers/helpers.h"



int compare_merge_ranges(const void *a, const void *b)
{
    return (**(int **)a - **(int **)b);
}

int **merge(int **intervals, int intervalsSize, int *intervalsColSize, int *returnSize, int **returnColumnSizes)
{
    if (intervalsSize == 0) 
    {
        *returnColumnSizes = intervalsColSize;
        *returnSize = 0;
        return NULL;
    }

    qsort(intervals, intervalsSize, sizeof(int[2]), compare_merge_ranges); 
    int **merged = (int **)calloc(intervalsSize, sizeof(int *));
    int count = 0;
    merged[count] = intervals[0]; 
    for (int i = 1; i < intervalsSize; i++)
    {
        if (merged[count][1] >= intervals[i][0]) 
        {
            
            merged[count][1] = merged[count][1] < intervals[i][1] ? intervals[i][1] : merged[count][1];
        }
        else
        {
            count++;
            merged[count] = intervals[i];
        }
    }

    *returnColumnSizes = intervalsColSize;
    *returnSize = count + 1;
    return merged;
}