#include <stdio.h>
#include <stdlib.h>

int		ft_intlen(int n)
{
	int i;

	i = 1;
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while ((n /= 10) > 0)
		i++;
	return (i);
}

int		ft_pow(int a, int b)
{
	int	i;
	int	tmp;

	i = 1;
	tmp = a;
	while (i < b)
	{
		tmp *= a;
		i++;
	}
	a = tmp;
	return (a);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		i;
	int		wnbr;
	int		tmp;

	i = 0;
	wnbr = ft_intlen(n);
	s = (char*)malloc(sizeof(char) * wnbr + 1);
	s[wnbr + 1] = '\0';
	if (n < 0)
	{
		s[i] = '-';
		wnbr--;
		i++;
		n *= -1;
	}
	tmp = n;
	while (--wnbr > 0)
	{
		s[i] = (tmp / (ft_pow(10, wnbr))) + 48;
		tmp = tmp % ft_pow(10, wnbr);
		i++;
	}
	s[i] = (n % 10) + 48;
	return (s);
}

int		main(void)
{
	int	i;
	int	j;

	i = 422163;
	j  = -422163;
	printf("ft_itoa(i) = %s\n", ft_itoa(i));
	printf("ft_itoa(j) = %s\n", ft_itoa(j));
	return (0);
}
