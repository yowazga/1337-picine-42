#include "lib.h"

void	ft_putnbr(int num)
{
	char c;

	if (num < 0)
	{
		write(1, "-", 1);
		num *= - 1;
	}
	if (num > 9)
		ft_putnbr(num / 10);
	c = num % 10 + '0';
	write(1, &c, 1);
}
