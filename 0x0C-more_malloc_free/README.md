#Malloc, Calloc, Realloc and Free



![](https://img.shields.io/badge/Victor_Zuluaga-Holberton_School-red) ![](https://img.shields.io/badge/Low_level_programming-C%20lenguaje-violet) ![](https://img.shields.io/badge/Shell-Linux-black) ![](https://img.shields.io/badge/bash-Linux-black)

## Quiz question

### Question #0

To allocate enough space for an array of 10 integers (on a 64bit, Linux machine), I can use:

      - malloc(10 * sizeof(int))

### Question #1

If I want to copy the string “Holberton” into a new space in memory, I can use this statement to reserve enough space for it (select all valid answers):

      - malloc(sizeof(“Holberton”))
      - malloc(10)
      - malloc(strlen(“Holberton”) + 1)

### Question #2

malloc returns a pointer

      - True

### Question #3

malloc returns an address

      - True

### Question #4

What is wrong with this code:

```C
int cp(void)
{
    char *s;

    s = malloc(10);
    strcpy(s, "Holberton");
    return (0);
}

```
      - There is no comment
      - malloc can fail so we should check its return value all the time before using the pointers returned by the function.

### Question #5

You can do this:

`free("Holberton");`

      - NO

### Question #6

You can do this:

```C
char str[] = "Holberton";
free (str);
```

      - No

### Question #7

You can do this:
```C
char *s;

s = strdup("Holberton");
if (s != NULL)
{
    free(s);
}
```
      - Yes

### Question #8

The memory space reserved when calling malloc is on:

      - The heap

### Question #9

What will you see on the terminal?


```C
int main(void)
{
    int *ptr;

    *ptr = 98;
    printf("%d\n", *ptr);
    return (0);
}

```
      - Segmentation Fault

## Task Section


