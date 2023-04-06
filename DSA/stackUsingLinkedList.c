// Code for IPS-4
// Program to implement a stack data structure using Linked Lists
// Input format: number of values in first line followed by each value in a new line

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
}*top = NULL; // Top here is a global pointer.

// You could also do something like:
// struct node* top = NULL;

// This is not needed. I just did this to keep my code tidy.
struct node * getnew(void) {
    return (struct node *)malloc(sizeof(struct node));
}

void push(int n) {
    struct node* newnode = getnew();
    // Without creating a getnew function, you would do something like:
    // struct node* newnode = (struct node *)malloc(sizeof(struct node));
    newnode->next = top;
    newnode->data = n;
    top = newnode;
    return;
}

int pop(void) {
    if (top == NULL) {
        printf("Stack Underflow!\n");
        return -2147483648; // You could just return -1. Fun fact: -2147483648 is the lowest possible number you could store as a 32-bit signed int.
    }
    struct node* temp = top;
    int n = temp->data;
    top = temp->next;
    free(temp);
    return n;
}

int main (void) {
    int m, n;
    scanf("%i\n", &m);
    for(int i = 0; i < m; i++) {
        scanf("%i\n", &n);
        push(n);
    }
    for(int i = 0; i < m; i++) {
        printf("%i ", pop());
    }
    return 0;
}
