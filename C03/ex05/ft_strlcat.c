/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skucukon <skucukon@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 09:31:41 by skucukon          #+#    #+#             */
/*   Updated: 2025/04/24 10:09:52 by skucukon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_lengh;
	unsigned int	src_lengh;

	i = 0;
	dest_lengh = ft_strlen(dest);
	src_lengh = ft_strlen(src);
	if (size <= dest_lengh)
		return (src_lengh + size);
	while (src[i] != '\0' && dest_lengh + i < size - 1)
	{
		dest[dest_lengh + i] = src[i];
		i++;
	}
	dest[dest_lengh + i] = '\0';
	return (dest_lengh + src_lengh);
}
