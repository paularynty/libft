/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prynty <prynty@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 15:44:52 by prynty            #+#    #+#             */
/*   Updated: 2024/04/21 19:53:16 by prynty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static size_t	str_len(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}*/

char	*ft_strrchr(const char *s, int c)
{
	char	*last;
	char	find;
	size_t	i;

	last = (char *)s;
	find = (char)c;
	i = ft_strlen(s);
	while (i > 0)
	{
		if (last[i] == find)
			return (last + i);
		i--;
	}
	if (last[i] == find)
		return (last);
	return (NULL);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	find[] = "";
	printf("ft_strrchr: %s\n", ft_strrchr(find, '\0'));
	printf("strrchr: %s\n", strrchr(find, '\0'));
	return (0);
}*/
