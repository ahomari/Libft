/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahomari <ahomari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:29:01 by ahomari           #+#    #+#             */
/*   Updated: 2023/11/10 23:28:10 by ahomari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	d;
	size_t	s;

	i = 0;
	d = ft_strlen(dst);
	s = ft_strlen(src);
	if (dstsize < d)
		return (dstsize + s);
	dstsize = dstsize - d;
	if (dstsize != 0)
	{
		while (src[i] && i < (dstsize - 1))
		{
			dst[d + i] = src[i];
			i++;
		}
		dst[d + i] = '\0';
	}
	return (d + s);
}



/* int main(void)
{

    char dst[] = "ahmed";
    char src[] = "omari";
    printf("%zu\n", ft_strlcat(dst, src, 18));

} */
