#include <unistd.h>

void	ft_print_combn(int n);
void	ft_combination(int numbers[], int depth, int start, int n);
void	ft_putchar(int arr[], int n);
int	ft_is_last(int arr[], int n);

void	ft_print_combn(int n)
{
	int arr[9];
	ft_combination(arr, 0, 0, n);
}

void	ft_combination(int numbers[], int depth, int start, int n)
{
	if(depth == n)
	{
		ft_putchar(numbers, n);
		return;
	}
	
	while (start <= 9)
	{
		numbers[depth] = start;
		ft_combination(numbers, depth+1, start+1, n);
		start++;
	}
}

void	ft_putchar(int arr[], int n)
{
	int i;
	char c;

	i = 0;
	while (i < n)
	{
		c = '0' + arr[i];
		write(1, &c, 1);
		i++;
	}
	if (ft_is_last(arr, n))
		return;	
	write(1, ", ", 2);
}

int	ft_is_last(int arr[], int n)
{
	int i;
	
	i = 0;
	while (i <= n + 1)
	{
		if (arr[i] != 9 - n + i)
			return (1);
	}
	return (0);
}

int	main()
{
	ft_print_combn(2);
	return (0);
}
