/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prynty <prynty@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:54:41 by prynty            #+#    #+#             */
/*   Updated: 2024/04/21 15:43:56 by prynty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("%d\n", ft_isprint(128));
	printf("%d\n", isprint(128));
	return (0);
}*/
