/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandino <hfandino@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 13:13:46 by hfandino          #+#    #+#             */
/*   Updated: 2026/01/28 16:47:24 by hfandino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] != '\0' && s2[i] != '\0') && (s1[i] == s2[i] && i < n -1))
	{
		i++;
	}
	return ((unsigned int)s1[i] - (unsigned int)s2[i]);
}
/*
#include <stdio.h>

int main(void)
{
	char *s1;
	char *s2;
	unsigned int n;
	int	rest;
	
	n = 7;
	s1 = "Hola Mundo";
	s2 = "Hola Mg";
	rest = ft_strncmp(s1, s2, n);
	printf("La diferencia de %s entre %s es %i ", s1, s2, rest);
	return(0);
}
*/
