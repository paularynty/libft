/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prynty <prynty@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:45:00 by prynty            #+#    #+#             */
/*   Updated: 2024/04/24 12:49:44 by prynty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (!haystack && !len)
		return (NULL);
	if (!*needle)
		return ((char *)haystack);
	while (*haystack && len--)
	{
		i = 0;
		while (*(haystack + i) == *(needle + i) && *(needle + i) && i <= len)
		{
			if (!*(needle + i + 1))
				return ((char *)haystack);
			i++;
		}
		haystack++;
	}
	return (NULL);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char haystack[] = "abcdefghij";
	char needle[] = "x";
	printf("ft_strstr: %s\n", ft_strnstr(haystack, needle, 4));
	printf("strstr: %s\n", strnstr(haystack, needle, 4));
	return (0);
}*/
