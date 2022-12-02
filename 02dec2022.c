//Simple looped program to perform basic single parameter mathematical operations using math.h library.

#include <stdio.h>
#include <math.h>
#include <cs50.h>
#include <string.h>

int main (void) {

    printf("MATH OPERATIONS\n\nTo exit the program, type 'exit' and pass 1 as parameter(for confirmation).\n");
    float a;
    //Loop so that the code can keep running unless you type exit.
    while(true) {
        printf("\nList: 'ceil', 'floor', 'sqrt', 'exp', 'sin', 'cos', 'tan'.\n");
        string userOper = get_string("Enter the operation you want to perform: "); //user inputs what operation he wants to do.
        a = get_float("\nPlease Enter The Parameter: ");

        //If ladder to execute the code respective to user input string.
        if(strcmp(userOper, "ceil") == 0) {
            printf("\nAns = %g\n", ceil(a));
        }
        else if(strcmp(userOper, "floor") == 0) {
            printf("\nAns = %g\n", floor(a));
        }
        else if(strcmp(userOper, "sqrt") == 0) {
            printf("\nAns = %g\n", sqrt(a));
        }
        else if(strcmp(userOper, "exp") == 0) {
            printf("\nAns = %g\n", exp(a));
        }
        else if(strcmp(userOper, "sin") == 0) {
            printf("\nAns = %g\n", sin(a));
        }
        else if(strcmp(userOper, "cos") == 0) {
            printf("\nAns = %g\n", cos(a));
        }
        else if(strcmp(userOper, "tan") == 0) {
            printf("\nAns = %g\n", tan(a));
        }
        else if(strcmp(userOper, "exit") == 0) {
            if(a == 1) { //using parameter as confirmation to exit the program. program terminates only if 1 is passed as parameter.
                printf("\nYou exited the program.\n");
                break; //exit the loop
            }
            else
                printf("\nExit not confirmed since parameter is not equal to 1.\n");
        }
        else {
            printf("ERROR: Invalid input.\n"); //In case user types something other than the keywords.
            return 2;
        }
    }

    return 0;
}