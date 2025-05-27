/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skucukon <skucukon@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:10:31 by skucukon          #+#    #+#             */
/*   Updated: 2025/04/24 09:32:49 by skucukon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if ((s1[i] != '\0' && s2[i] != '\0') && (s1[i] == s2[i]))
		{
			i++;
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
