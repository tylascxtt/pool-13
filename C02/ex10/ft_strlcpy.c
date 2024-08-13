/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenayad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 23:19:24 by mbenayad          #+#    #+#             */
/*   Updated: 2024/07/30 17:42:57 by mbenayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i ;

	i = 0 ;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
    unsigned int sizesrc;
    
    sizesrc = ft_strlen(src);
	i = 0 ;
	if (size > 0)
	{
		while ((i < size -1) && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
        dest[i] = '\0';
	}
	return (sizesrc);
}
