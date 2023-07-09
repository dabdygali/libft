/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 16:03:13 by dabdygal          #+#    #+#             */
/*   Updated: 2023/07/08 17:19:05 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <strings.h>
#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

#define ARR_SIZE 10
#define TEST_CHAR_1 'a'
#define TEST_CHAR_2 'b'
#define TEST_CHAR_3 'c'
#define TEST_VAL_ZERO 0
#define TEST_VAL_1 5  // 0 <= x <= ARR_SIZE
#define getName(var)  #var

int	main(void)
{
	char	char_arr_1[ARR_SIZE];
	char	char_arr_2[ARR_SIZE];
	char	*ptr_1;
	int		i;

	// testing memset
	printf("Testing memset:\n");
	ptr_1 = memset(char_arr_1, TEST_CHAR_1, sizeof(char) * ARR_SIZE);
	printf("        memset with %c: %.*s\n",TEST_CHAR_1, ARR_SIZE, ptr_1);
	ptr_1 = NULL;
	ptr_1 = ft_memset(char_arr_1, TEST_CHAR_2, sizeof(char) * ARR_SIZE);
	printf("     ft_memset with %c: %.*s\n",TEST_CHAR_2, ARR_SIZE, ptr_1);
	ptr_1 = NULL;
	ptr_1 = memset(char_arr_1, TEST_CHAR_1, sizeof(char) * TEST_VAL_ZERO);
	printf("   memset with %c by %d: %.*s\n", TEST_CHAR_1, TEST_VAL_ZERO, ARR_SIZE, ptr_1);
	ptr_1 = NULL;
	ptr_1 = ft_memset(char_arr_1, TEST_CHAR_1, sizeof(char) * TEST_VAL_ZERO);
	printf("ft_memset with %c by %d: %.*s\n", TEST_CHAR_1, TEST_VAL_ZERO, ARR_SIZE, ptr_1);
	ptr_1 = NULL;
	ptr_1 = ft_memset(char_arr_1, TEST_CHAR_1, sizeof(char) * TEST_VAL_1);
	printf("ft_memset with %c by %d: %.*s\n\n", TEST_CHAR_1, TEST_VAL_1, ARR_SIZE, ptr_1);
	
	// testing bzero
	printf("Testing bzero:\n");
	memset(char_arr_1, TEST_CHAR_1, sizeof(char) * ARR_SIZE);
	printf("filled with %c: %.*s\n",TEST_CHAR_1, ARR_SIZE, char_arr_1);
	bzero(char_arr_1, sizeof(char) * TEST_VAL_ZERO);
	printf("   bzero by %d: ", TEST_VAL_ZERO);
	i = 0;
	while (i < ARR_SIZE)
	{
		if (char_arr_1[i] == '\0')
		{
			printf("\\0");
		}
		else
		{
			printf("%c", char_arr_1[i]);
		}
		i++;
	}
	printf("\n");
	bzero(char_arr_1, sizeof(char) * ARR_SIZE);
	printf("   bzero: ");
	i = 0;
	while (i < ARR_SIZE)
	{
		if (char_arr_1[i] == '\0')
		{
			printf("\\0");
		}
		else
		{
			printf("%c", char_arr_1[i]);
		}
		i++;
	}
	printf("\n");
	memset(char_arr_1, TEST_CHAR_1, sizeof(char) * ARR_SIZE);
	printf("filled again with %c: %.*s\n",TEST_CHAR_1, ARR_SIZE, char_arr_1);
	bzero(char_arr_1, sizeof(char) * TEST_VAL_1);
	printf("   bzero by %d: ", TEST_VAL_1);
	i = 0;
	while (i < ARR_SIZE)
	{
		if (char_arr_1[i] == '\0')
		{
			printf("\\0");
		}
		else
		{
			printf("%c", char_arr_1[i]);
		}
		i++;
	}
	printf("\n");
	memset(char_arr_1, TEST_CHAR_1, sizeof(char) * ARR_SIZE);
	printf("filled again with %c: %.*s\n",TEST_CHAR_1, ARR_SIZE, char_arr_1);
	ft_bzero(char_arr_1, sizeof(char) * TEST_VAL_ZERO);
	printf("ft_bzero by %d: ", TEST_VAL_ZERO);
	i = 0;
	while (i < ARR_SIZE)
	{
		if (char_arr_1[i] == '\0')
		{
			printf("\\0");
		}
		else
		{
			printf("%c", char_arr_1[i]);
		}
		i++;
	}
	printf("\n");
	ft_bzero(char_arr_1, sizeof(char) * ARR_SIZE);
	printf("ft_bzero: ");
	i = 0;
	while (i < ARR_SIZE)
	{
		if (char_arr_1[i] == '\0')
		{
			printf("\\0");
		}
		else
		{
			printf("%c", char_arr_1[i]);
		}
		i++;
	}
	printf("\n");
	memset(char_arr_1, TEST_CHAR_1, sizeof(char) * ARR_SIZE);
	printf("filled again with %c: %.*s\n",TEST_CHAR_1, ARR_SIZE, char_arr_1);
	ft_bzero(char_arr_1, sizeof(char) * TEST_VAL_1);
	printf("ft_bzero by %d: ", TEST_VAL_1);
	i = 0;
	while (i < ARR_SIZE)
	{
		if (char_arr_1[i] == '\0')
		{
			printf("\\0");
		}
		else
		{
			printf("%c", char_arr_1[i]);
		}
		i++;
	}
	printf("\n\n");

	// Testing memcpy
	printf("Testing memcpy:\n");
	memset(char_arr_1, TEST_CHAR_1, sizeof(char) * ARR_SIZE);
	printf("memset %s with %c: %.*s\n", getName(char_arr_1), TEST_CHAR_1, ARR_SIZE, char_arr_1);
	memset(char_arr_2, TEST_CHAR_2, sizeof(char) * ARR_SIZE);
	printf("memset %s with %c: %.*s\n", getName(char_arr_2), TEST_CHAR_2, ARR_SIZE, char_arr_2);
	ptr_1 = NULL;
	ptr_1 = memcpy(char_arr_1, char_arr_2, TEST_VAL_ZERO);
	printf("   memcpy %s from %s by %d: %.*s\n", getName(char_arr_1), getName(char_arr_2), TEST_VAL_ZERO, ARR_SIZE, ptr_1);
	ptr_1 = NULL;
	ptr_1 = memcpy(char_arr_1, char_arr_2, ARR_SIZE);
	printf("   memcpy %s from %s by %d: %.*s\n", getName(char_arr_1), getName(char_arr_2), ARR_SIZE, ARR_SIZE, ptr_1);
	memset(char_arr_1, TEST_CHAR_1, sizeof(char) * ARR_SIZE);
	printf("memset %s with %c: %.*s\n", getName(char_arr_1), TEST_CHAR_1, ARR_SIZE, char_arr_1);
	ptr_1 = NULL;
	ptr_1 = memcpy(char_arr_1, char_arr_2, TEST_VAL_1);
	printf("   memcpy %s from %s by  %d: %.*s\n", getName(char_arr_1), getName(char_arr_2), TEST_VAL_1, ARR_SIZE, ptr_1);
	memset(char_arr_1, TEST_CHAR_1, sizeof(char) * ARR_SIZE);
	printf("memset %s with %c: %.*s\n", getName(char_arr_1), TEST_CHAR_1, ARR_SIZE, char_arr_1);
	ptr_1 = NULL;
	ptr_1 = ft_memcpy(char_arr_1, char_arr_2, TEST_VAL_ZERO);
	printf("ft_memcpy %s from %s by %d: %.*s\n", getName(char_arr_1), getName(char_arr_2), TEST_VAL_ZERO, ARR_SIZE, ptr_1);
	ptr_1 = NULL;
	ptr_1 = ft_memcpy(char_arr_1, char_arr_2, ARR_SIZE);
	printf("ft_memcpy %s from %s by %d: %.*s\n", getName(char_arr_1), getName(char_arr_2), ARR_SIZE, ARR_SIZE, ptr_1);
	memset(char_arr_1, TEST_CHAR_1, sizeof(char) * ARR_SIZE);
	printf("memset %s with %c: %.*s\n", getName(char_arr_1), TEST_CHAR_1, ARR_SIZE, char_arr_1);
	ptr_1 = NULL;
	ptr_1 = ft_memcpy(char_arr_1, char_arr_2, TEST_VAL_1);
	printf("ft_memcpy %s from %s by  %d: %.*s\n\n", getName(char_arr_1), getName(char_arr_2), TEST_VAL_1, ARR_SIZE, ptr_1);

	// Testing meccpy
	printf("Testing memccpy:\n");
	memset(char_arr_1, TEST_CHAR_1, sizeof(char) * ARR_SIZE);
	printf("memset %s with %c: %.*s\n", getName(char_arr_1), TEST_CHAR_1, ARR_SIZE, char_arr_1);
	memset(char_arr_2, TEST_CHAR_2, sizeof(char) * ARR_SIZE);
	char_arr_2[8] = TEST_CHAR_3;
	printf("Initializing %s: %.10s\n", getName(char_arr_2), char_arr_2);
	ptr_1 = NULL;
	ptr_1 = memccpy(char_arr_1, char_arr_2, TEST_CHAR_3, TEST_VAL_ZERO);
	if (ptr_1 != NULL)
	{
		printf("Found %c", *(ptr_1 - 1));
	}
	printf("   memccpy %s from %s with %c by %d: %.10s\n", getName(char_arr_1), getName(char_arr_2), TEST_CHAR_3, TEST_VAL_ZERO, char_arr_1);
	ptr_1 = NULL;
	ptr_1 = ft_memccpy(char_arr_1, char_arr_2, TEST_CHAR_3, TEST_VAL_ZERO);
	if (ptr_1 != NULL)
	{
		printf("Found %c", *(ptr_1 - 1));
	}
	printf("ft_memccpy %s from %s with %c by %d: %.10s\n", getName(char_arr_1), getName(char_arr_2), TEST_CHAR_3, TEST_VAL_ZERO, char_arr_1);
	ptr_1 = NULL;
	ptr_1 = memccpy(char_arr_1, char_arr_2, TEST_CHAR_3, TEST_VAL_1);
	if (ptr_1 != NULL)
	{
		printf("Found %c", *(ptr_1 - 1));
	}
	printf("   memccpy %s from %s with %c by %d: %.10s\n", getName(char_arr_1), getName(char_arr_2), TEST_CHAR_3, TEST_VAL_1, char_arr_1);
	memset(char_arr_1, TEST_CHAR_1, sizeof(char) * ARR_SIZE);
	printf("memset %s with %c: %.*s\n", getName(char_arr_1), TEST_CHAR_1, ARR_SIZE, char_arr_1);
	ptr_1 = NULL;
	ptr_1 = ft_memccpy(char_arr_1, char_arr_2, TEST_CHAR_3, TEST_VAL_1);
	if (ptr_1 != NULL)
	{
		printf("Found %c", *(ptr_1 - 1));
	}
	printf("ft_memccpy %s from %s with %c by %d: %.10s\n", getName(char_arr_1), getName(char_arr_2), TEST_CHAR_3, TEST_VAL_1, char_arr_1);
	memset(char_arr_1, TEST_CHAR_1, sizeof(char) * ARR_SIZE);
	printf("memset %s with %c: %.*s\n", getName(char_arr_1), TEST_CHAR_1, ARR_SIZE, char_arr_1);
	ptr_1 = NULL;
	ptr_1 = memccpy(char_arr_1, char_arr_2, TEST_CHAR_3, ARR_SIZE);
	if (ptr_1 != NULL)
	{
		printf("Found %c ", *(ptr_1 - 1));
	}
	printf("   memccpy %s from %s with %c by %d: %.10s\n", getName(char_arr_1), getName(char_arr_2), TEST_CHAR_3, ARR_SIZE, char_arr_1);
	memset(char_arr_1, TEST_CHAR_1, sizeof(char) * ARR_SIZE);
	printf("memset %s with %c: %.*s\n", getName(char_arr_1), TEST_CHAR_1, ARR_SIZE, char_arr_1);
	ptr_1 = NULL;
	ptr_1 = ft_memccpy(char_arr_1, char_arr_2, TEST_CHAR_3, ARR_SIZE);
	if (ptr_1 != NULL)
	{
		printf("Found %c ", *(ptr_1 - 1));
	}
	printf("ft_memccpy %s from %s with %c by %d: %.10s\n\n", getName(char_arr_1), getName(char_arr_2), TEST_CHAR_3, ARR_SIZE, char_arr_1);


	// Testing memmove
	printf("Testing memmove:\n");
	memset(char_arr_1, TEST_CHAR_1, sizeof(char) * ARR_SIZE);
	printf("memset %s with %c: %.*s\n", getName(char_arr_1), TEST_CHAR_1, ARR_SIZE, char_arr_1);
	ptr_1 = char_arr_1 + TEST_VAL_1 - 1;
}
