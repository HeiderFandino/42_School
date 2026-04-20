/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandino <hfandino@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 17:31:47 by hfandino          #+#    #+#             */
/*   Updated: 2026/01/29 10:47:45 by hfandino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while ((src[j] != '\0') && (j < nb))
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
	char	dest[15] = "hola";
	char	src[] = "mundo";
	unsigned int nb = 10;

	printf("Estoy concatenando '%s' con '%s' y el resultado es\n", dest, src);
	ft_strncat(dest, src, nb);
	printf("'%s'", dest);
	return(0);
	
}
*/
