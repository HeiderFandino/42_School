/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandino <hfandino@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 19:43:52 by hfandino          #+#    #+#             */
/*   Updated: 2026/02/04 17:54:38 by hfandino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == 0)
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0' && str[i + j] == to_find[j])
		{
			j++;
		}
		if (to_find[j] == 0)
			return (&str[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
	char	str[] = "Hola";
	char	*to_find;
	char	*rest;

	to_find = "ol";
	printf("Texto: %s | Buscando: %s\n", str, to_find);
	rest = ft_strstr(str, to_find);
	printf("encontre esto %s", rest);
	return (0);
}
*/
