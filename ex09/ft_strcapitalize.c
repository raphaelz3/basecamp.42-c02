/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgoncalv <rgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 01:27:50 by rgoncalv          #+#    #+#             */
/*   Updated: 2021/04/15 16:12:00 by rgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
		{
			*str = *str - 32;
		}
		return (str);
	}
	return (str);
}

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

char	*ft_strcapitalize(char *str)
{
	ft_strlowcase(str);
	while (*str != '\0')
	{
		if ((*str >= 97 && *str <= 122) || (*str >= 48 && *str <= 57))
		{
			ft_strupcase(str);
			str++;
			while ((*str >= 97 && *str <= 122) || (*str >= 48 && *str <= 57))
				str++;
		}
		if (*str == '\0')
			return (str);
		if ((*str <= 47 || *str >= 58) && (*str <= 96 || *str >= 123))
			str++;
	}
	return (str);
}
