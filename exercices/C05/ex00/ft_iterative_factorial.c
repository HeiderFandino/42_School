/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandino <hfandino@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 17:10:17 by hfandino          #+#    #+#             */
/*   Updated: 2026/02/07 17:58:19 by hfandino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	reslt;

	reslt = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		reslt = reslt * nb;
		nb--;
	}
	return (reslt);
}
/*
int	main(void)
{
	int	nb;
	int	reslt;

	nb = 5;
	reslt = ft_iterative_factorial(nb);
	printf("%i", reslt);
	return (0);
}
*/
