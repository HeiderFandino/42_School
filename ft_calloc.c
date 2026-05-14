/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandino <hfandino@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 12:55:25 by hfandino          #+#    #+#             */
/*   Updated: 2026/04/30 16:32:07 by hfandino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total;

	if (nmemb != 0 && size > ((size_t)-1 / nmemb))
		return (0);
	total = nmemb * size;
	ptr = malloc(total);
	if (!ptr)
		return (0);
	ft_memset(ptr, 0, total);
	return (ptr);
}
