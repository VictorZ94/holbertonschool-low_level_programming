#ifndef CALCULATOR_H
#define CALCULATOR_H

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */

/*  Structure  */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/* funtion operation mathmatical */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/* prototype function ponter */
int (*get_op_func(char *s))(int, int);

#endif /*  ifndef CALCULATOR_H  */
