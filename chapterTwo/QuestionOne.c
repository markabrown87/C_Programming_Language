#include <stdio.h>
#include <limits.h>

main() {

    long maxUnsignedCharCalculated;
    long maxSignedCharCalculated;
    long minSignedCharCalculated;

    long printPowerOf2(int num) {
        int returnNum = 1;
        if (num == 0) return 1;
        for (int i = 1; i <= num; i++) {
            returnNum *= 2;
        } 
        return returnNum;
    }

    maxUnsignedCharCalculated = printPowerOf2(8) - 1;
    printf("%d\n", maxUnsignedCharCalculated);
    printf("%d\n", UCHAR_MAX);

    maxSignedCharCalculated = ((printPowerOf2(8) + 1) / 2) - 1;
    minSignedCharCalculated = -((printPowerOf2(8) + 1) / 2);
    printf("%d\n", maxSignedCharCalculated);
    printf("%d\n", CHAR_MAX);
    printf("%d\n", minSignedCharCalculated);
    printf("%d\n", CHAR_MIN);

}