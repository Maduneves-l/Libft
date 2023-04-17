/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneves-l <mneves-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 21:11:00 by mneves-l          #+#    #+#             */
/*   Updated: 2023/04/11 20:03:03 by mneves-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*big;
	char	*litlle;

	big = (char *)haystack;
	litlle = (char *)needle;
	i = 0;
	if (!*needle)
		return (big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == litlle[j] && i + j < len)
		{
			if (litlle[j + 1] == '\0')
				return (big + i);
			j++;
		}
		i++;
	}
	return (0);
}
