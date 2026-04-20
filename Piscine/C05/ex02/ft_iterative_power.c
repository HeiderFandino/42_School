/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandino <hfandino@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 18:41:34 by hfandino          #+#    #+#             */
/*   Updated: 2026/02/07 19:02:08 by hfandino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	reslt;

	reslt = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		reslt = reslt * nb;
		power--;
	}
	return (reslt);
}
/*
#include <stdio.h>
int	main(void)
{
	int	nb;
	int power;
	int	reslt;

	nb = 5;
	power = 3;
	reslt = ft_iterative_power(nb, power);
	printf("%i", reslt);
	return (0);
}
*/
