#include <stdio.h>

int main(void)
{
    int apples = 5;
    int oranges = 2;

    apples = apples + oranges;

    printf("%d\n", apples);

    return 0;
}


/*
| Step | Current Function | Current Line | apples | oranges | Output |
| ---- | ---------------- | ------------ | ------ | ------- | ------ |
| 1    |    main()               4 
| 2    |    main()               5           5
| 3    |    main()               6           5         2
| 4    |    main()               8           5         2
| 5    |    main()               10          7         2
| 6    |    main()               12          7         2         7
  7         main()               13          7         2         7



Questions
Where does execution begin? on line 3
Which line executes first?  on line 4
What value does apples have after line 7?  5
What is printed?   7
*/
