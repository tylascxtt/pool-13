/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenayad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 17:14:13 by mbenayad          #+#    #+#             */
/*   Updated: 2024/08/04 17:14:21 by mbenayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	c;

	c = ac -1;
	while (c > 0)
	{
		i = 0;
		while (av[c][i] && ac)
		{
			write(1, &av[c][i], 1);
			i++;
		}
		write(1, "\n", 1);
		c--;
	}
	return (0);
}