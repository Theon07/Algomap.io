#include "../Headers/ArrayAndString.h"
#include "../Headers/helpers.h"

int romanCharToInt(char c){
    switch (c)
    {
    case 'I':
        return 1;
    case 'V':
        return 5;
    case 'X':
        return 10;
    case 'L':
        return 50;
    case 'C':
        return 100;
    case 'D':
        return 500;
    case 'M':
        return 1000;
    default:
        return 0; // Invalid character
    }
}

int romanToInt(char *s){
        int result = romanCharToInt(s[strlen(s) - 1]);

    for (int i = strlen(s) - 2; i >= 0; i--)
    {
        if (romanCharToInt(s[i]) < romanCharToInt(s[i + 1]))
        {
            result -= romanCharToInt(s[i]);
        }
        else
        {
            result += romanCharToInt(s[i]);
        }
    }
    return result;
}