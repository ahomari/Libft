/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahomari <ahomari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:41:23 by ahomari           #+#    #+#             */
/*   Updated: 2023/11/06 15:58:04 by ahomari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int i;
    char *res;
    
    res = (char *)ft_calloc((ft_strlen(s) + 1), sizeof(char));
    if (!res)
        return (NULL);
    i = 0;
    while (i < ft_strlen(s))
    {
        res[i] = f(i, s[i]);
        i++;
    }
    //res[i] = 0;
    return (res);
}