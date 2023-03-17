/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneves-l <mneves-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 21:11:22 by mneves-l          #+#    #+#             */
/*   Updated: 2023/03/10 21:11:24 by mneves-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}

/* int	main(void)
{
	const char str[] = "o y aparece agora mas apenas o segundo y sera destacado";
	const char ch = 'y';
	char *ret;
	ret = ft_strrchr(str, ch);
	printf("a ultima string depois do %c comeca apartir de %s", ch, ret);
} */