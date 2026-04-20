/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandino <hfandino@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 13:38:29 by hfandino          #+#    #+#             */
/*   Updated: 2026/04/18 14:44:04 by hfandino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main (void)
{
	char	*s1;
	char	*s2;
	int	reslt;

	s1 = "ABC";
	s2 = "AB";
	reslt = ft_strcmp(s1, s2);
	printf("resultado: %i\n", reslt);
	return (0);
}
*/
