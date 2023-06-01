/*
Consider a function Odd (m, n) where m and n are integers.
Odd (m, n) = true if count of odd digits present in m is greater than n.
Odd (m, n) = false if count of odd digits present in m is lesser (or equal to) than n.
For example, Odd (1189, 3478) = true.
Given a sequence of integers, design a divide and conquer algorithm to sort the given integers based on the number of odd digits count.
Sample Input:
Number of elements: 4
Elements:
3478, 1926, 1189, 1046
Sorted Output: 1046, 1926, 3478, 1189
*/

// My Code:

#include <stdio.h>
#include <stdlib.h>

// In order to sort based on the number of Odd digits
// we simply need to use Odd(m, n) function while sorting
// instead of using > or < comparison operators.


bool Odd (int m, int n) {
    int c1 = 0, c2 = 0;
    // works by chopping off the units digit in each iteration
    for (;m > 0; m = m / 10) {
        if(m % 2 == 0)
            continue;
        else
            c1++; //increments count if modulo2 is 1
    }
    for (;n > 0; n = n / 10) {
        if(n % 2 == 0)
            continue;
        else
            c2++;
    }
    if (c1 > c2)
        return true;
    else
        return false;
}

// I am using Merge Sort as my Divide and conquer approach

void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    // Temp arrays
    int L[n1], R[n2];

    // Copy data to temp arrays L[] and R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    // Merge the temporary arrays back into arr[]
    i = 0;  // First subarray
    j = 0;  // Second subarray
    k = l;  // Merged subarray
    while (i < n1 && j < n2) {
        // Here is the only difference:
        if (Odd(R[j], L[i])) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if there are any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if there are any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergesort(int arr[], int l, int r) {
    if (l < r) {
        // Gives same result as (l + r) / 2 but with Overflow safety
        int m = l + (r - l) / 2;

        // Sort first and second halves
        mergesort(arr, l, m);
        mergesort(arr, m + 1, r);

        // Merge the sorted halves
        merge(arr, l, m, r);
    }
}

int main (void) {
    int n;
    scanf("%d\n", &n);
    // printf("KJ lol %d\n", n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d\n", &arr[i]);
    }
    // printf("for arr[0] %d and arr[1] %d :%d\n", arr[0], arr[1], Odd(arr[0], arr[1]));
    mergesort(arr, 0, n - 1);
    
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
