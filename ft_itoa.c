/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahomari <ahomari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 20:58:07 by ahomari           #+#    #+#             */
/*   Updated: 2023/11/17 17:02:29 by ahomari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len_int(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count++;
		n *= -1;
	}
	if (n == 0)
		count++;
	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

static char	*ft_converter(int n, char *ptr)
{
	int		i;
	int		check_negative;

	check_negative = 0;
	i = ft_len_int(n) - 1;
	if (n < 0)
	{
		check_negative = 1;
		n *= -1;
		ptr[0] = '-';
	}
	while (i >= check_negative)
	{
		ptr[i] = n % 10 + 48;
		n /= 10;
		i--;
	}
	return (ptr);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_len_int(n);
	ptr = (char *)ft_calloc(len + 1, sizeof(char));
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	ptr = ft_converter(n, ptr);
	return (ptr);
}
