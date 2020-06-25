/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmuhlang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 16:52:59 by dmuhlang          #+#    #+#             */
/*   Updated: 2020/06/25 16:53:03 by dmuhlang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
int		ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);

	else
		return (ft_fibonacci(index -1));
}
int main()

