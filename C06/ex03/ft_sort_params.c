/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skucukon <skucukon@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 21:30:27 by skucukon          #+#    #+#             */
/*   Updated: 2025/04/26 22:42:03 by skucukon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0') && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *s1)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		write(1, &s1[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	int		i;
	char	*temp;

	i = 1;
	if (ac > 1)
	{
		while (i < ac - 1)
		{
			if (ft_strcmp(av[i], av[i + 1]) > 0)
			{
				temp = av[i];
				av[i] = av[i + 1];
				av[i + 1] = temp;
				i = 0;
			}
			else
				i++;
		}
	}
	i = 1;
	while (av[i])
	{
		ft_putstr(av[i]);
		i++;
	}
}
