#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *s)
{
	int i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != '\0')
		ft_putchar(s[i++]);
	return ;
}

int main(int argc, char **argv)
{
	if (argc < 2){
		ft_putchar('\n');
		return (0);
	}
	ft_putstr(argv[argc - 1]);
	ft_putchar('\n');
	return 0;
}