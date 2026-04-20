/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandino <hfandino@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 14:02:11 by hfandino          #+#    #+#             */
/*   Updated: 2026/02/12 15:55:46 by hfandino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
int	ft_fibonacci(int index)
{
	if(index < 0)
		return (-1);
	if(index == 0)
		return (0);
	if(index == 1 )
		return (1);
	return (ft_fibonacci(index -1 ) + (ft_fibonacci(index - 2)));

}
int	main(void)
{
	int index;
	int	reslt;

	index = 5;
	reslt = ft_fibonacci(index);
	printf("%i", reslt); 
	return (0);

}
