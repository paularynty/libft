/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prynty <prynty@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 19:23:41 by prynty            #+#    #+#             */
/*   Updated: 2024/04/24 09:58:08 by prynty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dup;
	size_t	i;

	i = 0;
	dup = (char *)malloc(sizeof(*src) * (ft_strlen(src) + 1));
	if (!dup)
		return (NULL);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*int	main(void)
{
	char	src[] = "hello";
	char	*dup = ft_strdup(src);
	printf("%s\n", dup);
	return (0);
}*/
