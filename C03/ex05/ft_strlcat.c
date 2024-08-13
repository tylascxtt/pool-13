/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenayad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 18:39:48 by mbenayad          #+#    #+#             */
/*   Updated: 2024/08/03 14:35:11 by mbenayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dl;
	unsigned int	sl;
	unsigned int	i;

	sl = ft_strlen(src);
	dl = ft_strlen(dest);
	i = 0;
	if (size <= dl)
		return (size + sl);
	while (src[i] && size > dl + i + 1)
	{
		dest[dl + i] = src[i];
		i++;
	}
	dest[dl + i] = '\0';
	return (dl + sl);
}
