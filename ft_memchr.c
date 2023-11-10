/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahomari <ahomari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:08:47 by ahomari           #+#    #+#             */
/*   Updated: 2023/11/03 18:47:30 by ahomari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ss;
	unsigned char	cc;

	i = 0;
	ss = (unsigned char *)s;
	cc = (char)c;
	while (i < n)
	{
		if (ss[i] == cc)
			return ((char *)ss + i);
		i++;
	}
	return (0);
}

/* int main(void)
{
    char t[] = "ahldfjkbhbveh";
    char c = 'x';
    printf("%s\n", ft_memchr(t, c, 4));

    int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
    printf("%s", (char *)ft_memchr(tab, -1, 7));
} */
