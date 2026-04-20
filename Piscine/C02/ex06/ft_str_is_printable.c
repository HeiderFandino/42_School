/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandino <hfandino@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 16:29:59 by hfandino          #+#    #+#             */
/*   Updated: 2026/01/27 17:08:17 by hfandino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char *str;
	int	rest;
	char	c;

	str = "hola";
	rest = ft_str_is_printable(str);
	c = rest + '0';

	write(1, "Resultado: ", 11);
	write(1, &c, 1);
	write(1, "\n", 1);
	return(0);
}
*/
