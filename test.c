/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 16:03:13 by dabdygal          #+#    #+#             */
/*   Updated: 2023/06/21 17:47:02 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <strings.h>
#include <stdio.h>
#include "libft.h"

#define ARR_SIZE 10
#define TEST_CHAR_1 'a'
#define TEST_CHAR_2 'b'
#define TEST_VAL 0

int	main(void)
{
	char	char_arr[ARR_SIZE];
	int		i;

	// testing memset
	memset(char_arr, TEST_CHAR_1, sizeof(char) * ARR_SIZE);
	printf("        memset with %c: %.*s\n",TEST_CHAR_1, ARR_SIZE, char_arr);
	ft_memset(char_arr, TEST_CHAR_2, sizeof(char) * ARR_SIZE);
	printf("     ft_memset with %c: %.*s\n",TEST_CHAR_2, ARR_SIZE, char_arr);
	memset(char_arr, TEST_CHAR_1, sizeof(char) * TEST_VAL);
	printf("   memset with %c by %d: %.*s\n", TEST_CHAR_1, TEST_VAL, ARR_SIZE, char_arr);
	ft_memset(char_arr, TEST_CHAR_1, sizeof(char) * TEST_VAL);
	printf("ft_memset with %c by %d: %.*s\n\n", TEST_CHAR_1, TEST_VAL, ARR_SIZE, char_arr);
	
	// testing bzero
	bzero(char_arr, sizeof(char) * ARR_SIZE);
	printf("   bzero: ");
	i = 0;
	while (i < ARR_SIZE)
	{
		if (char_arr[i] == '\0')
		{
			printf("\\0");
		}
		else
		{
			printf("%c", char_arr[i]);
		}
		i++;
	}
	printf("\n");
	memset(char_arr, TEST_CHAR_1, sizeof(char) * ARR_SIZE);
	printf("filled again with %c: %.*s\n",TEST_CHAR_1, ARR_SIZE, char_arr);
	ft_bzero(char_arr, sizeof(char) * ARR_SIZE);
	printf("ft_bzero: ");
	i = 0;
	while (i < ARR_SIZE)
	{
		if (char_arr[i] == '\0')
		{
			printf("\\0");
		}
		else
		{
			printf("%c", char_arr[i]);
		}
		i++;
	}
	printf("\n\n");
}
