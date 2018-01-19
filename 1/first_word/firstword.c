#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstrtosp(char *s)
{
	int i;

	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'){
		if (s[i] == '\0')
		{
			ft_putchar('\n');
			return ;
		}
		i++;
	}
	while (s[i] != '\0' && s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
	{
		ft_putchar(s[i++]);
	}
	ft_putchar('\n');
	return ;
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	ft_putstrtosp(argv[argc - 1]);
	return (0);
}