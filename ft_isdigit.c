/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prynty <prynty@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:40:44 by prynty            #+#    #+#             */
/*   Updated: 2024/04/17 18:58:17 by prynty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (!(c >= 48 && c <= 57))
	{
		return (0);
	}
	return (1);
}
/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("%d\n", ft_isdigit('9'));
	printf("%d\n", isdigit('9'));
	return (0);
}*/
