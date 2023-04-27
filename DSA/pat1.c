// Program to use Stacks to print the first 3 elements in the stack

#include <stdio.h>

// Using dynamic memory allocation and call by reference for efficiency.
void push (int* stack, int* top, int val, int MAX) {
    if (*top == MAX - 1) {
        printf("Stack Overflow!\n");
        return;
    }
    // Using Pointer Arithmetic here
    // printf("DEBUG top = %d, val = %d\n", *top, val);
    *(stack + ++*(top)) = val;
    return;
}

int pop (int* stack, int* top) {
    if (*top == -1) {
        printf("Stack Underflow!\n");
        return -1; // Error case
    }
    // Pointer arithmetic
    return *(stack + (*top)--);
}

void reverse (int* stack1, int* stack2, int* top1, int* top2, int MAX) {
    // printf("DEBUG: reverse has been called\n");
    int safety = 0;
    while (*top1 > -1 && safety < 69) {
        push(stack2, top2, pop(stack1, top1), MAX);
        safety++;
    }
    return;
}

// // Debug Only
// void display (int* stack, int top) {
//     for (int i = 0; i <= top; i++) {
//         printf("%d ", *(stack + i));
//     }
//     printf("\n");
// }

/*
    Note: I have used call by reference in all the functions so that they can be
    used on any stack. I should have created a Stack Data Strucure to be more clear
*/

int main (void) {

    int n, top1 = -1, top2 = -1;
    scanf("%d", &n);
    int stack1[n], stack2[n];
    int temp;
    for(int i = 0; i < n; i++) {
        scanf("%d", &temp);
        push(&stack1[0], &top1, temp, n);
    }

    // display(&stack1[0], top1);

    // printf("DEBUG n = %d\n", n);

    reverse(&stack1[0], &stack2[0], &top1, &top2, n);
    for (int i = 0; i < 3; i++) {
        printf("%d\n", pop(&stack2[0], &top2));
    }

    return 0;
}
