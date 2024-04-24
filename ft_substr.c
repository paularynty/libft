/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prynty <prynty@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 09:46:36 by prynty            #+#    #+#             */
/*   Updated: 2024/04/24 16:21:32 by prynty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*sub;

	i = 0;
	j = 0;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	if (!sub)
		return (NULL);
	/*if (start > sub)
	{
		sub = (char*)malloc(1);
		sub[0] = 0;
		return (sub);
	}*/
	while (s[i])
	{
		if (i >= start && j < len)
		{
			sub[j] = s[i];
			j++;
		}
		i++;
	}
	sub[j] = '\0';
	return (sub);
}
/*int	main(void)
{
	char			src[] = "supercalifragilisticexpialidocious";
	char			*sub;
	unsigned int	start = 20;
	size_t			len = 10;
	sub = ft_substr(src, start, len);
	printf("%s\n", sub);
	return (0);
}*/
