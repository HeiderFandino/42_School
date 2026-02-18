/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandino <hfandino@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 10:46:47 by hfandino          #+#    #+#             */
/*   Updated: 2026/02/08 10:52:50 by hfandino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	idx_char;
	int	idx_arg;

	idx_arg = argc - 1;
	while (idx_arg > 0)
	{
		idx_char = 0;
		while (argv[idx_arg][idx_char] != '\0')
		{
			write(1, &argv[idx_arg][idx_char], 1);
			idx_char++;
		}
		write(1, "\n", 1);
		idx_arg--;
	}
	return (0);
}
