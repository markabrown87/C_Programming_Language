#include <stdio.h>

main() {
    int length = 0;

    printf("%s\n", "Enter a string: ");

    int c = getchar();
    while (c != EOF && c != '\0') {
        length++;
        c = getchar();
    }

    printf("\n%d\n", length);

}