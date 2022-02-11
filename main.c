#include <stdio.h>
#include "ft_printf.h"
#include <limits.h>
#include <string.h>

int main(){
	int a;
	char *str;

	str = calloc(sizeof(char), ((size_t)INT_MAX + 1));
	memset(str, 'a', INT_MAX);
	a = ft_printf("%s\n", str);
	printf("test\n");
	printf("%d\n", a);
	return (0);
}
