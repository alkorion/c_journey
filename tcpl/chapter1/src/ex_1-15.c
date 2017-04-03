/* Excercise 1-15
 * Temperature Conversion 2.0
 * Alessandro Lira
 *
 * Prints temperature conversions for a range of values
 */

#include<stdio.h>

float fahr_to_cels(float temp);

main() {
    float fahr, lower, upper, step;

    lower = 0; 
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper) { 
        printf("%3.0f %6.1f\n", fahr, fahr_to_cels(fahr));
        fahr = fahr + step;
    }

    return 0;
}

/* Converts Fahrenheit to Celsius */
float fahr_to_cels(float temp) {
    /* C = (F-32)*5/9 */
    return (temp - 32.0) * 5.0/9.0;
}
