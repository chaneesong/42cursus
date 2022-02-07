#include <stdio.h>
#include "ft_printf.h"
int main(void)
{
    printf("printf : [%m]\n", 123);
    ft_printf("ft_printf : [%m]\n", 123);
    return (0);
}
