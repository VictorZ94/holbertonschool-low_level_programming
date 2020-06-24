# project nested loop and prototype of functions

![](https://img.shields.io/badge/Victor%20Zuluaga-Holberton__School-red)
![](https://img.shields.io/badge/Programming-C-violet)

## Function and prototype

## Quiz

### Question #0

Which of these loop statements don’t exist?

      - foreach
      - loop_to
      - each

### Question #1

What is the ASCII value of A?

      - 65

### Question #2

What is the ASCII value of a?

      - 97

### Question #3

What is the ASCII value of J?

      - 74

### Question #4

What is the ASCII value of J?

      - 48

### Question #5

What is the ASCII value of -?

      - 45

### Question #6

What is the ASCII value of 5?

      - 53

### Question #7

What is the result of 12 % 2?

      - 0

### Question #8

What is the result of 12 % 3?

      - 0

### Question #9

What is the result of 12 % 10?

      - 2

### Question #10

What is the result of 89 % 7?

      - 5

## Section Tasks

- Use this version putchar

```C
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
```

### 0. _putchar

Write a program that prints Holberton, followed by a new line.

```
[victorz@ManjaroKDE 0x02-functions_nested_loops]$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 0-holberton.c -o 0-holberton
[victorz@ManjaroKDE 0x02-functions_nested_loops]$ ./0-holberton 
Holberton
[victorz@ManjaroKDE 0x02-functions_nested_loops]$
```

### 1. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game

Write a function that prints the alphabet, in lowercase, followed by a new line.

 - Prototype: void print_alphabet(void);
 - use _putchar twice in your code

```C
[victorz@ManjaroKDE 0x02-functions_nested_loops]$ cat 1-main.c 
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet();
    return (0);
}
[victorz@ManjaroKDE 0x02-functions_nested_loops]$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 1-main.c 1-alphabet.c -o 1-alphabet
[victorz@ManjaroKDE 0x02-functions_nested_loops]$ ./1-alphabet 
abcdefghijklmnopqrstuvwxyz
[victorz@ManjaroKDE 0x02-functions_nested_loops]$

```

### 2. 10 x alphabet

Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.

      - Prototype: void print_alphabet_x10(void);
      - use _putchar twice in your code

```C
[victorz@ManjaroKDE 0x02-functions_nested_loops]$ cat 2-main.c 
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet_x10();
    return (0);
}
[victorz@ManjaroKDE 0x02-functions_nested_loops]$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 2-main.c 2-print_alphabet_x10.c -o 2-alphabet_x10
[victorz@ManjaroKDE 0x02-functions_nested_loops]$ ./2-alphabet_x10 
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
[victorz@ManjaroKDE 0x02-functions_nested_loops]$
```

### 3. islower

Write a function that checks for lowercase character.

      - Prototype: int _islower(int c);
      - Returns 1 if c is lowercase
      - Returns 0 otherwise
      - Use only your own _putchar

NOTE: The standard library provides a similar function: islower. Run man islower to learn more. RTFM.

```C
[victorz@ManjaroKDE 0x02-functions_nested_loops]$ cat 3-main.c 
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _islower('H');
    _putchar(r + '0');
    r = _islower('o');
    _putchar(r + '0');
    r = _islower(108);
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
[victorz@ManjaroKDE 0x02-functions_nested_loops]$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 3-main.c 3-islower.c -o 3-islower
[victorz@ManjaroKDE 0x02-functions_nested_loops]$ ./3-islower 
011
[victorz@ManjaroKDE 0x02-functions_nested_loops]$
```

### 4. isalpha

Write a function that checks for alphabetic character.

- Prototype: int _isalpha(int c);
- Returns 1 if c is a letter, lowercase or uppercase
- Returns 0 otherwise

NOTE: The standard library provides a similar function: isalpha. Run man isalpha to learn more.

```C
[victorz@ManjaroKDE 0x02-functions_nested_loops]$ cat 4-main.c 
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _isalpha('H');
    _putchar(r + '0');
    r = _isalpha('o');
    _putchar(r + '0');
    r = _isalpha(108);
    _putchar(r + '0');
    r = _isalpha(';');
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
[victorz@ManjaroKDE 0x02-functions_nested_loops]$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 4-main.c 4-isalpha.c -o 4-isalpha
[victorz@ManjaroKDE 0x02-functions_nested_loops]$ ./4-isalpha 
1110
[victorz@ManjaroKDE 0x02-functions_nested_loops]$

```

### 5. Sign

Write a function that prints the sign of a number.

- Prototype: int print_sign(int n);
- Returns 1 and prints + if n is greater than zero
- Returns 0 and prints 0 if n is zero
- Returns -1 and prints - if n is less than zero

```C
[victorz@ManjaroKDE 0x02-functions_nested_loops]$ cat 5-main.c 
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = print_sign(98);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(0);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(0xff);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(-1);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
[victorz@ManjaroKDE 0x02-functions_nested_loops]$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 5-main.c 5-sign.c -o 5-sign
[victorz@ManjaroKDE 0x02-functions_nested_loops]$ ./5-sign 
+, 1
0, 0
+, 1
-, /
[victorz@ManjaroKDE 0x02-functions_nested_loops]$

```

### 6. There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you

Write a function that computes the absolute value of an integer.
 
 - Prototype: int _abs(int);

NOTE: The standard library provides a similar function: abs. Run man abs to learn more.

```C
[victorz@ManjaroKDE 0x02-functions_nested_loops]$ cat 6-main.c 
#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _abs(-1);
    printf("%d\n", r);
    r = _abs(0);
    printf("%d\n", r);
    r = _abs(1);
    printf("%d\n", r);
    r = _abs(-98);
    printf("%d\n", r);
    return (0);
}
[victorz@ManjaroKDE 0x02-functions_nested_loops]$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 6-main.c 6-abs.c -o 6-abs
[victorz@ManjaroKDE 0x02-functions_nested_loops]$ ./6-abs 
1
0
1
98
[victorz@ManjaroKDE 0x02-functions_nested_loops]$

```

### 7. There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important 

Write a function that prints the last digit of a number.

 - Prototype: int print_last_digit(int);
 - Returns the value of the last digit

```C
[victorz@ManjaroKDE 0x02-functions_nested_loops]$ cat 7-main.c 
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    print_last_digit(98);
    print_last_digit(0);
    r = print_last_digit(-1024);
    _putchar('0' + r);
    _putchar('\n');
    return (0);
}
[victorz@ManjaroKDE 0x02-functions_nested_loops]$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 7-main.c 7-print_last_digit.c -o 7-last_digit
[victorz@ManjaroKDE 0x02-functions_nested_loops]$ ./7-last_digit 
8044
[victorz@ManjaroKDE 0x02-functions_nested_loops]$
```

### 8. I'm federal agent Jack Bauer, and today is the longest day of my life

Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.

      - Prototype: void jack_bauer(void);

```C
[victorz@ManjaroKDE 0x02-functions_nested_loops]$ cat 8-main.c 
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    jack_bauer();
    return (0);
}
[victorz@ManjaroKDE 0x02-functions_nested_loops]$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 8-main.c 8-24_hours.c -o 8-24
[victorz@ManjaroKDE 0x02-functions_nested_loops]$ ./8-24 | head
00:00
00:01
00:02
00:03
00:04
00:05
00:06
00:07
00:08
00:09
[victorz@ManjaroKDE 0x02-functions_nested_loops]$ ./8-24 | tail
23:50
23:51
23:52
23:53
23:54
23:55
23:56
23:57
23:58
23:59
[victorz@ManjaroKDE 0x02-functions_nested_loops]$ ./8-24 | wc -l
1440
[victorz@ManjaroKDE 0x02-functions_nested_loops]$
```

### 9. Learn your times table

Write a function that prints the 9 times table, starting with 0.

- Prototype: void times_table(void)
- Format: see example

```C
[victorz@ManjaroKDE 0x02-functions_nested_loops]$ cat 9-main.c 
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    times_table();
    return (0);
}
[victorz@ManjaroKDE 0x02-functions_nested_loops]$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 9-main.c 9-times_table.c -o 9-times_table
[victorz@ManjaroKDE 0x02-functions_nested_loops]$ ./9-times_table 
0,  0,  0,  0,  0,  0,  0,  0,  0,  0
0,  1,  2,  3,  4,  5,  6,  7,  8,  9
0,  2,  4,  6,  8, 10, 12, 14, 16, 18
0,  3,  6,  9, 12, 15, 18, 21, 24, 27
0,  4,  8, 12, 16, 20, 24, 28, 32, 36
0,  5, 10, 15, 20, 25, 30, 35, 40, 45
0,  6, 12, 18, 24, 30, 36, 42, 48, 54
0,  7, 14, 21, 28, 35, 42, 49, 56, 63
0,  8, 16, 24, 32, 40, 48, 56, 64, 72
0,  9, 18, 27, 36, 45, 54, 63, 72, 81
[victorz@ManjaroKDE 0x02-functions_nested_loops]$ ./9-times_table | tr ' ' . | cat -e
0,..0,..0,..0,..0,..0,..0,..0,..0,..0$
0,..1,..2,..3,..4,..5,..6,..7,..8,..9$
0,..2,..4,..6,..8,.10,.12,.14,.16,.18$
0,..3,..6,..9,.12,.15,.18,.21,.24,.27$
0,..4,..8,.12,.16,.20,.24,.28,.32,.36$
0,..5,.10,.15,.20,.25,.30,.35,.40,.45$
0,..6,.12,.18,.24,.30,.36,.42,.48,.54$
0,..7,.14,.21,.28,.35,.42,.49,.56,.63$
0,..8,.16,.24,.32,.40,.48,.56,.64,.72$
0,..9,.18,.27,.36,.45,.54,.63,.72,.81$
[victorz@ManjaroKDE 0x02-functions_nested_loops]$

```

### 10. a + b

Write a function that adds two integers and returns the result.

- Prototype: int add(int, int);

```C
[victorz@ManjaroKDE 0x02-functions_nested_loops]$ cat 10-main.c 
#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = add(89, 9);
    printf("%d\n", n);
    return (0);
}
[victorz@ManjaroKDE 0x02-functions_nested_loops]$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 10-main.c 10-add.c -o 10-add
[victorz@ManjaroKDE 0x02-functions_nested_loops]$ ./10-add 
98
[victorz@ManjaroKDE 0x02-functions_nested_loops]$
```