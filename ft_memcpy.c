/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prynty <prynty@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:18:34 by prynty            #+#    #+#             */
/*   Updated: 2024/04/18 14:58:19 by prynty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned char *) dst;
	s = (unsigned char *) src;
	if (!d && !s)
		return (0);
	while (n > 0)
	{
		d[i] = s[i];
		i++;
		n--;
	}
	return (d);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dst[20] = "Hello Helsinki";
	char	src[20] = "AAAAAAAAAA";
	printf("%s\n", ft_memcpy(dst, src, 5));
	printf("%s\n", memcpy(dst, src, 5));
	return (0);
}*/
