#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
	return ;
}

int main(void)
{
	int a = 42;
	int b = 25;
	printf("a = %d\nb = %d\n", a, b);
	ft_swap(&a, &b);
	printf("a = %d\nb = %d\n", a, b);
	return 0;
}