#include <stdio.h>
#include <stdint.h>

/* 
 * NOTE: USE THE STDINT.H DEFINITIONS, SO UINT8_T, INT8_T, UINT16_T, INT16_T, UINT32_T, INT32_T, UINT64_T, INT64_T
 *      AS THESE SHOW EXACTLY WHAT'S BEING STORED IN THE MEMORY AND IS REALLY COMMON ACROSS EMBEDDED PROGRAMMING
 * 
 * Questions to answer here, or underneath in the code as additional comments:
 * 
 * PART 1
 * - Are the addresses for temperatures consecutive
 * - How many bytes apart are they? You can use the sizeof() function to find out how many bytes each variable takes up in memory
 * - Why?
 * 
 * PART 2
 * - How many bytes is the structure Person? Think it through first, then use sizeof() to check
 * 
 */


// PART 2 STRUCTURE, IGNORE FOR PART 1
typedef struct
{
    char name[20];
    uint8_t age;
} Person;

typedef struct test_struct
{
    uint8_t value;
    uint16_t value2;
} test_struct;


// PART 2 FUNCTION, IGNORE FOR PART 1
void part_2_print_person(Person p);

/* 
 * Part 1
 * [] TODO: Fill the structure 'temperatures' with values
 * 
 * [] TODO: Print each value and then the address for each value
 */

void part_1(void) {
    uint8_t temperatures[5];

}


/* 
 * Part 2
 * 
 * [] TODO: Using the structure Person, create two people and fill in the values
 * [] TODO: Finish the function part_2_print_person() to each of the values, name and age, of the person we give it
 * NOTE: WE'RE NOT CREATING A CLASS HERE, PERSON IS JUST A STRUCTURE, LIKE OUR OWN CUSTOM VARIABLE TYPE - IT'S JUST MEMORY, NO CONSTRUCTOR, NO METHODS, JUST DATA
 */ 

void part_2(void) {
    /*
     * Just as an example of initializing a structure, we can do it like this:
     */

    // Declaring a variable of type test_struct first. Declaration is just saying "I want this much memory which has this type"
    test_struct my_first_struct;

    // Now fill it with values
    my_first_struct.value = 5;
    my_first_struct.value2 = 10;
}

void part_2_print_person(Person p) 
{

}

/* Main method here */
int main(void) {
    part_1();
    part_2();
}