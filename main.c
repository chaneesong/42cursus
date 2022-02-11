#include <stdio.h>
#include "ft_printf.h"

int main(){
	char test;
	printf("\n%d\n", ft_printf("The address of the answer is %p", &test));
	return (0);
}