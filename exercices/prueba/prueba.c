/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandino <hfandino@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 01:05:03 by hfandino          #+#    #+#             */
/*   Updated: 2026/02/20 01:35:37 by hfandino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_rev_prin(void)
{
	char	alpha;
	char	odd;

	alpha = 'a';
	while (alpha <= 'z')
	{
		if (alpha % 2 == 0)
		{	
			odd = alpha - 32;
			write(1, &odd, 1);
		}	
		else
			write(1, &alpha, 1);
		alpha++;
	}
	write(1, "\n", 1);
}

int main(void)
{
	ft_rev_prin();
	return (0);
}
