/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skucukon <skucukon@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 23:06:26 by skucukon          #+#    #+#             */
/*   Updated: 2025/04/21 23:52:11 by skucukon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*do_lower_case(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('A' <= str[i] && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	douppercase;

	i = 0;
	douppercase = 1;
	do_lower_case(str);
	while (str[i] != '\0')
	{
		if ('a' <= str[i] && str[i] <= 'z')
		{
			if (douppercase == 1)
			{
				str[i] -= 32;
				douppercase = 0;
			}
		}
		else if ('0' <= str[i] && str[i] <= '9')
			douppercase = 0;
		else
			douppercase = 1;
		i++;
	}
	return (str);
}
