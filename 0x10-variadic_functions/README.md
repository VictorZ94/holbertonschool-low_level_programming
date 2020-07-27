# Variadic Function

![](https://img.shields.io/badge/C%20Lenguage-Variadic%20Function-orange)
![](https://img.shields.io/badge/Victor%20Zuluaga-Holberton%20School-red)
![](https://img.shields.io/badge/Linux-Bash--Shell-lightgrey)

Perhaps you would like to have a function that will accept any number of values and then return the average. You don't know how many arguments will be passed in to the function. One way you could make the function would be to accept a pointer to an array. Another way would be to write a function that can take any number of arguments. So you could write avg(4, 12.2, 23.3, 33.3, 12.1); or you could write avg(2, 2.3, 34.4); The advantage of this approach is that it's much easier to change the code if you want to change the number of arguments. Indeed, some library functions can accept a variable list of arguments (such as printf--I bet you've been wondering how that works!).

## Section task

### 0. Beauty is variable, ugliness is constant

Write a function that returns the sum of all its parameters.

      - Prototype: `int sum_them_all(const unsigned int n, ...);`
      - If `n == 0`, return 0

```C
[victorz@ManjaroKDE 0x10-variadic_functions]$ cat 0-main.c
#include <stdio.h>
#include "variadic_functions.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int sum;

    sum = sum_them_all(2, 98, 1024);
    printf("%d\n", sum);
    sum = sum_them_all(4, 98, 1024, 402, -1024);
    printf("%d\n", sum);    
    return (0);
}
[victorz@ManjaroKDE 0x10-variadic_functions]$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-sum_them_all.c -o a
[victorz@ManjaroKDE 0x10-variadic_functions]$ ./a 
1122
500
[victorz@ManjaroKDE 0x10-variadic_functions]$ 
```

### 1. To be is to be the value of a variable 

Write a function that prints numbers, followed by a new line.

      - Prototype: `void print_numbers(const char *separator, const unsigned int n, ...);`
      - where separator is the string to be printed between numbers
      - and n is the number of integers passed to the function
      - You are allowed to use printf
      - If separator is NULL, don’t print it
      - Print a new line at the end of your function

```C
[victorz@ManjaroKDE 0x10-variadic_functions]$ cat 1-main.c
#include "variadic_functions.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_numbers(", ", 4, 0, 98, -1024, 402);
    return (0);
}
[victorz@ManjaroKDE 0x10-variadic_functions]$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-print_numbers.c -o b
[victorz@ManjaroKDE 0x10-variadic_functions]$ ./b
0, 98, -1024, 402
[victorz@ManjaroKDE 0x10-variadic_functions]$ 
```

### 2. One woman's constant is another woman's variable

Write a function that prints strings, followed by a new line.

      - Prototype: void print_strings(const char *separator, const unsigned int n, ...);
      - where separator is the string to be printed between the strings
      - and n is the number of strings passed to the function
      - You are allowed to use printf
      - If separator is NULL, don’t print it
      - If one of the string is NULL, print (nil) instead
      - Print a new line at the end of your function

```C
[victorz@ManjaroKDE 0x10-variadic_functions]$ cat 2-main.c
#include "variadic_functions.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_strings(", ", 2, "Jay", "Django");
    return (0);
}
[victorz@ManjaroKDE 0x10-variadic_functions]$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-print_strings.c -o c
[victorz@ManjaroKDE 0x10-variadic_functions]$ ./c 
Jay, Django
[victorz@ManjaroKDE 0x10-variadic_functions]$ 
```

### 3. To be is a to be the value of a variable

Write a function that prints anything.

      - Prototype: void print_all(const char * const format, ...);
      - where format is a list of types of arguments passed to the function
            - c: char
            - i: integer
            - f: float
            - s: char * (if the string is NULL, print (nil) instead
            - any other char should be ignored
            - see example
      - You are not allowed to use for, goto, ternary operator, else, do ... while
      - You can use a maximum of
            - 2 while loops
            - 2 if

      - You can declare a maximum of 9 variables
      - You are allowed to use printf
      - Print a new line at the end of your function

```C
[victorz@ManjaroKDE 0x10-variadic_functions]$ cat 3-main.c
#include "variadic_functions.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_all("ceis", 'H', 0, "lberton");
    return (0);
}
[victorz@ManjaroKDE 0x10-variadic_functions]$ gcc -Wall -pedantic -Werror -Wextra 3-main.c 3-print_all.c -o d
[victorz@ManjaroKDE 0x10-variadic_functions]$ ./d 
H, 0, lberton
[victorz@ManjaroKDE 0x10-variadic_functions]$ 

```