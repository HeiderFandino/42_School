/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandino <hfandino@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 18:57:40 by hfandino          #+#    #+#             */
/*   Updated: 2026/04/18 19:18:48 by hfandino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		lent;

	i = 0;
	lent = 0;
	if (src == NULL)
		return (NULL);
	while (src[lent] != '\0')
		lent++;
	dest = (char *) malloc(sizeof(char) * (lent + 1));
	if (dest == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
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
