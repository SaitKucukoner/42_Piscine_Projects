/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skucukon <skucukon@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 20:27:26 by skucukon          #+#    #+#             */
/*   Updated: 2025/04/26 20:27:27 by skucukon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (power > 0)
	{
		while (i <= power)
		{
			result = result * nb;
			i++;
		}
	}
	else if (power == 0)
		result = 1;
	else
		result = 0;
	return (result);
}	
