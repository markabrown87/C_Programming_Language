#include <stdio.h>
main() {
    int c = getchar();
    while (c != EOF) {
        printf("\n");
        putchar(c);
        printf("%d\n", c != EOF);
        c = getchar();
    }
    printf("%d\n", "Done!");
}