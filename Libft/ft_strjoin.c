/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandino <hfandino@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 16:59:47 by hfandino          #+#    #+#             */
/*   Updated: 2026/05/04 18:41:51 by hfandino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	res = malloc((s1_len + s2_len) + 1);
	if (!res)
		return (NULL);
	ft_strlcpy(res, s1, s1_len + s2_len + 1);
	ft_strlcat(res, s2, s1_len + s2_len + 1);
	return (res);
}
