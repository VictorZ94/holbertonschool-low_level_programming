# Pointers, String and Array.

- Pointer - Stage the address in memory of the another variable
- String - is a string of characters back to back
- Array - is a colection homogenous or of the same type contiguaously

## Quiz

### Question #0

`var = "Holberton";`

What is the type of var?

- char *

### Question #1

What is wrong with the following code?

```C
int n = 5;
int array[10];
int i = 3;

array[n] = i;
```

- Nothing is wrong

### Question #2

What is wrong with the following code?

```C
int n = 5;
int array[n];
int i = 3;

array[n] = i;
```

- It is impossible to declare the variable array this way

### Question #3

What is wrong with the following code?
```C
int n = 5;
int array[5];
int i = 3;

array[n] = i;
```

- It is not possible to access array[n]

### Question #4

Why is it important to reserve enough space for an extra character when declaring/allocating a string?

- For the null byte (end of string)

### Question #5

What is/are the difference(s) between the two following variables? (Except their names)

```
char *s1 = "";
char *s2 = NULL;
```

- The first one points to a 0-byte, the second one points to 0
- The first one can be dereferenced, not the second one

### Question #6

What happens when one tries to dereference a pointer to NULL?

- Segmentation fault

## Section Task.

### 0. strcat 

Write a function that concatenates two strings.

      - Prototype: char *_strcat(char *dest, char *src);
      - This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
      - Returns a pointer to the resulting string dest

>      NOTE: The standard library provides a similar function: strcat. Run man strcat to learn more. RTFM

```C
[victorz@ManjaroKDE 0x06-pointers_arrays_strings]$ cat 0-main.c 
#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *p;

    printf("%s\n", s1);
    printf("%s", s2);
    p = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", p);
    return (0);
}
[victorz@ManjaroKDE 0x06-pointers_arrays_strings]$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-strcat.c -o 0-strcat
[victorz@ManjaroKDE 0x06-pointers_arrays_strings]$ ./0-strcat 
Hello 
World!
Hello World!
World!
Hello World!
[victorz@ManjaroKDE 0x06-pointers_arrays_strings]$
```

