/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prynty <prynty@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:37:22 by prynty            #+#    #+#             */
/*   Updated: 2024/04/21 15:57:23 by prynty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("%d\n", ft_isalpha('A'));
	printf("%d\n", isalpha('A'));
	return (0);
}*/
