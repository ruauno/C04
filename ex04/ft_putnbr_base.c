#include <unistd.h>

void	ft_putnbr_base_rec(int nbr, char *base, int size)
{
	unsigned int	n;
	char			a;

	if (nbr < 0)
	{
		write(1, "-", 1);
		n = nbr * (-1);
	}
	else
		n = nbr;
	if (n >= (unsigned int)size)
		ft_putnbr_base_rec(n / size, base, size);
	a = base[n % size];
	write(1, &a, 1);
}

int		ft_ver_bas(char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == base[i + 1])
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int s;

	s = 0;
	if (ft_ver_bas(base) == 1)
	{
		while (base[s] != '\0')
			s++;
		ft_putnbr_base_rec(nbr, base, s);
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int	nbr[] = {0,	1, 10, 1234, -1234, 2147483647, -2147483648	};
	char	*base[] = { "0123456789", "01", "0123456789ABCDEF", "poneyvif", "", "1", "ABCD+E", "ABC-D", "ABCCD" };
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 7)
		{ 
	
			printf("nbr: %d => ", nbr[j]);
			fflush(NULL);
			ft_putnbr_base(nbr[j], base[i]);
			printf("\n");
			fflush(NULL);
			j++;
		}
		printf("\n");
		i++;
	}

	return (0);
}
*/
