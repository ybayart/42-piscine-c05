#include <stdio.h>

int		ft_recursive_power(int nb, int power);

int		main(void)
{
	int		nb;
	int		power;

	nb = 3;
	power = 3;
	printf("%d\n", ft_recursive_power(nb, power));
}
