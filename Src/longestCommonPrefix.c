#include "../Headers/ArrayAndString.h"

char *longestCommonPrefix(char **strs, int strsSize)
{
    char c;
    int n = 0;
    while ((c = strs[0][n]) != '\0')
    {
        for (int i = 1; i < strsSize; i++)
        {
            if (c != strs[i][n])
            {
                strs[0][n] = 0;
                return strs[0];
            }
        }
        n++;
    }
    strs[0][n] = 0;
    return strs[0];
}