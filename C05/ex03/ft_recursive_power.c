/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skucukon <skucukon@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 20:28:25 by skucukon          #+#    #+#             */
/*   Updated: 2025/04/26 20:29:02 by skucukon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power >= 1)
	{
		result = nb * ft_recursive_power(nb, power - 1);
	}
	else if (power == 0)
		return (1);
	else
		return (0);
	return (result);
}
