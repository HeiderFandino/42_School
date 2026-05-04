/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandino <hfandino@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/19 22:51:08 by hfandino          #+#    #+#             */
/*   Updated: 2026/04/30 16:42:20 by hfandino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*p;
	const unsigned char	*dst;
	size_t				i;

	p = (unsigned char *)dest;
	dst = (const unsigned char *)src;
	if (p > dst)
	{
		i = n;
		while (i > 0)
		{
			i--;
			p[i] = dst[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			p[i] = dst[i];
			i++;
		}
	}
	return (dest);
}
