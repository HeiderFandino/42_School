/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandino <hfandino@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 15:52:02 by hfandino          #+#    #+#             */
/*   Updated: 2026/01/29 13:44:40 by hfandino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int main(void)
{
	char	dest[] = "hola";
	char	*src;
	char	*concat;

	src = "mundo";
	printf("Concatenar '%s' con '%s' es:\n", dest, src);
	concat = ft_strcat(dest, src);
	printf("'%s'", concat);
	return(0);
}
*/
