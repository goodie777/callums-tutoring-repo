// Preprocessor, input and output, library for standard functions
#include <stdio.h>

// Globally defined data, anywhere in the program can see it 
int two = 2;
int three = 3;

// no return (-1 is bad, 0 is good)
// no return, no parameter, call print and write hello
void greet (char name[])
{
    printf("Hello %s \n", name);
}

// main function, no parameters but good practice to use void, calls greet, returns 0 to say it's ok
int main (void)
{
    printf("Starting Program \n");

    // array of characters, with one after the other memory location
    char name[4] = "Sean";
    // S - 0x7fffffffffd714 1 byte
    // e - 0x7fffffffffd715 1 byte
    // a - 0x7fffffffffd716 1 byte
    // n - 0x7fffffffffd717 1 byte


    printf("Memory location of name is %p \n", &name);
    
    printf("Letter for first location is %c \n", name[0]);
    printf("Memory address for first location is %p \n", &name[0]);

    printf("Letter for second location is %c \n", name[1]);
    printf("Memory address for second location is %p \n", &name[1]);

    greet(name);

    return 0;
}