/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prynty <prynty@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:48:22 by prynty            #+#    #+#             */
/*   Updated: 2024/04/24 11:46:13 by prynty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t len)
{
	size_t				i;
	unsigned char		*dst;
	const unsigned char	*src;

	i = len;
	dst = (unsigned char *)s1;
	src = (const unsigned char *)s2;
	if (!dst && !src)
		return (NULL);
	if ((dst > src) && (dst < src + len) && (src < dst + len))
	{
		while (i--)
			dst[i] = src[i];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			*dst++ = *src++;
			i++;
		}
	}
	return (s1);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dst[20] = "Hello Helsinki";
	char	src[20] = "AAAAAAAAAA";
	printf("%s\n", ft_memmove(dst, src, 5));
	printf("%s\n", memmove(dst, src, 5));
	return (0);
}*/
