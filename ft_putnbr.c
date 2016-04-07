#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n < 10)
	{
		ft_putchar(n + 48);
		return ;
	}
	ft_putnbr(n / 10);
	ft_putchar((n % 10) + 48);
	return ;
}

int		main(void)
{
	int		i;
	int		j;

	i = 422163;
	j = -214263;
	ft_putnbr(i);
	ft_putchar('\n');
	ft_putnbr(j);
	ft_putchar('\n');
	printf("%d\n",i);
	printf("%d\n",j);
	return (0);
}
