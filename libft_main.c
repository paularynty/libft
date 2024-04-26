/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prynty <prynty@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 14:30:14 by prynty            #+#    #+#             */
/*   Updated: 2024/04/26 13:34:58 by prynty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//ft_isalpha----------------------------------

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("%d\n", ft_isalpha('A'));
	printf("%d\n", isalpha('A'));
	return (0);
}*/

//ft_isdigit----------------------------------

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("%d\n", ft_isdigit('9'));
	printf("%d\n", isdigit('9'));
	return (0);
}*/

//ft_isalnum----------------------------------

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", isalnum('a'));
	return (0);
}*/

//ft_isprint----------------------------------

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("%d\n", ft_isprint('&'));
	printf("%d\n", isprint('&'));
	return (0);
}*/

//ft_isascii----------------------------------

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("%d\n", ft_isascii('128'));
	printf("%d\n", isascii('128'));
	return (0);
}*/

//ft_strlen-----------------------------------

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	string[] = "Hello";
	printf("%d\n", ft_strlen(string));
	printf("%lu\n", strlen(string));
	return (0);
}*/

//ft_memset-----------------------------------

/*int	main(void)
{
	char str[20] = "Hello Helsinki";
	printf("%s\n", ft_memset(str + 6, 'A', 5));
	printf("%s\n", memset(str + 6, 'A', 5));
	return (0);
}*/

//ft_bzero------------------------------------

/*int	main(void)
{
	char *b = "bzero";
	ft_bzero(b, 4);
	return (0);
}*/

//ft_memcpy-----------------------------------

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dst[20] = "Hello Helsinki";
	char	src[20] = "AAAAAAAAAA";
	printf("%s\n", ft_memcpy(dst, src, 5));
	printf("%s\n", memcpy(dst, src, 5));
	return (0);
}*/

//ft_memmove----------------------------------

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dst[20] = "Hello Helsinki";
	char	src[20] = "!!Hello";
	printf("%s\n", ft_memmove(dst, src, 5));
	printf("%s\n", memmove(dst, src, 5));
	return (0);
}*/

//ft_strlcpy----------------------------------

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	int	n = 0;
	char src[6] = "hello";
	char dest[10];
	printf("ft_strlcpy: %zu\n", ft_strlcpy(dest, src, n));
	printf("strlcpy: %lu\n", strlcpy(dest, src, n));
	return (0);
}*/

//ft_strlcat----------------------------------

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char s1[10] = "abcd";
	char s2[10] = "abcd";
	char s3[10] = "";
	printf("%zu\n", ft_strlcat(s1, s3, 4));
	printf("%lu\n", strlcat(s2, s3, 4));
	return (0);
}*/

//ft_toupper----------------------------------

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("%c\n", ft_toupper('n'));
	printf("%c\n", toupper('n'));
	return (0);
}*/

//ft_tolower----------------------------------

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("%c\n", ft_tolower('A'));
	printf("%c\n", tolower('A'));
	return (0);
}*/

//ft_strchr-----------------------------------

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char find[] = "abcdefghij";
	printf("ft_strchr: %s\n", ft_strchr(find, 'k'));
	printf("strchr: %s\n", strchr(find, 'k'));
	return (0);
}*/

//ft_strrchr----------------------------------

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	find[] = "iasdkfsdf";
	printf("ft_strrchr: %s\n", ft_strrchr(find, 'a'));
	printf("strrchr: %s\n", strrchr(find, 'a'));
	return (0);
}*/

//ft_strncmp----------------------------------

/*int	main(void)
{
	char str1[] = "abce";
	char str2[] = "abcd";
	char str3[] = "abce";
	int result = ft_strncmp(str2, str1, 4);
	printf("ft_strncmp: %d %s\n", result, str1);
	int	result2 = strncmp(str2, str3, 4);
	printf("strncmp: %d %s\n", result2, str3);
	return (0);
}*/

//ft_memchr-----------------------------------

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char find[] = "abcdefghij";
	printf("ft_memchr: %s\n", ft_memchr(find, 'c', 2));
	printf("memchr: %s\n", memchr(find, 'c', 2));
	return (0);
}*/

//ft_memcmp-----------------------------------

/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	char *str1 = "ab\0\0\0";
	char *str2 = "ab\0abc";
	size_t size = 8;
   	int result1 = ft_memcmp(str1, str2, size);
	printf("ft_memcmp: %d\n", result1);
	int result2 = memcmp(str1, str2, size);
	printf("memcmp: %d\n", result2);
	return (0);
}*/

//ft_strnstr----------------------------------

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char haystack[] = "abcdefghij";
	char needle[] = "x";
	printf("ft_strstr: %s\n", ft_strnstr(haystack, needle, 4));
	printf("strstr: %s\n", strnstr(haystack, needle, 4));
	return (0);
}*/

//ft_atoi-------------------------------------

/*#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int main(void)
{
    char str[] = " -1234ab567";
    char str2[] = "-9223372036854775808";
    char str3[] = "+9223372036854775807";
    char str4[] = "0";
    char str5[] = "21474836481111111111111111111111111111111111";
    char str6[] = "214748364811111";
    int result = ft_atoi(str);
    int result2 = ft_atoi(str2);
    int result3 = ft_atoi(str3);
    int result4 = ft_atoi(str4);
    int result5 = ft_atoi(str5);
    int result6 = ft_atoi(str6);
    printf("ft_atoi: %d\n", result);
    printf("atoi: %d\n", atoi(str));
    printf("ft_atoi: %d\n", result2);
    printf("atoi: %d\n", atoi(str2));
    printf("ft_atoi: %d\n", result3);
    printf("atoi: %d\n", atoi(str3));
    printf("ft_atoi: %d\n", result4);
    printf("atoi: %d\n", atoi(str4));
    printf("ft_atoi: %d\n", result5);
    printf("atoi: %d\n", atoi(str5));
    printf("ft_atoi: %d\n", result6);
    printf("atoi: %d\n", atoi(str6));
    return (0);
}*/

//ft_calloc-----------------------------------

/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TEST_SIZE 300  // Number of elements to allocate and check

int main(void)
{
	int	*arr1 = (int *)ft_calloc(TEST_SIZE, sizeof(int));
    if (arr1 == NULL)
	{
		printf("Memory allocation failed\n");
		exit(EXIT_FAILURE);
	}
	for (size_t i = 0; i < TEST_SIZE; i++)
	{
		if (arr1[i] != 0)
		{
			printf("Memory is not zeroed out\n");
			exit(EXIT_FAILURE);
		}
	}
	printf("Memory allocation successful for %d integers\n", TEST_SIZE);
    char *str = (char *)ft_calloc(TEST_SIZE, sizeof(char));
    if (str == NULL)
	{
		printf("Memory allocation failed\n");
		exit(EXIT_FAILURE);
	}
	for (size_t i = 0; i < TEST_SIZE; i++)
	{
		if (str[i] != '\0')
		{
			printf("Memory is not zeroed out\n");
			exit(EXIT_FAILURE);
		}
	}
    printf("Memory allocation successful for %d characters\n", TEST_SIZE);
	double *arr2 = (double *)ft_calloc(5, sizeof(double));
    if (arr2 == NULL)
	{
		printf("Memory allocation failed\n");
		exit(EXIT_FAILURE);
    }
	for (size_t i = 0; i < 5; i++)
	{
		if (arr2[i] != 0.0)
		{
			printf("Memory is not zeroed out\n");
			exit(EXIT_FAILURE);
		}
	}
    printf("Memory allocation successful for %d doubles\n", (TEST_SIZE / 2));
	free(arr1);
    free(str);
    free(arr2);
	printf("All tests passed successfully\n");
	return (0);
}*/

//ft_strdup-----------------------------------

/*int	main(void)
{
	char	src[] = "hello";
	char	*dup = ft_strdup(src);
	printf("%s\n", dup);
	return (0);
}*/

//ft_substr-----------------------------------

/*#include <stdio.h>
int	main(void)
{
	char			src[] = "supercalifragilisticexpialidocious";
	char			*sub;
	printf("%s\n", ft_substr(src, 1, 20));
	return (0);
}*/

//ft_strjoin----------------------------------

/*int	main(void)
{
	char	s1[] = "haha";
	char	s2[] = "hehe";
	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
}*/

//ft_strtrim----------------------------------

/*#include <stdio.h>

int	main(void)
{
	char	str[] = "saippuakivikauppias";
	char	trim[] = "sa";
	printf("%s\n", ft_strtrim(str, trim));
	return (0);
}*/

//ft_split------------------------------------

/*#include <stdio.h>

int	main(void)
{
	char	**array;
	int		i = 0;
	char	str[] = "Hello Helsinki today is a great day!";

	array = ft_split(str, 't');
	while (array[i])
	{
		printf("%s\n", array[i]);
		i++;
	}
	return (0);
}*/

//ft_itoa-------------------------------------

/*#include <stdio.h>

int	main(void)
{
	int		str1 = -1234567;
	long	str2 = 854775808;
	long	str3 = 775807;
	int		str4 = 0;
	long	str5 = 1111111111;
	long	str6 = 48364811111;
	printf("%s\n", ft_itoa(str1));
	printf("%s\n", ft_itoa(str2));
	printf("%s\n", ft_itoa(str3));
	printf("%s\n", ft_itoa(str4));
	printf("%s\n", ft_itoa(str5));
	printf("%s\n", ft_itoa(str6));
	return (0);
}*/

//ft_strmapi----------------------------------

/*char	f(unsigned int i, char c)
{
	if (i % 2 == 0)
		return ft_toupper(c);
	else
		return ft_tolower(c);
}
#include <stdio.h>
int	main(void)
{
	char	*s = "hello hive helsinki";
	printf("%s\n", ft_strmapi(s, f));
	return (0);
}*/

//ft_striteri---------------------------------

/*#include <stdio.h>
int	main(void)
{
	char	*s = ft_strdup("hello");
	ft_striteri(s, f);
	printf("%s\n", s);
	return (0);
}*/

void	test_striteri_a(unsigned int i, char *c)
{
	*c = *c + 1;
}

void	test_striteri_b(unsigned int i, char *c)
{
	if (i > 0)
		*c = *c + 1;
}

int	main(void)
{
	printf("%s\n", "=== striteri ===");
	char	c_striteri_test_a[] = "Hello";
	ft_striteri(c_striteri_test_a, test_striteri_a);
	printf("char+1: %s\n", c_striteri_test_a);
	char    c_striteri_test_b[] = "Hello";
	ft_striteri(c_striteri_test_b, test_striteri_b);
	printf("if i > 0: char+1: %s\n", c_striteri_test_b);
	return (0);
}

//ft_putchar_fd-------------------------------

/*int	main(void)
{
	ft_putchar_fd('Q', 2);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd('\t', 1);
	return(0);
}*/

//ft_putstr_fd--------------------------------

/*int	main(void)
{
	ft_putstr_fd("Hello", 2);
	ft_putstr_fd("Hello\n", 1);
	ft_putstr_fd("Hello\t", 1);
	return(0);
}*/

//ft_putendl_fd-------------------------------

/*int	main(void)
{
	ft_putendl_fd("Hello", 0);
	ft_putendl_fd("Hello", 1);
	ft_putendl_fd("Hello", 2);
	return(0);
}*/

//ft_putnbr_fd--------------------------------

/*int	main(void)
{
	ft_putnbr_fd(123, 1);
	return (0);
}*/
