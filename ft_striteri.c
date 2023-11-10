/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahomari <ahomari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:32:08 by ahomari           #+#    #+#             */
/*   Updated: 2023/11/06 16:51:18 by ahomari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/* void	ft_uppercase(unsigned int n, char *str)
{
	if (*str >= 'a' && *str <= 'z')
		*str = *str - 32;
}

int	main(void)
{
	char str[] = "AhMed Omari";
	ft_striteri(str, ft_uppercase);
	printf("%s", str);
} */