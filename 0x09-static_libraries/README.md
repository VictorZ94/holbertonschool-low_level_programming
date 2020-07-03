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

## Task Section

Create the static library `libholberton.a` containing all the functions listed below:
`
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
`