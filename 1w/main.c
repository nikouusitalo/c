// Perform basic arithmetic operations (addition, subtraction, multiplication,
// division).
// Feature 1: Display a menu of operations.
// Feature 2: Accept two numbers as input.
// Feature 3: Perform the operation based on user choice.
// Feature 4: Handle invalid input gracefully.
// Feature 5: Loop the program until the user chooses to exit.

#include <stdio.h>
float adding_values(float a, float b) { return a + b; }

int menu(void) {
  int x;
//float b;
  printf("Enter nubber for what math do you wnat to use ");
  scanf("%d", &x);

  printf("%d \n", x);
  return x;
}

int main(void) { menu(); }
