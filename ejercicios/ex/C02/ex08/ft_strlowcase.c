/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandino <hfandino@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 18:22:37 by hfandino          #+#    #+#             */
/*   Updated: 2026/01/27 22:00:15 by hfandino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
/*
int main(void)
{
	char str[] = "HoLaMuNDo";
	int	i;
	char	*rest;

	i = 0;
	rest = ft_strlowcase(str);
	while(rest[i] != '\0')
	{
		write(1,&rest[i], 1);
		i++;
	}
	return(0);
}
*/
