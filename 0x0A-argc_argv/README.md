# Arguments to main 

![](https://img.shields.io/badge/Victor%20Zuluaga-Holberton__School-red)
![](https://img.shields.io/badge/Programming-C_lenguage-violet)

arguments to main provide a useful opportunity to give parameters to programs. Typically, this facility is used to direct the way the program goes about its task. It's particularly common to provide file names to a program through its arguments.

the declaraction of main is:

`int main(int argc, char *argv[] `

`argc` - is a count to arguments.
`argv` - is an array of pointers to the strings, its type is array of pointer to char.

these arguments are passed to the program by the host system's command line interpreter.

## Quiz quiestion

### Question #0

What is argc?

      - The number of command line arguments
      - The size of the argv array

### Question #1

What is argv?

      - An array containing the program command line arguments
      - An array of size argc

### Question #2

What is argv[0]

      - The program name

### Question #3

What is argv[argc]?

      - NULL

### Question #4

In the following command, what is argv[2]?

`$ ./hbtn Holberton School is fun`

      - School

### Question #5

In the following command, what is argv[2]?

`$ ./hbtn "Holberton School" "is fun"`

      - is fun

### Question #6

In the following command, what is argv[2]?

`$ ./hbtn "Holberton School is fun"`

