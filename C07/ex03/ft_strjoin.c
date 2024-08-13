/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenayad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 23:32:42 by mbenayad          #+#    #+#             */
/*   Updated: 2024/08/10 23:32:44 by mbenayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_count(char **strs, char *sep, int size)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < size)
		count += ft_strlen(strs[i++]) + ft_strlen(sep);
	return (count);
}

void	cat(int size, char **strs, char *sep, char *join)
{
	int	j;
	int	n;
	int	i;

	j = 0;
	n = 0;
	i = -1;
	while (++i < size)
	{
		j = 0;
		while (strs[i][j])
			join[n++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size - 1)
			join[n++] = sep[j++];
	}
	join[n] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		count;
	char	*join;

	if (size == 0)
	{
		join = malloc(1);
		join[0] = '\0';
		return (join);
	}
	count = ft_count(strs, sep, size);
	join = malloc(count * sizeof(char));
	if (join == NULL)
		return (NULL);
	cat(size, strs, sep, join);
	return (join);
}
