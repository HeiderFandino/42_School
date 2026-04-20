/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandino <hfandino@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/19 22:24:12 by hfandino          #+#    #+#             */
/*   Updated: 2026/04/19 22:56:15 by hfandino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*p;
	const unsigned char	*dst;
	size_t				i;

	p = (unsigned char *) dest;
	dst = (const unsigned char *) src;
	i = 0;
	while (i < n)
	{
		p[i] = dst[i];
		i++;
	}
	return (dest);
}
