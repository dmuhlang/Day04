#include <stdio.h>
int	ft_iterative_power(int nb, int power)
{
	int r;

	if (power < 0)
		return (0);
	r = 1;
	while (power--)
		r *= nb;
	return (r);
}
int main()
{
  printf("%d",ft_iterative_power(2, 1));
  return(0);
}
