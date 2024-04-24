/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prynty <prynty@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:04:30 by prynty            #+#    #+#             */
/*   Updated: 2024/04/22 15:50:37 by prynty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned int	i;
	unsigned char	*str2;

	i = 0;
	str2 = (unsigned char *)str;
	while (i < len)
	{
		(str2[i] = (unsigned char)c);
		i++;
	}
	return (str);
}
/*int	main(void)
{
	char str[20] = "Hello Helsinki";
	printf("%s\n", ft_memset(str + 6, 'A', 5));
	printf("%s\n", memset(str + 6, 'A', 5));
	return (0);
}*/
