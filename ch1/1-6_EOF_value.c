#include <stdio.h>

int main() {
  printf(
      "Type a character and press Enter (or press Ctrl+D/Ctrl+Z for EOF):\n");
  printf("The value of the expression 'getchar() != EOF' is: %d\n",
         getchar() != EOF);
}
