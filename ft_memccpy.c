/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 12:52:52 by dabdygal          #+#    #+#             */
/*   Updated: 2023/06/22 13:11:43 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*dest_str;
	char	*src_str;
	size_t		i;

	dest_str = (char *) dest;
	src_str = (char *) src;
	i = 0;
	while (i < n)
	{
		dest_str[i] = src_str[i];
		if (dest_str[i] == c)
		{
			return (dest + i + 1);
		}
		i++;
	}
	return (NULL);
}
