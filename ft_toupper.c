/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prynty <prynty@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 18:30:36 by prynty            #+#    #+#             */
/*   Updated: 2024/04/21 13:47:06 by prynty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c -= 32;
		return (c);
	}
	else
		return (c);
}
/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("%c\n", ft_toupper('n'));
	printf("%c\n", toupper('n'));
	return (0);
}*/
