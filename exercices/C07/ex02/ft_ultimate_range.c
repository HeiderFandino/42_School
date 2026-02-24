/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandnino <hfandino@student.42barcelona.c  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 16:12:31 by hfandnino         #+#    #+#             */
/*   Updated: 2026/02/24 17:13:20 by hfandnino        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *) malloc(sizeof (int) * size);
	if (*range == NULL)
		return (-1);
	while (i < size)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (size);
}
/*
int	main(void)
{
	int	*reslt;
	int	size;
	int	i;

	i = 0;
	size = ft_ultimate_range(&reslt, 5, 10);
	if(size == -1)
		return (1);
	printf("Size: %d\n", size);
	while(i < size)
	{
		printf("%d", reslt[i]);
		i++;
	}
	printf("\n");
	free(reslt);
	return (0);
}
*/
