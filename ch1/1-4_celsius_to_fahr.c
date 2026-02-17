/*
 * print Celsius-Fahrenheit table
 * for celsius = 0, 20, ..., 300; floating-point version
 */
#include <stdio.h>

int main() {
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;   // lower limit of temperatuire scale
  upper = 300; // upper limit
  step = 20;   // step size

  celsius = lower;

  printf("Celsius\t|\tFahrenheit\n");
  printf("--------------------------------\n");
  while (celsius <= upper) {
    fahr = (9.0 / 5.0) * celsius + 32.0;
    printf("%6.0f\t|\t%6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
