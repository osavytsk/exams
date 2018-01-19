#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}

int main(int argc, char **argv)
{
	int i;

	if (argc != 2)
	{
		ft_putchar('\n');
		return 0;
	}
	i = ft_strlen(argv[argc - 1]) - 1;
	while (i >= 0)
		ft_putchar(argv[argc - 1][i--]);
	ft_putchar('\n');
	return 0;	
}
