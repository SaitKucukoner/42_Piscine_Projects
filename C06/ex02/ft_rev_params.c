/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skucukon <skucukon@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 20:36:04 by skucukon          #+#    #+#             */
/*   Updated: 2025/04/26 21:34:21 by skucukon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	c;

	i = 0;
	c = 1;
	if (ac > 1)
	{
		while (ac - c > 0)
		{	
			i = 0;
			while (av[ac - c][i] != '\0')
			{
				write(1, &av[ac - c][i], 1);
				i++;
			}
			write(1, "\n", 1);
			c++;
		}
	}
	return (0);
}
