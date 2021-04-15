/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgoncalv <rgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 14:10:15 by rgoncalv          #+#    #+#             */
/*   Updated: 2021/04/15 19:36:04 by rgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	count = 0;
	while (count < n && *src != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	while (count < n)
		dest[count] = '\0';
	return (dest);
}
