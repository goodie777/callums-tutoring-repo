#include <stdio.h>
void addFive(int value)
{
    value = value + 5;
    printf("%d\n", value);
}

int main(void)
{
    int number = 10;
    addFive(number);
    printf("%d\n", number);
    return 0;
}


// with pointers - dereferencing 

#include <stdio.h>
void addFive(int* value)
{
    *value = *value + 5;
    printf("%d\n", *value);
}

int main(void)
{
    int number = 10;
    int* p = &number;
    
    addFive(p);
    printf("%d\n", number);
    return 0;
}


/*
Step	Current Function	Current Line	number	value	Output
1		main(void)               9            		
2	    main(void)              10	
3		main(void)              11            10      		
4		addFive(int value)       3            10
5		addFive(int value)       4            10      10
6		addFive(int value)       5            10      15	  
7		addFive(int value)	     6            10      15      15
8		main(void)              12            10              15	
9       main(void)              13            10              15
                                                              10

Questions
Why doesn't number become 15? Because number is a local variable in main(void) scope. 
    
Which variable changes? value in the function addFive() 

When does value disappear? it disappears after the function addFive() ends
*/



