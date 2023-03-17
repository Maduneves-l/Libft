/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneves-l <mneves-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 21:11:34 by mneves-l          #+#    #+#             */
/*   Updated: 2023/03/10 21:11:36 by mneves-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	if (!s)
		return (NULL);
	if (len == 0 || start > ft_strlen(s))
	{
		str = malloc(1);
		*str = '\0';
		return (str);
	}
	if (ft_strlen(s) - start >= len)
		str = (char *)malloc(sizeof(char) * (len + 1));
	else
		str = (char *)malloc(sizeof(char) * (ft_strlen(s) - start + 1));
	if (!str)
		return (NULL);
	while (s[start] && i < len && start < ft_strlen(s))
	{
		str[i] = s[start++];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* int	main(void)
{
	char a[] = "abcedfghijklmno";
	printf("%s", ft_substr(a, 3, 5));
} */