/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skucukon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 21:36:53 by skucukon          #+#    #+#             */
/*   Updated: 2025/04/14 21:54:24 by skucukon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char letter1, char letter2)
{
	write(1, &letter1, 1);
	write(1, &letter2, 1);
}

void	ft_putchar2(char letter)
{
	write(1, &letter, 1);
}

void	ft_print_comb2(void)
{
	int	number1;
	int	number2;

	number1 = 0;
	while (number1 <= 98)
	{
		number2 = number1 + 1;
		while (number2 <= 99)
		{
			ft_putchar((number1 / 10) + '0', (number1 % 10) + '0');
			ft_putchar2(' ');
			ft_putchar((number2 / 10) + '0', (number2 % 10) + '0');
			if (number1 != 98)
			{
				ft_putchar2(',');
				ft_putchar2(' ');
			}
			number2++;
		}
		number1++;
	}
}
