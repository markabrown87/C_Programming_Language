#include <stdio.h>
main() {
    printf("%s   %s\n", "Farenheit", "Celcius");
    for (int i = 300; i >= 0; i = i - 20) {
        printf("%9d %9.1f\n", i, ((i - 32) * (5.0/9.0)));
    }
}