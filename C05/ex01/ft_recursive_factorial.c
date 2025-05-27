/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skucukon <skucukon@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 20:26:57 by skucukon          #+#    #+#             */
/*   Updated: 2025/04/26 20:27:00 by skucukon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb >= 1)
	{
		result = (nb * ft_recursive_factorial(nb - 1));
	}
	else if (nb == 0)
		return (1);
	else
		return (0);
	return (result);
}
