int		ft_atoi(char *str)
{
	int c;
	int s;
	int res;

	c = 0;
	s = 1;
	res = 0;
	while ((str[c] >= '\t' && str[c] <= '\r') || str[c] == ' ')
		c++;
	while (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
			s *= -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		res = (str[c] - '0') + (res * 10);
		c++;
	}
	return (res * s);
}
/*
# include <unistd.h>
# include <stdio.h>
int	main(void)
{

	char	*str1 = " ---+--+1234ab567";
	printf("\"%s\": %d\n", str1, ft_atoi(str1));

	char	*str2 = " ---+- -+1234ab567";
	printf("\"%s\": %d\n", str2, ft_atoi(str2));

	char	*str3 = " \n---+-+1234ab567";
	printf("\"%s\": %d\n", str3, ft_atoi(str3));

	char	*str4 = " ---+--+a1234ab567";
	printf("\"%s\": %d\n", str4, ft_atoi(str4));

	char	*str5 = "  0";
	printf("\"%s\": %d\n", str5, ft_atoi(str5));

	char	*str6 = "2147483647";
	printf("\"%s\": %d\n", str6, ft_atoi(str6));

	char	*str7 = "-2147483648";
	printf("\"%s\": %d\n", str7, ft_atoi(str7));

	char	*str8 = "abc1234ab567";
	printf("\"%s\": %d\n", str8, ft_atoi(str8));
	printf("\n");

	return (0);
}
*/
