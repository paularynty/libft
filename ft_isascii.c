/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prynty <prynty@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:55:16 by prynty            #+#    #+#             */
/*   Updated: 2024/04/17 18:57:52 by prynty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (!(c >= 0 && c <= 127))
	{
		return (0);
	}
	return (1);
}
/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("%d\n", ft_isascii(127));
	printf("%d\n", isascii(127));
	return (0);
}*/
