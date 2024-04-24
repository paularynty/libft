/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prynty <prynty@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 11:29:29 by prynty            #+#    #+#             */
/*   Updated: 2024/04/24 16:18:44 by prynty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*trim;

	i = 0;
	j = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	len = ft_strlen(s1 + i);
	while (len && ft_strchr(set, s1[i + len - 1]))
		len--;
	trim = malloc(len + 1);
	if (!trim)
		return (0);
	while (j < len)
	{
		trim[j] = s1[i + j];
		j++;
	}
	trim[j] = '\0';
	return (trim);
}
/*int	main(void)
{
	char	str[] = "saippuakivikauppias";
	char	trim[] = "sa";
	printf("%s\n", ft_strtrim(str, trim));
	return (0);
}*/
