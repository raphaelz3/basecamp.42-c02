/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgoncalv <rgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:47:16 by rgoncalv          #+#    #+#             */
/*   Updated: 2021/04/15 19:08:53 by rgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 65 && *str <= 90)
			str++;
		if (*str >= 97 && *str <= 122)
			str++;
		else
			return (0);
	}
	return (1);
}
