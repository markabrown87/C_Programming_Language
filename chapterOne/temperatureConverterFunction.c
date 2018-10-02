#include <stdio.h>

double convertToCelcius(double temp);
double convertToFarenheit(double temp);

main() {
    double tempOne = convertToCelcius(100);
    double tempTwo = convertToFarenheit(-30);
    printf("%6.1f\n", tempOne);
    printf("%6.1f\n", tempTwo);
}

double convertToCelcius(double temp) {
    return ((temp - 32) * (9.0 / 5.0));
}

double convertToFarenheit(double temp) {
    return (temp * (9.0 / 5.0)) + 32;
}