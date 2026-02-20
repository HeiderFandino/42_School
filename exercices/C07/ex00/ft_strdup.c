/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandino <hfandino@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 16:16:00 by hfandino          #+#    #+#             */
/*   Updated: 2026/02/20 23:44:16 by hfandino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *str)
{
	char	*dest;
	int		i;
	int		len;

	len = 0;
	i = 0;
	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	*original;
	char	*copia;

	original = "Hola Mundo 42";
	copia = ft_strdup(original);
	if (copia == NULL)
		return (1);
	printf("Original: %s | %p\n", original, original);
	printf("Copia:    %s | %p\n", copia, copia);
	free(copia);
	return (0);
}
*/
