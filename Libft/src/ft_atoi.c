/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandino <hfandino@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 21:30:40 by hfandino          #+#    #+#             */
/*   Updated: 2026/04/20 21:33:49 by hfandino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	reslt;
	int	signo;

	i = 0;
	reslt = 0;
	signo = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signo = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		reslt = (reslt * 10) + (str[i] - '0');
		i++;
	}
	return (reslt * signo);
}
