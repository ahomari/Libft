/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahomari <ahomari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:30:42 by ahomari           #+#    #+#             */
/*   Updated: 2023/11/08 23:38:21 by ahomari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_free(char **strs, int count)
{
    int i;

    i = 0;
    while (i < count)
    {
        free(strs[i]);
        i++;
    }
    free(strs);
    return (NULL);
}
int  ft_count_word(char const *str, char c)
{
    int  i;
    int  count;
    int  check;
    
    i = 0;
    count = 0;
    check = 0;
    while (str[i])
    {
        if (str[i] != c &&  check == 0)
        {
            check = 1;
            count++;
        }
        else if (str[i] == c)
            check = 0;
        i++;
    }
    return (count);
}

char **ft_split(const char *s, char c)
{
    char **ptr;
    int start;
    size_t end;
    int j;
    
    end = -1;
    j = 0;
    start = -1;
    ptr = ft_calloc((ft_count_word(s, c) + 1), sizeof(char *));
    if (!ptr)
        return (NULL);
    while (++end <= ft_strlen(s))
    {
        if (s[end] != c && start < 0)  //**dfghd**jksfhj**sjvkls
            start = end;
        else if ((s[end] == c || end == ft_strlen(s)) && start >= 0)
        {
            ptr[j] = ft_substr(s, start, end - start);
            if (!(ptr[j]))
                return (ft_free(ptr, j));
            start = -1;
            j++;
        }
    }
    return (ptr);
}
/* int main(void)
{
    char t[] = "*******dfghd********jksfhj**sjvkls";
    char **str = ft_split(t, '*');
    int i;
    
    i = 0;
    while (str[i])
    {
        printf("%s\n", str[i]);
        i++;
    }    
} */
