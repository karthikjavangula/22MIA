// Program to use Stacks to print the first 3 elements in the stack

#include <stdio.h>

const int MAX = 64;
struct Stack {
    int st[MAX];
    int top;
}

void push (struct Stack* stack, int val) {
    if (stack->top == MAX - 1) {
        return;
    }
    stack->st[++stack->top] = val;
}

void pop (struct Stack* stack) {
    if (stack->top == -1) {
        
    }
}

// // Using dynamic memory allocation and call by reference for efficiency.
// void push (int* stack, int* top, int val, int MAX) {
//     if (*top == MAX - 1) {
//         printf("Stack Overflow!\n");
//         return;
//     }
//     // Using Pointer Arithmetic here
//     *(stack + *(++top)) = val;
//     return;
// }

// int pop (int* stack, int* top) {
//     if (*top == -1) {
//         printf("Stack Underflow!\n");
//         return -1; // Error case
//     }
//     // Pointer arithmetic
//     return *(stack + *top--);
// }

// void reverse (int* stack1, int* stack2, int* top1, int* top2) {
//     while (*top2 < 3) {
//         push(stack2, top2, pop(stack1, top1), 3);
//     }
//     return;
// }

// /*  
//     Note: I have used call by reference in all the functions so that they can be
//     used on any stack. I should have created a Stack Data Strucure to be more clear 
// */

// int main (void) {
    
//     int n, top1 = -1, top2 = -1;
//     scanf("%d", &n);
//     // For second stack, we only need capacity of 3.
//     int stack1[n], stack2[3];
//     int temp;
//     for(int i = 0; i < n; i++) {
//         scanf("%d", &temp);
//         push(&stack1[0], &top1, temp, n);
//     }
    
//     printf("DEBUG n = %d\n", n);
    
//     reverse(&stack1[0], &stack2[0], &top1, &top2);
//     for (int i = 0; i < 3; i++) {
//         printf("%d\n", pop(&stack2[0], &top2));
//     }
    
//     return 0;
// }

// // I have made sure that in the entire code, not even a single byte goes unused.
