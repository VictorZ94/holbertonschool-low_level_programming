# Function pointer
![](https://img.shields.io/badge/C%20Lenguage-Function%20Pointer-orange)
![](https://img.shields.io/badge/Victor%20Zuluaga-Holberton%20School-red)
![](https://img.shields.io/badge/Linux-Bash--Shell-lightgrey)

A function pointer is a variable that stores the address of a function that can later be called through that function pointer. This is useful because functions encapsulate behavior. For instance, every time you need a particular behavior such as drawing a line, instead of writing out a bunch of code, all you need to do is call the function.

## Quiz Question

### Question #0

Which one is a pointer to a function?

      - int (*func)(int a, float b);

### Question #1

To store the address of this function:
`   void neyo(void);     `

to the variable f of type pointer to a function that does not take any argument and does not return anything, you would do (check all correct answers if there is more than one):

      - f = neyo;
      - f = &neyo;

### Question #2

If f is a pointer to a function that takes no parameter and returns an int, you can call the function pointed by f this way (check all correct answers if there is more than one):

      - f();
      - (*f)();

### Question #3

This `void (*anjula[])(int, float) ` is:

      - An array of pointers to functions that take an int and a float as parameters and returns nothing

### Question #4

What does a pointer to a function point to (check all correct answers if there is more than one)?

      - code
      - The first byte of code of the function


## Section Tasks

### 0. What's my name 

Write a function that prints a name.

      Prototype: `void print_name(char *name, void (*f)(char *));`

```C
[victorz@ManjaroKDE 0x0F-function_pointers]$ cat 0-main.c
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name_as_is - prints a name as is
 * @name: name of the person
 *
 * Return: Nothing.
 */
void print_name_as_is(char *name)
{
    printf("Hello, my name is %s\n", name);
}

/**
 * print_name_uppercase - print a name in uppercase
 * @name: name of the person
 *
 * Return: Nothing.
 */
void print_name_uppercase(char *name)
{
    unsigned int i;

    printf("Hello, my uppercase name is ");
    i = 0;
    while (name[i])
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            putchar(name[i] + 'A' - 'a');
        }
        else
        {
            putchar(name[i]);
        }
        i++;
    }
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_name("Danton", print_name_as_is);
    print_name("Rick Harris", print_name_uppercase);
    printf("\n");
    return (0);
}
[victorz@ManjaroKDE 0x0F-function_pointers]$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-print_name.c -o a
[victorz@ManjaroKDE 0x0F-function_pointers]$ ./a 
Hello, my name is Danton
Hello, my uppercase name is RICK HARRIS
[victorz@ManjaroKDE 0x0F-function_pointers]$ 

```

### 1. If you spend too much time thinking about a thing, you'll never get it done 

Write a function that executes a function given as a parameter on each element of an array.

      Prototype: `void array_iterator(int *array, size_t size, void (*action)(int));`
      where size is the size of the array
      and action is a pointer to the function you need to use

```C
[victorz@ManjaroKDE 0x0F-function_pointers]$ cat 1-main.c
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_elem - prints an integer
 * @elem: the integer to print
 *
 * Return: Nothing.
 */
void print_elem(int elem)
{
    printf("%d\n", elem);
}

/**
 * print_elem_hex - prints an integer, in hexadecimal
 * @elem: the integer to print
 *
 * Return: Nothing.
 */
void print_elem_hex(int elem)
{
    printf("0x%x\n", elem);
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int array[5] = {0, 98, 402, 1024, 4096};

    array_iterator(array, 5, &print_elem);
    array_iterator(array, 5, &print_elem_hex);
    return (0);
}
[victorz@ManjaroKDE 0x0F-function_pointers]$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-array_iterator.c -o b
[victorz@ManjaroKDE 0x0F-function_pointers]$ ./b 
0
98
402
1024
4096
0x0
0x62
0x192
0x400
0x1000
[victorz@ManjaroKDE 0x0F-function_pointers]$ 

```

### 2. To hell with circumstances; I create opportunities

Write a function that searches for an integer.

      Prototype: `int int_index(int *array, int size, int (*cmp)(int));`
      where size is the number of elements in the array array
      cmp is a pointer to the function to be used to compare values
      int_index returns the index of the first element for which the cmp function does not return 0
      If no element matches, return -1
      If size <= 0, return -1

```C
[victorz@ManjaroKDE 0x0F-function_pointers]$ cat 2-main.c
#include <stdio.h>
#include "function_pointers.h"

/**
 * is_98 - check if a number is equal to 98
 * @elem: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */
int is_98(int elem)
{
    return (98 == elem);
}

/**
 * is_strictly_positive - check if a number is greater than 0
 * @elem: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */
int is_strictly_positive(int elem)
{
    return (elem > 0);
}


/**
 * abs_is_98 - check if the absolute value of a number is 98
 * @elem: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */
int abs_is_98(int elem)
{
    return (elem == 98 || -elem == 98);
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int array[20] = {0, -98, 98, 402, 1024, 4096, -1024, -98, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 98};
    int index;

    index = int_index(array, 20, is_98);
    printf("%d\n", index);
    index = int_index(array, 20, abs_is_98);
    printf("%d\n", index);
    index = int_index(array, 20, is_strictly_positive);
    printf("%d\n", index);
    return (0);
}
[victorz@ManjaroKDE 0x0F-function_pointers]$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-int_index.c -o c
[victorz@ManjaroKDE 0x0F-function_pointers]$ ./c 
2
1
2
[victorz@ManjaroKDE 0x0F-function_pointers]$ 

```

### 3. A goal is not always meant to be reached, it often serves simply as something to aim at 

Write a program that performs simple operations.

      - You are allowed to use the standard library
      - Usage: calc num1 operator num2
      - You can assume num1 and num2 are integers, so use the atoi function to convert them from the string input to int
      - operator is one of the following:
            - +: addition
            - -: subtraction
            - *: multiplication
            - /: division
            - %: modulo
      
      - The program prints the result of the operation, followed by a new line
      - You can assume that the result of all operations can be stored in an int
      - if the number of arguments is wrong, print Error, followed by a new line, and exit with the status 98
      - if the operator is none of the above, print Error, followed by a new line, and exit with the status 99
      - if the user tries to divide (/ or %) by 0, print Error, followed by a new line, and exit with the status 100

This task requires that you create four different files.

3-calc.h

This file should contain all the function prototypes and data structures used by the program. You can use this structure:

```C
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;

```

3-op_functions.c

This file should contain the 5 following functions (not more):

op_add: returns the sum of a and b. Prototype: int op_add(int a, int b);
op_sub: returns the difference of a and b. Prototype: int op_sub(int a, int b);
op_mul: returns the product of a and b. Prototype: int op_mul(int a, int b);
op_div: returns the result of the division of a by b. Prototype: int op_div(int a, int b);
op_mod: returns the remainder of the division of a by b. Prototype: int op_mod(int a, int b);
3-get_op_func.c

This file should contain the function that selects the correct function to perform the operation asked by the user. You’re not allowed to declare any other function.

Prototype: int (*get_op_func(char *s))(int, int);
where s is the operator passed as argument to the program
This function returns a pointer to the function that corresponds to the operator given as a parameter. Example: get_op_func("+") should return a pointer to the function op_add
You are not allowed to use switch statements
You are not allowed to use for or do ... while loops
You are not allowed to use goto
You are not allowed to use else
You are not allowed to use more than one if statement in your code
You are not allowed to use more than one while loop in your code
If s does not match any of the 5 expected operators (+, -, *, /, %), return NULL
You are only allowed to declare these two variables in this function:


```C
   op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;

```
3-main.c

This file should contain your main function only.

You are not allowed to code any other function than main in this file
You are not allowed to directly call op_add, op_sub, op_mul, op_div or op_mod from the main function
You have to use atoi to convert arguments to int
You are not allowed to use any kind of loop
You are allowed to use a maximum of 3 if statements
Compilation and examples
```C
[victorz@ManjaroKDE 0x0F-function_pointers]$ gcc -Wall -pedantic -Werror -Wextra 3-main.c 3-op_functions.c 3-get_op_func.c -o calc
[victorz@ManjaroKDE 0x0F-function_pointers]$ ./calc 1 + 1
2
[victorz@ManjaroKDE 0x0F-function_pointers]$ ./calc 97 + 1
98
[victorz@ManjaroKDE 0x0F-function_pointers]$ ./calc 1024 / 10
102
[victorz@ManjaroKDE 0x0F-function_pointers]$ ./calc 1024 '*' 98
100352
[victorz@ManjaroKDE 0x0F-function_pointers]$ ./calc 1024 '\*' 98
Error
[victorz@ManjaroKDE 0x0F-function_pointers]$ ./calc 1024 - 98
926
[victorz@ManjaroKDE 0x0F-function_pointers]$ ./calc 1024 '%' 98
44
[victorz@ManjaroKDE 0x0F-function_pointers]$ 

```
