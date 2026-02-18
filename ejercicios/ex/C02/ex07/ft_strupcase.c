/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandino <hfandino@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 17:09:03 by hfandino          #+#    #+#             */
/*   Updated: 2026/02/04 13:34:16 by hfandino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = (str[i] - 32);
		i++;
	}
	return (str);
}
/*
int main(void)
{
	char	str[] = "HolaMuNdo";
	char	*rest;
	int	i;
	
	i = 0;
	rest = ft_strupcase(str);
	
	while(rest[i] != '\0')
	{
	write(1, &rest[i], 1);
	i++;
	}
	
	write(1, "\n", 1);
	return (0);
}
*/
