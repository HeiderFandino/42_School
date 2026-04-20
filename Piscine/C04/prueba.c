/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandino <hfandino@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 11:12:03 by hfandino          #+#    #+#             */
/*   Updated: 2026/02/12 12:58:46 by hfandino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	atoi(char *str)
{
	int	i;
	int	signo;
	long	reslt;

	reslt = 0;
	signo = 1;
	i = 0;
	while(str[i] >= 9 && str[i] <= 13 || str[i] == 32)
	{
		i++;
	}
	while(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			signo = signo * -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		reslt = (reslt * 10) + str[i] - '0';
		i++;
	}
	return(reslt * signo);
	
}

void	print_number(int	num)
{

}
int	main(void)
{
	char str[] =  " ---+--+1234ab567";
	int	reslt;

	reslt = atoi(str);
	printf("%i", reslt);
	return (0);

}
