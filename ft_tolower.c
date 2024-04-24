/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prynty <prynty@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 18:09:15 by prynty            #+#    #+#             */
/*   Updated: 2024/04/17 19:19:28 by prynty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c += 32;
		return (c);
	}
	else
		return (c);
}
/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("%c\n", ft_tolower('A'));
	printf("%c\n", tolower('A'));
	return (0);
}*/
