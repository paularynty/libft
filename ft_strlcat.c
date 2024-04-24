/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prynty <prynty@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 19:28:30 by prynty            #+#    #+#             */
/*   Updated: 2024/04/22 11:08:23 by prynty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static size_t	str_len(char const *str)
{
	size_t	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}*/

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t		destlen;
	size_t		total_len;

	destlen = 0;
	if ((!dest || !src) && !destsize)
		return (0);
	while (*(dest + destlen) && destlen < destsize)
		destlen++;
	if (destlen < destsize)
		total_len = destlen + ft_strlen(src);
	else
		return (destsize + ft_strlen(src));
	while (*src && (destlen + 1) < destsize)
	{
		*(dest + destlen) = *src++;
		destlen++;
	}
	*(dest + destlen) = '\0';
	return (total_len);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char s1[10] = "abcd";
	char s2[10] = "abcd";
	char s3[10] = "";
	printf("%zu\n", ft_strlcat(s1, s3, 4));
	printf("%lu\n", strlcat(s2, s3, 4));
	return (0);
}*/
