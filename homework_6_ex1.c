#include <stdio.h>

void greet(char name[]);
int add(int a, int b);
void print_result(int result);

#include <stdio.h>

/* 
 * Questions to answer here, or underneath in the code as additional comments:
 * 
 * - Which variables are local?
 *   int final_calculation is the only local variable because it is declared inside the main() function. It is then assigned   *   the value returned by add(5,7). 
 *
 * - Which variables are parameters?
 *   A parameter is a variable that is listed inside the parenthese of a function definition. It acts as a placeholder
 *   or container that receives a value when the function is called. Its like a container that the function uses to recieve    *   information. 
 *   The parameters in the code are as follows: name, a,b, result
 *   
 * - Which variables are visible in each function?
 *    Visible means a variable that a function can access and use. A function can see a variable inside that function and 
 *    a parameter given to that function. A function cannot see varaibles that belong to another function.
 *  final_calculation stores the value returned by add(5,7), which is 12. The print_result(final_calculation) function then     *  passes that value to the result parameter, and printf() prints "The result of a + b is 12".
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
