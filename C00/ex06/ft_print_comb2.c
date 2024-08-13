/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenayad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:01:06 by mbenayad          #+#    #+#             */
/*   Updated: 2024/07/24 13:01:14 by mbenayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_numbers(int n1, int n2)
{
	ft_putchar((n1 / 10) + '0');
	ft_putchar((n1 % 10) + '0');
	ft_putchar(' ');
	ft_putchar((n2 / 10) + '0');
	ft_putchar((n2 % 10) + '0');
	if (n1 < 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	a ;
	int	b ;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			print_numbers(a, b);
			b++;
		}
		a++;
	}
}
