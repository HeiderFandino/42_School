/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandino <hfandino@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 16:06:00 by hfandino          #+#    #+#             */
/*   Updated: 2026/01/27 16:29:21 by hfandino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*
int main(void)
{
	char	*str;
	int	rest;
	char	c;

	str = "HOLA";
	rest = ft_str_is_uppercase(str);
	c = rest + '0';

	write(1,"Resultado: ", 11);
	write(1, &c, 1);
	write(1, "\n", 1);
	
	return(0);
}
*/
