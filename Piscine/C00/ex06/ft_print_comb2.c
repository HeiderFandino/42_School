/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandino <hfandino@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 13:07:47 by hfandino          #+#    #+#             */
/*   Updated: 2026/01/31 16:25:24 by hfandino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb2(void)
{
	int		a;
	int		b;
	char	c;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			c = (a / 10) + '0';
			write(1, &c, 1);
			c = (a % 10) + '0';
			write(1, &c, 1);
			write(1, " ", 1);
			c = (b / 10) + '0';
			write(1, &c, 1);
			c = (b % 10) + '0';
			write(1, &c, 1);
			if (!(a == 98 && b == 99))
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return(0);

}*/
