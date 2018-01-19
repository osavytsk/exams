#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	if (!str)
		return ;
	while (str[i] != '\0')
		ft_putchar(str[i++]);
	return ;
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}

void ft_search(char *s, char c, char r)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			s[i] = r;
		i++;
	}
	ft_putstr(s);
	ft_putchar('\n');
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		ft_putchar('\n');
		return 0;
	}
	if (ft_strlen(argv[2]) > 1 && ft_strlen(argv[3]) > 1)
	{
		ft_putchar('\n');
		return 0;
	}
	ft_search(argv[1], argv[2][0], argv[3][0]);
	return 0;
}