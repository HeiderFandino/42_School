/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandino <hfandino@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 02:14:01 by hfandino          #+#    #+#             */
/*   Updated: 2026/02/18 17:53:46 by hfandnino        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_putstr(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}

	write(1, "\n", 1);
	return (i);
}
/*esto es una prueba de que estuve aqui y se sincorino todo*/

int	main(void)
{
	char	*str;
	int		reslt;
	str = "Hola mundo";
	reslt = ft_putstr(str);
	printf("%i \n", reslt);
	return (0);

}
