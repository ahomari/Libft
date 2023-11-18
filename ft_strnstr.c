/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahomari <ahomari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:51:10 by ahomari           #+#    #+#             */
/*   Updated: 2023/11/18 11:35:37 by ahomari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i_index;
	size_t	i_find;

	i_index = 0;
	i_find = 0;
	if (!needle[i_find])
		return ((char *)haystack);
	while (haystack[i_index] && i_index < len)
	{
		while ((haystack[i_index + i_find] == needle[i_find]) && 
			(i_index + i_find < len))
		{
			i_find++;
			if (needle[i_find] == '\0')
				return ((char *)(haystack + i_index));
		}
		i_find = 0;
		i_index++;
	}
	return (NULL);
}
