# Function pointer

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


