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

int main(void) {
    // Start of program, call greet() to greet the user

    // Call add() to add two numbers, store the result in a variable

    // Call print_result() to print the result of the addition

    // Return 0 to indicate successful completion of the program
}

void greet(char name[]) {
    printf("%s\n", name);
}

int add(int a, int b) {
    int result = a+b;
    return 0;
}

void print_result(int result) {
     print("The result of a + b is\n", result);
}