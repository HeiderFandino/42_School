/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandino <hfandino@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 16:23:17 by hfandino          #+#    #+#             */
/*   Updated: 2026/05/05 16:52:52 by hfandino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_num_len(long n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static void	ft_fill(char *res, long n, size_t len)
{
	if (n == 0)
		res[0] = '0';
	if (n < 0)
	{
		res[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		res[--len] = (n % 10) + '0';
		n = n / 10;
	}
}

char	*ft_itoa(int n)
{
	char	*res;
	long	num;
	size_t	len;

	num = n;
	len = ft_num_len(num);
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	res[len] = '\0';
	ft_fill(res, num, len);
	return (res);
}
