/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmuhlang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 16:23:35 by dmuhlang          #+#    #+#             */
/*   Updated: 2020/06/25 16:26:40 by dmuhlang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
int	ft_recursive_power(int nb, int power)
{
	int r;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (1);

	r = 0;
	return (r * ft_recursive_power(nb, power - power / 2));
}

