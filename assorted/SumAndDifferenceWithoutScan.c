// Based on https://www.hackerrank.com/challenges/sum-numbers-c/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

parseStringForInt(char[], int lim);
double parseStringForDouble(char[], int lim, int decimalIndex);

int main()
{
    int intArr[2];
    double doubleArr[2];
    
    char input[100];
    int i = 0;
    int j = 0;
    int decimalIndex = -1;
    int c;
    
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            intArr[j++] = parseStringForInt(input, i-1);
            i = 0;
        } else if (c == '\n') {
            intArr[j++] = parseStringForInt(input, i-1);
            break;
        } else {
            input[i++] = c;
        }
    }
    
    i = 0;
    j = 0;
    
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            doubleArr[j++] = parseStringForDouble(input, i-1, decimalIndex);
            i = 0;
        } else if (c == '.') {
            decimalIndex = i;
            input[i++] = c;
        } else {
            input[i++] = c;
        }
    }
    doubleArr[j++] = parseStringForDouble(input, i-1, decimalIndex);
    
    int intSum = intArr[0] + intArr[1];
    int intDiff = intArr[0] - intArr[1];
    printf("%d %d\n", intSum, intDiff);
    
    double doubleSum = doubleArr[0] + doubleArr[1];
    double doubleDiff = doubleArr[0] - doubleArr[1];
    printf("%0.1f %0.1f", doubleSum, doubleDiff);
    
    return 0;
}

parseStringForInt(char input[], int lim) {
    
    double value = 0;
    
    for (int i = lim; i >= 0; i--) {
        if (i == 0 && input[i] == '-') value *= -1;
        value += ((input[i] - '0') * pow(10, lim - i));
    }
    
    int returnedInt = (int) value;
    return returnedInt;
    
}

double parseStringForDouble(char input[], int lim, int decimalIndex) {
    
    int revisedLimit = decimalIndex == -1 ? lim : decimalIndex;
    
    double value = 0;
    
    for (int i = lim; i >= 0; i--) {
        if (i == 0 && input[i] == '-') value *= -1;
        if (input[i] == '.') {
            revisedLimit--;
            continue;
        }
        value += ((input[i] - '0') * pow(10, revisedLimit - i));
    }
    
    return value;
    
}
