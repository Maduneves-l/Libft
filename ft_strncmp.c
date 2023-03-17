/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneves-l <mneves-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 21:10:48 by mneves-l          #+#    #+#             */
/*   Updated: 2023/03/10 21:10:51 by mneves-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	c1;
	unsigned char	c2;
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n - 1)
		i++;
	c1 = s1[i];
	c2 = s2[i];
	return (c1 - c2);
}

/* int	main(void)
{
	char p1[8] = "amarelo";
	char p2[8] = "amul";
	printf("%d", ft_strncmp(p1, p2, 3));
} */