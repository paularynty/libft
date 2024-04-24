/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prynty <prynty@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:42:02 by prynty            #+#    #+#             */
/*   Updated: 2024/04/24 17:16:04 by prynty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	chr;

	i = 0;
	str = (unsigned char *)s;
	chr = (unsigned char)c;
	while (i < n)
	{
		if (*str == chr)
			return (str);
		str++;
		i++;
	}
	return (NULL);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char find[] = "abcdefghij";
	printf("ft_memchr: %s\n", ft_memchr(find, 'c', 2));
	printf("memchr: %s\n", memchr(find, 'c', 2));
	return (0);
}*/
