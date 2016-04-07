#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}

void	ft_putbase(unsigned int n, unsigned int base)
{
	unsigned int	tmp;

	if (n >= base)
		ft_putbase(n / base, base);
	else
	{
		if (base == 8)
			ft_putchar('0');
		else if (base == 16)
			ft_putstr("0x");
	}
	tmp = n % base;
	if (tmp <= 9)
		ft_putchar(tmp + '0');
	else if (tmp > 9 && tmp <= 9 + 26)
		ft_putchar(tmp + 'A' - 10);
}

int		main(void)
{
	ft_putbase(422163, 16);
	ft_putchar('\n');
	ft_putbase(422163, 8);
	ft_putchar('\n');
	ft_putbase(422163, 2);
	ft_putchar('\n');
	ft_putbase(-422163, 16);
	ft_putchar('\n');
	return (0);
}
