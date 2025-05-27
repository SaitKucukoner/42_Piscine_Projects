/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skucukon <skucukon@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 22:54:43 by skucukon          #+#    #+#             */
/*   Updated: 2025/04/30 17:56:26 by skucukon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*temp;
	int	size;
	int	i;

	i = 0;
	size = max - min;
	if (min >= max)
		return (0);
	temp = malloc(size * 4);
	if (temp == 0)
		return (0);
	while (min < max)
	{
		temp[i] = min;
		min++;
		i++;
	}
	return (temp);
}	
