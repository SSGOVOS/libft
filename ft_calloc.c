/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoubine <amoubine@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 09:04:33 by amoubine          #+#    #+#             */
/*   Updated: 2023/11/24 23:13:57 by amoubine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_elements, size_t element_size)
{
	void	*ptr;

	if (element_size && num_elements > SIZE_MAX / element_size)
		return (NULL);
	ptr = malloc(num_elements * element_size);
	if (ptr != NULL)
	{
		ft_memset(ptr, 0, num_elements * element_size);
	}
	return (ptr);
}
