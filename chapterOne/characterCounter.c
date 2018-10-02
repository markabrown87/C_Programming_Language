#include <stdio.h>

// Counts number of spaces, tabs, and newlines for input
main() {
    double spaces = 0;
    double tabs = 0;
    double newLines = 0;
    
    int c = getchar();
    while (c != EOF) {
        putchar(c);
        if (c == ' ') { spaces++; }
        if (c == '\t') { tabs++; }
        if (c == '\n') { newLines++; }
        c = getchar();
    }
    putchar(c);
    printf("\nSpaces: %.0f, Tabs: %.0f, New Lines: %.0f", spaces, tabs, newLines);

}