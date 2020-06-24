#include <stdio.h>
int	ft_iterative_factorial(int nb)
{
	int			factorial;
		int		i;

		if (nb == 0)
				return (1);
		else if (nb <0)
			return (0);
		factorial = nb;
		i = 1;
		while (i < nb)
		{
			factorial =factorial * i;
			i++;
		}
		return (factorial);

		}
int main()
{
	int a,b;
	a = 5;
	b = ft_iterative_factorial(a);
	printf("%d",b);
	return(0);
}

