#include "../Headers/ArrayAndString.h"

bool isSubsequence(char *s, char *t)
{
    int c = strlen(s);
    if (c == 0)
        return true;
    for (int i = strlen(t) - 1; i >= 0; i--)
    {
        if (t[i] == s[c - 1])
        {
            c--;
        }
    }
    return c == 0;
}