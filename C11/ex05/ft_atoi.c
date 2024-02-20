

int	ft_atoi(char *str)
{
	int	i;
	int	num;
	int	negv;

	i = 0;
	negv = 1;
	num = 0;

	while (str[i] && str[i] <= 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negv *= - 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
	       i++;	
	}
	return num * negv;
}
