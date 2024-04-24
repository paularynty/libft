/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prynty <prynty@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 19:15:08 by prynty            #+#    #+#             */
/*   Updated: 2024/04/21 13:20:48 by prynty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	string[] = "Hello";
	printf("%d\n", ft_strlen(string));
	printf("%lu\n", strlen(string));
	return (0);
}*/
