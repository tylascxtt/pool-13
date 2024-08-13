/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenayad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 23:32:16 by mbenayad          #+#    #+#             */
/*   Updated: 2024/08/10 23:32:18 by mbenayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	l;
	int	*r;

	l = max - min;
	r = malloc((max - min) * sizeof(int));
	i = 0;
	if (min >= max)
		return (0);
	if (r == NULL)
		return (-1);
	while (i < l)
	{
		r[i] = min + i;
		i++;
	}
	*range = r;
	return (l);
}
