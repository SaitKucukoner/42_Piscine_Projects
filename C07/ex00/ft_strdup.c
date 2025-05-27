/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skucukon <skucukon@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 11:57:10 by skucukon          #+#    #+#             */
/*   Updated: 2025/04/29 22:56:25 by skucukon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	temp = malloc(i + 1);
	if (temp == NULL)
		return (0);
	while (src[j])
	{
		temp[j] = src[j];
		j++;
	}
	temp[j] = '\0';
	return (temp);
}
