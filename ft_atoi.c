/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prynty <prynty@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:57:07 by prynty            #+#    #+#             */
/*   Updated: 2024/04/24 16:54:39 by prynty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	result;
	long	check;

	i = 0;
	sign = 1;
	result = 0;
	check = result;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if ((str[i] == '-' || str[i] == '+'))
		if (str[i++] == '-')
			sign *= -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
		if (check > result && sign == 1)
			return (-1);
		if (check > result && sign == -1)
			return (0);
	}
	return ((int)result * sign);
}
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
    printf("Your result: %d\n", result);
    printf("Correct result: %d\n", atoi(str));
    printf("Your result: %d\n", result2);
    printf("Correct result: %d\n", atoi(str2));
    printf("Your result: %d\n", result3);
    printf("Correct result: %d\n", atoi(str3));
    printf("Your result: %d\n", result4);
    printf("Correct result: %d\n", atoi(str4));
    printf("Your result: %d\n", result5);
    printf("Correct result: %d\n", atoi(str5));
    printf("Your result: %d\n", result6);
    printf("Correct result: %d\n", atoi(str6));
    return (0);
}*/
