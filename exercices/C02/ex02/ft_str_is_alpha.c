/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandino <hfandino@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 12:45:01 by hfandino          #+#    #+#             */
/*   Updated: 2026/01/27 20:02:16 by hfandino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z'))
		{
			return (0);
		}
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

	str = "hol$a";
	reslt = ft_str_is_alpha(str);
	c = reslt + '0';
	write(1, &c, 1);
	return(0);
}
*/
