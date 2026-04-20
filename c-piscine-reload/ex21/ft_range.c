/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandino <hfandino@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 19:19:51 by hfandino          #+#    #+#             */
/*   Updated: 2026/04/18 19:35:08 by hfandino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range_num;

	i = 0;
	if (min >= max)
		return (NULL);
	range_num = (int *) malloc(sizeof (int) * (max - min));
	if (range_num == NULL)
		return (NULL);
	while (min < max)
	{
		range_num[i] = min;
		i++;
		min++;
	}
	return (range_num);
}
/*
int main(void)
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
	if (reslt == NULL)
		return (1);
	while (i < size)
	{
		printf ("%d - %p \n", reslt[i], &reslt[i]);
		i++;
	}
	free(reslt);
	return (0);
}
*/
