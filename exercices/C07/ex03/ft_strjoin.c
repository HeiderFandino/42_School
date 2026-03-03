/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandnino <hfandino@student.42barcelona.c  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 18:02:13 by hfandnino         #+#    #+#             */
/*   Updated: 2026/02/24 18:44:09 by hfandnino        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);

}

int	ft_get_full_len(int size, char **str, char *sep)
{
	int	total;
	int i;
	int s_len;

	total = 0;
	i = 0;
	s_len = ft_strlen(sep);
	while (i < size)
	{
		total = total + ft_strlen(str[i]);
		if (i < size - 1)
		{
			total = total + s_len;
		}
		i++;
	}
	return (total + 1);
}

char	*ft_strjoin(int size, char **str, char *sep)
{
	char	*res;
	char	*ptr;
	int	i;
	int	j;

	if (size == 0)
	{
		res = malloc(1);
		if (res)
			res[0] = '\0';
		return (res);
	}
	res = malloc (sizeof(char) * ft_get_full_len(size, str, sep));
	if (!res)
		return (NULL)
		ptr = res;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			*ptr++ = strs[i][j++];
		j = 0;
		if (i < size - 1)
			while (sep[j])
				*ptr++ = sep[j++];
		i++;
	}
	*ptr = '\0';
	return (res);
}
