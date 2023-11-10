/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahomari <ahomari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 23:03:43 by ahomari           #+#    #+#             */
/*   Updated: 2023/11/03 15:23:12 by ahomari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			cc;
	char			*ptr;

	cc = (char)c;
	i = 0;
	ptr = NULL;
	while (s[i])
	{
		if (s[i] == cc)
			ptr = (char *)(s + i);
		i++;
	}
	if (s[i] == cc)
		ptr = (char *)(s + i);
	return (ptr);
}
/* int main(void)
{                                                                 
    char s[] = "ahmed ahmwd ahmrd ahmvd";
    char c = 'm';
    printf("%s", ft_strrchr(s, c));
} */
