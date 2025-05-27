/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skucukon <skucukon@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 20:35:29 by skucukon          #+#    #+#             */
/*   Updated: 2025/04/26 20:35:31 by skucukon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	c;

	c = 1;
	i = 0;
	if (ac > 1)
	{
		while (c < ac)
		{
			while (av[c][i] != '\0')
			{
				write(1, &av[c][i], 1);
				i++;
			}
			write(1, "\n", 1);
			i = 0;
			c++;
		}
	}	
	return (0);
}	
