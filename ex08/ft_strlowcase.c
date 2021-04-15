/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgoncalv <rgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 01:32:10 by rgoncalv          #+#    #+#             */
/*   Updated: 2021/04/15 01:35:39 by rgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char *str2;

	str2 = str;
	while (*str != '\0')
	{
		if (*str >= 65 && *str <= 90)
		{
			*str = *str + 32;
		}
		str++;
	}
	str = str2;
	return (str);
}