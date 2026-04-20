/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandino <hfandino@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 16:13:01 by hfandino          #+#    #+#             */
/*   Updated: 2026/01/26 17:47:36 by hfandino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*rest;
	unsigned int	i;

	i = 0;
	rest = dest;
	while (*src != '\0' && i < n)
	{
		*dest = *src;
		i++;
		src++;
		dest++;
	}
	while (i < n)
	{
		*dest = '\0';
		i++;
		dest++;
	}
	return (rest);
}
/*
int main(void)
{
	char	destino[10];
	char	origen[] = "42";
	unsigned n;
	int	i;

	n = 9;
	i = 0;
	ft_strncpy(destino, origen, n);
	while(i < n)
	{
		if (destino[i] == '\0')
			write(1, ".", 1);
		else
			write(1, &destino[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
	
}
*/
