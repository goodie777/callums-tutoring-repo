#include <stdio.h>

void printGreeting(void)
{
    printf("Hello!\n");
}

int main(void)
{
    printGreeting();

    printf("Finished\n");

    return 0;
}


Step | Current Function | Current Line                        | Output
1    | main(void)             10                 
2    | printGreeting(void)    5       
3    | printGreeting(void)    6                                  Hello!              
4    | printGreeting(void)    still on line 6                    Hello!
                              (function returning to main)

5    | main(void)             12                                 Hello!
    
6    | main(void)             14                                 Hello!
                                                                 Finished

Questions
Which function starts first?  printGreeting()
After greet() finishes, where does execution continue? continues in main
Does main() execute while greet() is running? no main() pauses while greet() is running. 
