/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahomari <ahomari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:28:40 by ahomari           #+#    #+#             */
/*   Updated: 2023/11/04 11:04:58 by ahomari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char			*ptr;
	unsigned char	r;

	ptr = (char *)b;
	r = (unsigned char)c;
	while (len--)
	{
		*ptr++ = r;
	}
	return (b);
}
/* int main()
{
    int a = 235;
//    ft_memset(&a, 0, 1);
    ft_memset(&a, 57,1);
//  0000 0000 0011 1001
    ft_memset((char *)&a+1,5,1);
    //  0000 0001 0011 1001
    //  00000101  0011 1001
    printf("%d", a);
} */
