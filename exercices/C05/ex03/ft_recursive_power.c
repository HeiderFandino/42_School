/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandino <hfandino@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 19:03:05 by hfandino          #+#    #+#             */
/*   Updated: 2026/02/07 19:24:32 by hfandino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, (power - 1)));
}
/*
#include <stdio.h>

int	main(void)
{
	int	nb;
	int	power;
	int	reslt;
	
	nb = 5;
	power = 3;
	reslt = ft_recursive_power(nb, power);
	printf("%i", reslt);
	return (0);
}
*/
