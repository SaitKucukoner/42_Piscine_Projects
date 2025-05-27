/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skucukon <skucukon@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 10:45:24 by skucukon          #+#    #+#             */
/*   Updated: 2025/04/26 15:47:46 by skucukon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	return_lengh(char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	srclengh;	

	srclengh = return_lengh(src);
	i = 0;
	if (size > 0)
	{	
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}		
	return (srclengh);
}
