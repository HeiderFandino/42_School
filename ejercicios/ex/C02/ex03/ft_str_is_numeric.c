/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandino <hfandino@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 14:35:23 by hfandino          #+#    #+#             */
/*   Updated: 2026/01/27 15:50:37 by hfandino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
/*
int main(void)
{
	char	*str;
	int	rest;

	str = "1";
	rest = ft_str_is_numeric(str);
	rest = rest + '0';

	write(1, "resultado: ", 12);
	write(1, &rest, 1);
	write(1, "\n", 1);
	
	return(0);
}
*/
