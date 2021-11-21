#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "includes/libft.h"

int main()
{
	printf("test max %d\n", atoi("21474836478"));
	printf("test max %d\n", ft_atoi("21474836478"));
	printf("test min %d\n", atoi("-123456789123456"));
	printf("test min %d\n", ft_atoi("-123456789123456"));
	return (0);
}
