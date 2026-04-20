/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandino <hfandino@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 10:54:53 by hfandino          #+#    #+#             */
/*   Updated: 2026/02/06 14:31:06 by hfandino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}
/*
#include <stdio.h>
int main(void)
{
	char	*s1;
	char	*s2;
	int	rest;

	s1 = "hola";
	s2 = "holA";
	rest = ft_strcmp(s1, s2);

	printf("Comparando '%s' con '%s' -> Resultado: %d\n", s1, s2, rest);
	return(0);
}
*/
