/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandino <hfandino@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 16:26:41 by hfandino          #+#    #+#             */
/*   Updated: 2026/04/17 16:47:01 by hfandino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b ;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int div;
	int mod;

	a = 10;
	b = 5;
	ft_div_mod(a, b, &div, &mod);
	printf("div %i, mod %i\n", div, mod);
	return (0);
}
*/
