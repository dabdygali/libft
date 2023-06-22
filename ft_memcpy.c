/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 10:13:59 by dabdygal          #+#    #+#             */
/*   Updated: 2023/06/22 11:22:31 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dest_str;
	char	*src_str;

	dest_str = (char *) dest;
	src_str = (char *) src;
	while (n)
	{
		n--;
		dest_str[n] = src_str[n];
	}
	return (dest);
}
