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
    int i, j;
    double k, l;
    scanf("%d %d", i, j);
    scanf("%lf %lf", k, l);
    printf("%d %d", i+j, i-j);
    printf("%.1f %.1f", k+l, k-l);
}
