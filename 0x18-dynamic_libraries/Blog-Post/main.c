#include "prototype.h"
#include <stdio.h>

int main(void)
{
    int operator = 0;

    operator = add(9, 3);
    printf("%d\n", operator);
    operator = sub(9, 3);
    printf("%d\n", operator);
    operator = mul(9, 3);
    printf("%d\n", operator);
    operator = div(9, 3);
    printf("%d\n", operator);
    return (0);
}
