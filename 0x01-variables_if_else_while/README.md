# Learning Conditional structure in C

![](https://img.shields.io/badge/Victor%20Zuluaga-Holberton__School-red)
![](https://img.shields.io/badge/Programming-C-violet)

## Here I'll see everything that I need to start with C

## Quiz

### Question #0

What is the size of the unsigned int data type?

      - 4 bytes

### Question #1

What is the size of the char data type?

      - 1 byte

### Question #2

What is the size of the float data type?

      - 4 bytes

### Question #3

Which of the following are both valid if statements in ANSI C and Betty-compliant? (Considering a and b two variables of type int)


```C
if (a > b)
{
  return (a);
}
```

```C
if (a > b)
  return (a);
```

### Question #4

Which of the following are both valid for statements in ANSI C and Betty-compliant? (Considering a and b two variables of type int)

```C
for (a = 0; a < b; a++)
{
    printf("%d\n", a);
}
```
```C
for (a = 0; a < b; a++)
    printf("%d\n", a);
```
```C
a = 0;
for (; a < b;)
{
    printf("%d\n", a++);
}
```

### Question #5

Which of the following are both valid while or do/while statements in ANSI C and Betty-compliant? (Considering a and b two variables of type int)

```C
a = 0;
while (a < b)
{
    printf("%d\n", a);
    a++;
}
```
```C
a = 0;
do {
    printf("%d\n", a);
    a++;
} while (a < b);

```
```C
a = 0;
while (a < b)
    printf("%d\n", a++);     
```

## Section Task

### 0. Positive anything is better than negative nothing 

This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print whether the number stored in the variable n is positive or negative.

- use the piece of code.
```C
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
```
 - The variable n will store a different value every time you will run this program
 - The output of the program should be:
      - The number, followed by
            - if the number is greater than 0: is positive
            - if the number is 0: is zero
            - if the number is less than 0: is negative.

Your output should be.

```bash
[victorz@ManjaroKDE 0x01-variables_if_else_while]$ gcc -Wall -pedantic -Werror -Wextra 0-positive_or_negative.c -o 0-positive_or_negative
[victorz@ManjaroKDE 0x01-variables_if_else_while]$ ./0-positive_or_negative 
-35884268 is negative
[victorz@ManjaroKDE 0x01-variables_if_else_while]$ ./0-positive_or_negative 
748981267 is positive
[victorz@ManjaroKDE 0x01-variables_if_else_while]$ ./0-positive_or_negative 
748981267 is positive
[victorz@ManjaroKDE 0x01-variables_if_else_while]$ ./0-positive_or_negative 
-628024398 is negative
[victorz@ManjaroKDE 0x01-variables_if_else_while]$ ./0-positive_or_negative 
-926866626 is negative
[victorz@ManjaroKDE 0x01-variables_if_else_while]$
```
> Note: you can call the file - how you want.

### 1. The last digit

This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable n.




