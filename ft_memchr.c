/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneves-l <mneves-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 21:08:27 by mneves-l          #+#    #+#             */
/*   Updated: 2023/03/10 21:08:30 by mneves-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	c1;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	c1 = c;
	while (i < n)
	{
		if (str[i] == c1)
			return (str + i);
		i++;
	}
	return (NULL);
}

/* int main()
{
    const char str[] = "http://www.tutorialspoint.com";
    const char ch = 't';
    char *ret;
    ret = ft_memchr(str, ch, 20);
    printf("String a partir desse símbolo |%c| -> |%s|\n", ch, ret);
    return(0);
}  */
