/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfandino <hfandino@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 16:24:58 by hfandino          #+#    #+#             */
/*   Updated: 2026/02/03 12:33:30 by hfandino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <unistd.h>

int	ft_validaciones(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	n;
	int		size;

	size = ft_validaciones(base);
	if (size < 2)
		return ;
	n = nbr;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= size)
		ft_putnbr_base(n / size, base);
	write(1, &base[n % size], 1);
}
/*
int	main(void)
{
	// 1. Caso estándar: Decimal
	write(1, "Decimal (42): ", 14);
	ft_putnbr_base(42, "0123456789");
	write(1, "\n", 1);

	// 2. El número más pequeño (Int min)
	write(1, "Int Min: ", 9);
	ft_putnbr_base(-2147483648, "0123456789");
	write(1, "\n", 1);

	// 3. Binario
	write(1, "Binario (13): ", 14);
	ft_putnbr_base(13, "01");
	write(1, "\n", 1);

	// 4. Hexadecimal
	write(1, "Hexa (255): ", 12);
	ft_putnbr_base(255, "0123456789ABCDEF");
	write(1, "\n", 1);

	// 5. Base personalizada (poniguay)
	write(1, "Poniguay (8): ", 14);
	ft_putnbr_base(8, "poniguay");
	write(1, "\n", 1);

	// 6. CASOS DE ERROR (No deben imprimir nada después del texto)
	write(1, "Error (repetidos): ", 19);
	ft_putnbr_base(42, "1123"); 
	write(1, "\nError (signos): ", 17);
	ft_putnbr_base(42, "012+3");
	write(1, "\nError (corta): ", 16);
	ft_putnbr_base(42, "0");
	write(1, "\n", 1);

	return (0);
}
*/
