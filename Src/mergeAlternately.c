#include "../Headers/ArrayAndString.h"

char *mergeAlternately(char *word1, char *word2){
    size_t len = strlen(word1) + strlen(word2);
    char *result = (char *)malloc(len);
    int idx = 0;
    while (*word1 || *word2)
    {
        if (*word1)
            result[idx++] = *word1++;
        if (*word2)
            result[idx++] = *word2++;
    }
    result[len - 1] = '\0';
    return result;
}