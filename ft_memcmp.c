/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prynty <prynty@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 17:29:10 by prynty            #+#    #+#             */
/*   Updated: 2024/04/22 10:08:23 by prynty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (s1 == s2)
		return (0);
	while (n-- > 0)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	return (0);
}
/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	char *str1 = "ab\0\0\0";
	char *str2 = "ab\0abc";
	size_t size = 8;
   	int result1 = ft_memcmp(str1, str2, size);
	printf("ft_memcmp: %d\n", result1);
	int result2 = memcmp(str1, str2, size);
	printf("memcmp: %d\n", result2);
	return (0);
}*/
