// C program to swap 2 numbers without using a 3rd variable. Hence, no additional Space complexity.

#include <stdio.h>

int main (void) {
    int a = 34;
    int b = 35;
    printf("Before Swapping: a: %i, b: %i\n", a, b);
    a = a + b;
    b = a - b; // When we remove the value of B from A + B, we'll be left with the value of a so it's being assigned to b now.
    a = a - b; // Now our a still contains A + B, but we want to get rid of the B, so we subtract it.
    printf("After Swapping: a: %i, b: %i\n", a, b);
}
