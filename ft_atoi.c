#include <stdlib.h>
#include <stdio.h>

int		ft_atoi(char *s)
{
	int	n;
	int	i;

	n = 0;
	i = 0;
	if (s[i] == '-')
		i++;
	while (s[i] != '\0' && (s[i] >= '0' && s[i] <= '9'))
	{
		n += s[i] - '0';
		i++;
		if (s[i] != '\0' && (s[i] >= '0' && s[i] <= '9'))
			n *= 10;
	}
	if (s[0] == '-')
		n *= -1;
	return (n);
}

int		main(void)
{
	char	*i;
	char	*j;
	char	*k;
	char	*l;

	i = "j'ai 422163 ans";
	j = "quarante deux moins soixante trois egal -214263";
	k = "422163 ans";
	l = "-214263 est le resultat de 42 - 63";
	printf("ft_atoi(i) = %d\n", ft_atoi(i));
	printf("ft_atoi(j) = %d\n", ft_atoi(j));
	printf("ft_atoi(k) = %d\n", ft_atoi(k));
	printf("ft_atoi(l) = %d\n", ft_atoi(l));
	printf("atoi(i) = %d\n", atoi(i));
	printf("atoi(j) = %d\n", atoi(j));
	printf("atoi(k) = %d\n", atoi(k));
	printf("atoi(l) = %d\n", atoi(l));
	return (0);
}
