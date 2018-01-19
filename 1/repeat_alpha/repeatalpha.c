#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	int i;
	int j;
	int c;

	i = 0;

	if (argc != 2)
	{
		ft_putchar('\n');
		return 0;
	}
	while (argv[argc - 1][i] != '\0')
	{
		if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
		{
			c = (int)argv[1][i] - 96;
			j = 0;
			while (c > j)
			{
				ft_putchar(argv[1][i]);
				j++;
			}
		}
		else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
		{
			c = (int)argv[1][i] - 64;
			j = 0;
			while (c > j)
			{
				ft_putchar(argv[1][i]);
				j++;
			}
		}
		else
			ft_putchar(argv[1][i]);
		i++;
	}
	return 0;
}