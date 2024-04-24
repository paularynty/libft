/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prynty <prynty@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 11:42:54 by prynty            #+#    #+#             */
/*   Updated: 2024/04/22 11:50:55 by prynty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;

	mem = (void *)malloc(count * size);
	if (!mem)
		return (mem);
	ft_bzero(mem, count * size);
	return (mem);
}
/*int	main(void)
{
	int	i = 0;
	char *ptr = (char *)ft_calloc(10, sizeof(char));
	for (int i = 0; i<20; i++);
	printf("%d", ptr[i]);
	return (0);
}*/
