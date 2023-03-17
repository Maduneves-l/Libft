/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneves-l <mneves-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 13:13:20 by neves             #+#    #+#             */
/*   Updated: 2023/03/10 19:35:09 by mneves-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordc(const char *str, char c)
{
	int	word;
	int	sep;

	word = 0;
	sep = 0;
	while (*str)
	{
		if (*str != c && sep == 0)
		{
			sep = 1;
			word++;
		}
		else if (*str == c)
		{
			sep = 0;
		}
		str++;
	}
	return (word);
}

static char	*ft_wordd(char const *str, int start, int end)
{
	char	*new;
	int		k;

	k = 0;
	new = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!new)
		return (NULL);
	while (start < end)
	{
		new[k] = str[start];
		start++;
		k++;
	}
	new[k] = '\0';
	return (new);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	i = 0;
	j = 0;
	index = -1;
	split = (char **)malloc(((ft_wordc(s, c)) + 1) * sizeof(char *));
	if (!split || !s)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j] = ft_wordd(s, index, i);
			index = -1;
			j++;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}

/* int	main(void)
{
	char a[] = "\0aa\0bbb";
	char **tmp;
	tmp = ft_split(a, '\0');

	printf("%s", tmp[3]);
} */