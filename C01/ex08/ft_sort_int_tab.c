/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skucukon <skucukon@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 17:57:29 by skucukon          #+#    #+#             */
/*   Updated: 2025/04/20 20:42:02 by skucukon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	x;
	int	temp;

	x = 0;
	while (x < size)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[size - 2 - i] > tab[size - 1 - i])
			{
				temp = tab[size - 2 - i];
				tab[size - 2 - i] = tab[size - 1 - i];
				tab[size - 1 - i] = temp;
			}
			i++;
		}
		x++;
	}
}
