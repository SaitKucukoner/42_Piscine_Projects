/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skucukon <skucukon@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 20:26:15 by skucukon          #+#    #+#             */
/*   Updated: 2025/04/26 20:26:17 by skucukon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	if (nb >= 0)
	{
		while (i < nb - 1)
		{
			result = result * (nb - i);
			i++;
		}
	}
	else
		result = 0;
	return (result);
}		
