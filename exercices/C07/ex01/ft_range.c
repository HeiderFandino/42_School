/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandino <hfandino@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 12:50:00 by hfandino          #+#    #+#             */
/*   Updated: 2026/02/23 13:40:59 by hfandino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max )
{
	int	*num_range;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	num_range = (int *)malloc(sizeof(int) * (max - min));
	if (num_range == NULL)
		return (NULL);
	while (min < max)
	{
		num_range[i] = min;
		i++;
		min++;
	}
	return (num_range);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	*reslt;
	int	i;
	int	size;

	i = 0;
	min = 5;
	max = 10;
	size = (max - min);
	reslt = ft_range(min, max);
	if(reslt == NULL)
		return (1);
	while(i < size)
	{
		printf ("%d - %p \n", reslt[i], &reslt[i]);
		i++;
	}
	free(reslt);
	return (0);

}
*/	
