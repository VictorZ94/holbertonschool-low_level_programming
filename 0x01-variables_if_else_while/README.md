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

```C
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

- if the last digit of n is greater than 5: the string and is greater than 5
- if the last digit of n is 0: the string and is 0
- if the last digit of n is less than 6 and not 0: the string and is less than 6 and not 0

```C
[victorz@ManjaroKDE 0x01-variables_if_else_while]$ gcc -Wall -pedantic -Werror -Wextra 1-last_digit.c -o 1-last_digit
[victorz@ManjaroKDE 0x01-variables_if_else_while]$ ./1-last_digit 
Last digit of 1073431153 is 3 and is less than 6 and not 0
[victorz@ManjaroKDE 0x01-variables_if_else_while]$ ./1-last_digit 
Last digit of 762567504 is 4 and is less than 6 and not 0
[victorz@ManjaroKDE 0x01-variables_if_else_while]$ ./1-last_digit 
Last digit of 762567504 is 4 and is less than 6 and not 0
[victorz@ManjaroKDE 0x01-variables_if_else_while]$ ./1-last_digit 
Last digit of -603901905 is -5 and is less than 6 and not 0
[victorz@ManjaroKDE 0x01-variables_if_else_while]$ ./1-last_digit 
Last digit of -908743871 is -1 and is less than 6 and not 0
[victorz@ManjaroKDE 0x01-variables_if_else_while]$ ./1-last_digit 
Last digit of 932840161 is 1 and is less than 6 and not 0
[victorz@ManjaroKDE 0x01-variables_if_else_while]$ ./1-last_digit 
Last digit of 626378268 is 8 and is greater than 5
[victorz@ManjaroKDE 0x01-variables_if_else_while]$ ./1-last_digit 
Last digit of 626378268 is 8 and is greater than 5
[victorz@ManjaroKDE 0x01-variables_if_else_while]$ ./1-last_digit 
Last digit of -753095551 is -1 and is less than 6 and not 0
[victorz@ManjaroKDE 0x01-variables_if_else_while]$ ./1-last_digit 
Last digit of -1053770563 is -3 and is less than 6 and not 0
[victorz@ManjaroKDE 0x01-variables_if_else_while]$ 
```
> Note: you can call the file - how you want.

### 2. alphabet

Write a program that prints the alphabet in lowercase, followed by a new line.

- You can only use the putchar function
- All your code should be in the main function
- Use putchar twice in your code

```C
[victorz@ManjaroKDE 0x01-variables_if_else_while]$ gcc -Wall -pedantic -Werror -Wextra 2-print_alphabet.c -o 2-print_alphabet
[victorz@ManjaroKDE 0x01-variables_if_else_while]$ ./2-print_alphabet 
abcdefghijklmnopqrstuvwxyz
[victorz@ManjaroKDE 0x01-variables_if_else_while]$

```

### 3. alphABET

Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.

- You can only use the putchar function
- All your code should be in the main function
- Use putchar

```C
[victorz@ManjaroKDE 0x01-variables_if_else_while]$ gcc -Wall -pedantic -Werror -Wextra 3-print_alphabets.c -o 3-print_alphabets
[victorz@ManjaroKDE 0x01-variables_if_else_while]$ ./3-print_alphabets 
abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ
[victorz@ManjaroKDE 0x01-variables_if_else_while]$
```
### 4.  Task

Write a program that prints the alphabet in lowercase, followed by a new line.

 - Print all the letters except q and e
 - Use putchar twice.

 ```C
 [victorz@ManjaroKDE 0x01-variables_if_else_while]$ gcc -Wall -pedantic -Werror -Wextra 4-print_alphabt.c -o 4-print_alphabt
[victorz@ManjaroKDE 0x01-variables_if_else_while]$ ./4-print_alphabt 
abcdfghijklmnoprstuvwxyz
[victorz@ManjaroKDE 0x01-variables_if_else_while]$

 ```
 ### 5. Numbers 

 Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
 - Use printf

 ```C
[victorz@ManjaroKDE 0x01-variables_if_else_while]$ gcc -Wall -pedantic -Werror -Wextra 5-print_numbers.c -o 5-print_numbers
[victorz@ManjaroKDE 0x01-variables_if_else_while]$ ./5-print_numbers 
0123456789
[victorz@ManjaroKDE 0x01-variables_if_else_while]$

 ```

 ### 6. Numberz

 Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.

- Don't use any variable of type char
- Use Putchar twice

```C

[victorz@ManjaroKDE 0x01-variables_if_else_while]$ gcc -Wall -pedantic -Werror -Wextra 6-print_numberz.c -o 6-print_numberz
[victorz@ManjaroKDE 0x01-variables_if_else_while]$ ./6-print_numberz 
0123456789
[victorz@ManjaroKDE 0x01-variables_if_else_while]$

```

### 7. Smile in the mirror

Write a program that prints the lowercase alphabet in reverse.

- Use Putchar twice

```C
[victorz@ManjaroKDE 0x01-variables_if_else_while]$ gcc -Wall -pedantic -Werror -Wextra 7-print_tebahpla.c -o 7-print_tebahpla
[victorz@ManjaroKDE 0x01-variables_if_else_while]$ ./7-print_tebahpla 
zyxwvutsrqponmlkjihgfedcba
[victorz@ManjaroKDE 0x01-variables_if_else_while]$
```

### 8. Hexadecimal

Write a program that prints all the numbers of base 16 in lowercase.

- Use Putchar three time in your code

```C
[victorz@ManjaroKDE 0x01-variables_if_else_while]$ gcc -Wall -pedantic -Werror -Wextra 8-print_base16.c -o 8-print_base16
[victorz@ManjaroKDE 0x01-variables_if_else_while]$ ./8-print_base16 
0123456789abcdef
[victorz@ManjaroKDE 0x01-variables_if_else_while]$

```

### 9. Patience, persistence and perspiration make an unbeatable combination for success

Write a program that prints all possible combinations of single-digit numbers.

- Numbers must be separated by ,, followed by a space
- Use putchar four times maximum in your code
- Don't use any variable of type char

```C
[victorz@ManjaroKDE 0x01-variables_if_else_while]$ gcc -Wall -pedantic -Werror -Wextra 9-print_comb.c -o 9-print_comb
[victorz@ManjaroKDE 0x01-variables_if_else_while]$ ./9-print_comb 
0, 1, 2, 3, 4, 5, 6, 7, 8, 9
[victorz@ManjaroKDE 0x01-variables_if_else_while]$ ./9-print_comb | cat -e
0, 1, 2, 3, 4, 5, 6, 7, 8, 9$
[victorz@ManjaroKDE 0x01-variables_if_else_while]$

```

### 10. 00...99

Write a program that prints the numbers from 00 to 99

- Numbers must be separated by ,, followed by a space
- Use putchar five times maximum in your code
- Don't use any variable of type char

```C
[victorz@ManjaroKDE 0x01-variables_if_else_while]$ gcc -Wall -pedantic -Werror -Wextra 10-print_comb2.c -o 10-print_comb2
[victorz@ManjaroKDE 0x01-variables_if_else_while]$ ./10-print_comb2 
00, 01, 02, 03, 04, 05, 06, 07, 08, 09, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99
[victorz@ManjaroKDE 0x01-variables_if_else_while]$
```

### 11. Advanced task

Write a program that prints all possible different combinations of two digits.

- Numbers must be separated by ,, followed by a space
- The two digits must be different
- 01 and 10 are considered the same combination of the two digits 0 and 1
- Print only the smallest combination of two digits
- Use putchar five times maximum in your code

```C
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 100-print_comb3.c -o 100-print_comb3
julien@ubuntu:~/0x01$ ./100-print_comb3
01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13, 14, 15, 16, 17, 18, 19, 23, 24, 25, 26, 27, 28, 29, 34, 35, 36, 37, 38, 39, 45, 46, 47, 48, 49, 56, 57, 58, 59, 67, 68, 69, 78, 79, 89
julien@ubuntu:~/0x01$ 
```