/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandino <hfandino@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 12:16:28 by hfandino          #+#    #+#             */
/*   Updated: 2026/01/30 14:49:07 by hfandino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*rest;

	rest = dest;
	while (*src != '\0')
	{
		*dest = *src;
		++src;
		++dest;
	}
	*dest = '\0';
	return (rest);
}
/*
int main(void)
{
	char	origen[] = "42";
	char	destino[10];
	char	*resultado;
	int	lent;

	lent = 0;
	resultado = ft_strcpy(destino, origen);

	while(resultado[lent] != '\0')
	{
		lent++;
	}
	
	write(1, resultado, lent);
	write(1, "\n", 1);
	return (0);
}
*/
