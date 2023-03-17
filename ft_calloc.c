/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneves-l <mneves-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 21:06:28 by mneves-l          #+#    #+#             */
/*   Updated: 2023/03/10 21:06:32 by mneves-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*destination;

	destination = malloc(count * size);
	i = count * size;
	if (!destination)
		return (NULL);
	ft_memset(destination, '\0', i);
	return (destination);
}

/* int main() 
{
    int n = 10; 
    int *arr = (int *) calloc(n, sizeof(int));
    
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return (1);
    }
    
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }
    
    printf("Array elements:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    free(arr); 
    
    return (0);
} */
