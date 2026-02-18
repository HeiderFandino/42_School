/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandino <hfandino@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 15:30:09 by hfandino          #+#    #+#             */
/*   Updated: 2026/02/04 17:09:17 by hfandino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_lent;
	unsigned int	i;

	i = 0;
	src_lent = 0;
	while (src[src_lent] != '\0')
		src_lent++;
	if (size == 0)
		return (src_lent);
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_lent);
}
/*
#include <stdio.h>
int	main(void)
{
	char	dest[13];
	char	src[] = "Hola mundoo";
	unsigned int	size;
	unsigned int	reslt;

	size = 14;
	reslt = ft_strlcpy(dest, src, size);
	printf("%i", reslt);
	return (0);
}
*/
