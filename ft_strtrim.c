/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahomari <ahomari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:20:29 by ahomari           #+#    #+#             */
/*   Updated: 2023/11/18 11:35:58 by ahomari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char c, const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

static char	*ft_strncpy(char *s1, char const *s2, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	start;
	size_t	end;
	size_t	len_trim;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1) - 1;
	while (ft_check(s1[start], set) == 1)
		start++;
	while (ft_check(s1[end], set) == 1)
		end--;
	end++;
	len_trim = end - start;
	if (len_trim <= 0 || start >= ft_strlen(s1))
		return (ft_strdup(""));
	ptr = (char *)ft_calloc(len_trim + 1, sizeof(char));
	if (!ptr)
		return (NULL);
	ft_strncpy(ptr, s1 + start, len_trim);
	return (ptr);
}
