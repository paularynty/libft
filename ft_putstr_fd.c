/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prynty <prynty@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 19:38:55 by prynty            #+#    #+#             */
/*   Updated: 2024/04/17 19:52:58 by prynty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write (fd, s, ft_strlen(s));
}
/*int	main(void)
{
	ft_putstr_fd("Hello", 2);
	ft_putstr_fd("Hello\n", 1);
	ft_putstr_fd("Hello\t", 1);
	return(0);
}*/
