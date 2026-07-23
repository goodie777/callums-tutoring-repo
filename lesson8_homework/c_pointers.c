#include <stdio.h>


int main()
{

    // Lesson One 
    
    int age = 5;

    int* p = &age; // create an int pointer variable . This is type int pointer. When we want to use this variable, we do not use the                     // asterisk.
                   // We can assign this p pointer a value using the address-of operator. &age is a pointer to age.


    // Lesson 2  - indirection. how to access the value it points to. Also known as dereferencing

    printf("%i\n", *p); // The asterisk is known as the indirection operator and is used to get the value located where the pointer is                         // pointing. This process is also known as dereferencing the pointer.
                        // Be careful not to confuse the use of the asterisk for declaration and for indirection. You use the asterisk                         // when declaring a pointer but you only use it with variable after that if you are directly interested in the                         // value at that memory location.

    printf("%i\n", age); // value of the variable age.
    
    printf("%p\n", &age); // address of age
    printf("%p\n", p); // the address that the pointer points to

    /*

     age → int
     &age → pointer value (an address)
     p → pointer variable (stores that address)
     *p → int (the dereferenced value)
     
    */

    // Lesson 3 - 
    char lesson_three;
    printf("This is Lesson Three%c\n", lesson_three);

    // You have the ability to update a pointer or update the value a pointer points to, and these are two distinct things.
   
    int dog_age = 5;
    int* pointer = &dog_age;
    dog_age = 10; // update the value
    printf("%i %i\n", dog_age, *pointer);  // 10 10

    // You can change the original value indirectly through the pointer. If we update the value at the pointer destination, both           // variables will show that change.
    // You need to use the asterisk as this will dereference the pointer and refer to the location the pointer is pointing at

    int cat_age = 5;
    int* pointer2 = &cat_age;
    *pointer2 = 15; // update the value at the pointer destination
    printf("%i %i\n", cat_age, *pointer2);  // 15 15

    return 0;
} 

