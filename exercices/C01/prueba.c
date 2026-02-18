/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandino <hfandino@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 14:46:01 by hfandino          #+#    #+#             */
/*   Updated: 2026/02/11 19:33:40 by hfandino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while(dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while(src[j] != '\0')
	{
		dest[ i + j] = src[j];
		j++;
	}
	dest[ i + j ] = '\0';
	return (dest);
	

}
int	main(void)
{
	char	dest [10]= "hola";
	char	*src;
	char	*reslt;

	src = "Mundo";
	reslt = ft_strcat(dest, src);	
	printf("%s", reslt);
	return (0);

}
