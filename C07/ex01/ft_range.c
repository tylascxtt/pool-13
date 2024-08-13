/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenayad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 23:31:50 by mbenayad          #+#    #+#             */
/*   Updated: 2024/08/10 23:31:52 by mbenayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*r;

	i = 0;
	r = malloc((max - min) * sizeof(int));
	if (r == NULL)
		return (NULL);
	if (min >= max)
		return (NULL);
	while (i < max - min)
	{
		r[i] = min + i;
		i++;
	}
	return (r);
}

int main()
{
	int i = 0;
	int s = 10;
	int c = 20;
	int *r = ft_range(s , c);
	while(i < c - s)
	{
		printf("%d " , r[i]);
		i++;
	}
}