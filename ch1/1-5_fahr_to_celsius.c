/*
 * print Fahrenheit-Celsius table
 */
#include <stdio.h>

#define LOWER 0      // Lower limit of temperature scale
#define UPPER 300    // Upper limit of temperature scale
#define STEP_SIZE 20 // Temperature increment

int main() {
  float fahr;
  printf("Fahrenheit\t|\tCelsius\n");
  printf("--------------------------------\n");
  for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP_SIZE) {
    printf("%8.0f\t|\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
  }
}
