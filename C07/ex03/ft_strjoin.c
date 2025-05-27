/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skucukon <skucukon@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 23:27:20 by skucukon          #+#    #+#             */
/*   Updated: 2025/04/30 02:15:35 by skucukon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	find_total_size(int size, char **strs, char *sep)
{
	int	i;
	int	total_size;
	int	sep_len;

	i = 0;
	total_size = 0;
	sep_len = ft_strlen(sep);
	while (i < size)
	{
		if (strs[i])
			total_size += ft_strlen(strs[i]);
		i++;
	}
	if (size > 1)
		total_size += sep_len * (size - 1);
	return (total_size);
}

char	*combine_it(int size, char **strs, char *sep, char *dest)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (j < size)
	{
		if (strs[j])
		{
			k = 0;
			while (strs[j][k])
				dest[i++] = strs[j][k++];
		}
		if (j < size - 1 && sep)
		{
			k = 0;
			while (sep[k])
				dest[i++] = sep[k++];
		}
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		dest_size;

	if (size == 0)
	{
		dest = malloc(1);
		if (!dest)
			return (NULL);
		dest[0] = '\0';
		return (dest);
	}
	if (!strs)
		return (NULL);
	dest_size = find_total_size(size, strs, sep);
	dest = malloc(dest_size + 1);
	if (dest == NULL)
		return (NULL);
	return (combine_it(size, strs, sep, dest));
}
