/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenayad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 00:28:39 by mbenayad          #+#    #+#             */
/*   Updated: 2024/08/06 00:58:25 by mbenayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	tm;

	i = 1;
	tm = nb;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	while (i < nb)
	{
		tm *= nb - i;
		i++;
	}
	return (tm);
}
