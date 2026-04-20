/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandino <hfandino@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 15:08:24 by hfandino          #+#    #+#             */
/*   Updated: 2026/01/27 16:04:45 by hfandino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}
/*
int main(void)
{
	char	*str;
	int	reslt;
	char	c;

	str = "hola";
	reslt = ft_str_is_lowercase(str);
	c = reslt + '0';

	write(1, &c, 1);
	write(1, "\n", 2);

	return(0);
}
*/
