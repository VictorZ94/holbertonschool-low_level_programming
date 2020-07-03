# Static Library

![](https://img.shields.io/badge/Victor%20Zuluaga-Holberton__School-red)
![](https://img.shields.io/badge/Programming-C-violet)


One of the tools that compilers supply us with are libraries. A library is a file containing several object files, that can be used as a single entity in a linking phase of a program.
Static libraries are just collections of object files that are linked into the program during the linking phase of compilation, and are not relevant during runtime.

## Quiz Question 

### Question #0

What command is used to create a static library from object files?

      - ar

### Question #1

What is the point of using ranlib?

      - Indexing an archive

### Question #2

What command(s) can be used to list the symbols stored in a static library?

      - nm
      - ar

### Question #3

What is the format of a static library?

      - An archive

# Create a static library 

The basic tool used to create static libraries is a program called 'ar', for 'archiver'. This program can be used to create static libraries (which are actually archive files), modify object files in the static library, list the names of object files in the library, and so on. In order to create a static library, we can use a command like this:

`ar rc libutil.a util_file.o util_net.o util_math.o`

This command creates a static library named 'libutil.a' and puts copies of the object files "util_file.o", "util_net.o" and "util_math.o" in it. If the library file already exists, it has the object files added to it, or replaced, if they are newer than those inside the library. The 'c' flag tells ar to create the library if it doesn't already exist. The 'r' flag tells it to replace older object files in the library, with the new object files.

After an archive is created, or modified, there is a need to index it. This index is later used by the compiler to speed up symbol-lookup inside the library, and to make sure that the order of the symbols in the library won't matter during compilation (this will be better understood when we take a deeper look at the link process at the end of this tutorial). The command used to create or update the index is called 'ranlib', and is invoked as follows:

`ranlib libutil.a`

On some systems, the archiver (which is not always ar) already takes care of the index, so ranlib is not needed (for example, when Sun's C compiler creates an archive, it is already indexed). However, because 'ar' and 'ranlib' are used by many makefiles for many packages, such platforms tend to supply a ranlib command that does nothing. This helps using the same makefile on both types of platforms.

for going futher visite: [Static library](http://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html#what_is_a_library "Static library")

## Task Section


### 0. A library is not a luxury but one of the necessities of life

Create the static library `libholberton.a` containing all the functions listed below:

```C
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
```

If you haven’t coded all of the above functions create empty ones with the right prototype.
Don’t forget to push your `holberton.h` file to your repository. It should at least contain all the prototypes of the above functions.

```C
[victorz@ManjaroKDE 0x09-static_libraries]$ ar -t libholberton.a 
0-isupper.o
0-memset.o
0-strcat.o
100-atoi.o
1-isdigit.o
1-memcpy.o
1-strncat.o
2-strchr.o
2-strlen.o
2-strncpy.o
3-islower.o
3-puts.o
3-strcmp.o
3-strspn.o
4-isalpha.o
4-strpbrk.o
5-strstr.o
6-abs.o
9-strcpy.o
_putchar.o
[victorz@ManjaroKDE 0x09-static_libraries]$ nm libholberton.a 

0-isupper.o:
0000000000000000 T _isupper

0-memset.o:
0000000000000000 T _memset

0-strcat.o:
0000000000000000 T _strcat

100-atoi.o:
0000000000000000 T _atoi

1-isdigit.o:
0000000000000000 T _isdigit

1-memcpy.o:
0000000000000000 T _memcpy

1-strncat.o:
0000000000000000 T _strncat

2-strchr.o:
0000000000000000 T _strchr

2-strlen.o:
0000000000000000 T _strlen

2-strncpy.o:
0000000000000000 T _strncpy

3-islower.o:
0000000000000000 T _islower

3-puts.o:
                 U _putchar
0000000000000000 T _puts

3-strcmp.o:
0000000000000000 T _strcmp

3-strspn.o:
0000000000000000 T _strspn

4-isalpha.o:
0000000000000000 T _isalpha

4-strpbrk.o:
0000000000000000 T _strpbrk

5-strstr.o:
0000000000000000 T _strstr

6-abs.o:
0000000000000000 T _abs

9-strcpy.o:
0000000000000000 T _strcpy

_putchar.o:
0000000000000000 T _putchar
                 U write
[victorz@ManjaroKDE 0x09-static_libraries]$ cat main.c
#include "holberton.h"

int main(void)
{
    _puts("\"At the end of the day, my goal was to be the best hacker\"\n\t- Kevin Mitnick");
    return (0);
}
[victorz@ManjaroKDE 0x09-static_libraries]$ gcc main.c -L. -lholberton -o quote
"At the end of the day, my goal was to be the best hacker"
    - Kevin Mitnick
[victorz@ManjaroKDE 0x09-static_libraries]$
```

### 1. Without libraries what have we? We have no past and no future

Create a script called `create_static_lib.sh` that creates a static library called `liball.a` from all the .c files that are in the current directory.

```C
[victorz@ManjaroKDE 0x09-static_libraries]$ ls *.c

0-isupper.c  0-strcat.c  1-isdigit.c  1-strncat.c  2-strlen.c   3-islower.c  3-strcmp.c  4-isalpha.c  5-strstr.c  9-strcpy.c  _putchar.c
0-memset.c   100-atoi.c  1-memcpy.c   2-strchr.c   2-strncpy.c  3-puts.c     3-strspn.c  4-strpbrk.c  6-abs.c     main.c

[victorz@ManjaroKDE 0x09-static_libraries]$ cat create_static_lib.sh
#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c *.c | ar -rc liball.a *.o
[victorz@ManjaroKDE 0x09-static_libraries]$ ./create_static_lib.sh
[victorz@ManjaroKDE 0x09-static_libraries]$ ls *.a
liball.a
[victorz@ManjaroKDE 0x09-static_libraries]$ ar -t liball.a
0-isupper.o
0-memset.o
0-strcat.o
100-atoi.o
1-isdigit.o
1-memcpy.o
1-strncat.o
2-strchr.o
2-strlen.o
2-strncpy.o
3-islower.o
3-puts.o
3-strcmp.o
3-strspn.o
4-isalpha.o
4-strpbrk.o
5-strstr.o
6-abs.o
9-strcpy.o
_putchar.o
[victorz@ManjaroKDE 0x09-static_libraries]$ 

```


