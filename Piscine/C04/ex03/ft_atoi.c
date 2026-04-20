arbitrario de espacios (tal y como lo define isspace(3))/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandino <hfandino@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 12:38:21 by hfandino          #+#    #+#             */
/*   Updated: 2026/02/06 13:58:52 by hfandino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	reslt;
	int	signo;

	i = 0;
	reslt = 0;
	signo = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signo = signo * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		reslt = (reslt * 10) + (str[i] - '0');
		i++;
	}
	return (reslt * signo);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*str;
	int	reslt;

	str = " ---+--+1234ab567";
	printf("Antes de aplicar el atoi %s ", str);
	reslt = ft_atoi(str);
	printf("luego de aplicar el atoi %i", reslt);
	return(0);
}
*/
