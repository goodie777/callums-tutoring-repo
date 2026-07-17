#include <stdio.h>

void greet(char name[]);
int add(int a, int b);
void print_result(int result);

#include <stdio.h>

/* 
 * Questions to answer here, or underneath in the code as additional comments:
 * 
 * - Which variables are local?
 * 
 * - Which variables are parameters?
 * 
 * - Which variables are visible in each function?
 * 
 */


void greet(char name[]) {
    printf("Welcome %s\n", name);
}

int add(int a, int b) {
    return a+b;
}

void print_result(int result) {
     printf("The result of a + b is %i\n", result);
}


int main(void) {
    // Start of program, call greet() to greet the user

    greet("Bob");

    // Call add() to add two numbers, store the result in a variable

    int final_calculation = add(5,7);

    // Call print_result() to print the result of the addition

    print_result(final_calculation);

    // Return 0 to indicate successful completion of the program

    return 0;
}
