/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandino <hfandino@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 10:05:57 by hfandino          #+#    #+#             */
/*   Updated: 2026/02/02 10:36:57 by hfandino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
/*
#include	<stdio.h>
int	main(void)
{
	char	*str;
	int	reslt;

	str = "hola mundo";
	reslt = ft_strlen(str);
	printf("conteo %i", reslt);

	return(0);
}*/
