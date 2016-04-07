#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

static unsigned int	ft_pow(unsigned int a, unsigned int b)
{
	unsigned int	i;
	unsigned int	tmp;

	i = 1;
	tmp = a;
	if (b == 0)
		return (1);
	while (i < b)
	{
		tmp *= a;
		i++;
	}
	return (tmp);
}

static unsigned int	ft_intlen(unsigned int n, unsigned int base)
{
	unsigned int	i;

	i = 1;
	while (ft_pow(base, i) - 1 < n)
		i++;
	return (i);
}

char	*ft_itoa_base(unsigned int n, unsigned int base)
{
	char	*s;
	int		i;

	i = ft_intlen(n, base);
	s = (char*)malloc(sizeof(char) * i);
	s[i] = '\0';
	while (i-- > 0)
	{
		s[i] = (n % base) + (n % base > 9 ? 'A' - 10 : '0');
		n = n / base;
	}
	return (s);
}

int		main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	printf("%s\n", ft_itoa_base(atoi(argv[1]), atoi(argv[2])));
	return (0);
}
