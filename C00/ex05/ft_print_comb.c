/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skucukon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 21:07:17 by skucukon          #+#    #+#             */
/*   Updated: 2025/04/14 21:15:38 by skucukon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char number1, char number2, char number3)
{
	write(1, &number1, 1);
	write(1, &number2, 1);
	write(1, &number3, 1);
}

void	ft_print_comb(void)
{
	int	number1;
	int	number2;
	int	number3;

	number1 = 0;
	while (number1 <= 7)
	{
		number2 = number1 + 1;
		while (number2 <= 8)
		{
			number3 = number2 + 1;
			while (number3 <= 9)
			{
				ft_putchar(number1 + '0', number2 + '0', number3 + '0');
				if (number1 != 7)
				{
					write(1, ", ", 2);
				}
				number3++;
			}
			number2++;
		}
		number1++;
	}
}
