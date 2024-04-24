/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prynty <prynty@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 10:23:03 by prynty            #+#    #+#             */
/*   Updated: 2024/04/24 16:02:32 by prynty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (!s || !(*s) || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*void	uppercase(unsigned int index, char *chr)
{
	*chr = ft_toupper(*chr);
}
int	main(void)
{
	char str[] = "hello";
	char *iter;
	iter = ft_striteri(str, uppercase);
	printf("%s\n", iter);
	return (0);
}*/
