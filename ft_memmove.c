/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahomari <ahomari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 22:39:56 by ahomari           #+#    #+#             */
/*   Updated: 2023/11/03 23:07:16 by ahomari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char			*p_dst;
	const unsigned char		*p_src;
	size_t					i;

	p_dst = dst;
	p_src = src;
	i = 0;
	if (!dst && !src)
		return (NULL);
	if (p_dst > p_src)
	{
		while (len--)
		{
			p_dst[len] = p_src[len];
		}
	}
	else
	{
		while (i < len)
		{
			p_dst[i] = p_src[i];
			i++;
		}
	}
	return (dst);
}

/* int main(void)
{
    char string[] = "qbcdefg";
    char *d = string + 1;   //fgbcde
    char *s = string + 3;   //defg
    printf("%s\n", ft_memmove(d, s, 4));
    printf("%s", memmove(d, s, 4));
} */
