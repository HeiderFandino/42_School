/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandino <hfandino@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 20:29:27 by hfandino          #+#    #+#             */
/*   Updated: 2026/01/25 21:54:52 by hfandino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	cont;

	cont = 0;
	while (*str != '\0')
	{
		++str;
		++cont;
	}
	return (cont);
}
/*
int main(void)
{
	int	rest;
	char	c;

	rest = ft_strlen("hola");
	c = rest + '0';

	write(1, "longitud", 10);
	write(1, &c, 1);
	write(1, "\n", 1);
	return(0);
}
*/
