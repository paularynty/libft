/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prynty <prynty@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:14:53 by prynty            #+#    #+#             */
/*   Updated: 2024/04/24 19:09:10 by prynty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (!*s)
		return (0);
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else if (s[i] == c)
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	word_len;
	int		i;

	array = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!s || !array)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			array[i++] = ft_substr(s, 0, word_len);
			s += word_len;
		}
	}
	array[i] = NULL;
	return (array);
}
/*int	main(void)
{
	char	str[] = "Hello Helsinki today is a great day!";
	printf("%s\n", *ft_split(str, 't'));
	return (0);
}*/
