/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prynty <prynty@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 20:11:42 by prynty            #+#    #+#             */
/*   Updated: 2024/04/22 15:27:55 by prynty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != c)
	{
		if (*str == '\0')
		{
			return (NULL);
		}
		str++;
	}
	return (str);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char find[] = "abcdefghij";
	printf("ft_strchr: %s\n", ft_strchr(find, 'k'));
	printf("strchr: %s\n", strchr(find, 'k'));
	return (0);
}*/
