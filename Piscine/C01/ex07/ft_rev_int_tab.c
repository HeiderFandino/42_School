/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandino <hfandino@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 10:48:33 by hfandino          #+#    #+#             */
/*   Updated: 2026/02/01 11:40:46 by hfandino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	inicio;
	int	final;
	int	temp;

	inicio = 0;
	final = size - 1;
	while (inicio < final)
	{
		temp = tab[inicio];
		tab[inicio] = tab[final];
		tab[final] = temp;
		inicio++;
		final--;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	tab[] = {1,2,3,4,5,6};
	int	size;
	int	i;

	i = 0;
	size = 6;
	printf("Antes: 1 2 3 4 5 6\n");
	ft_rev_int_tab(tab, size);
	printf("Despues: ");
	while ( i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	return(0);
}
*/
