/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: amoubine <amoubine@student.1337.ma>        +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2023/11/15 10:18:47 by amoubine          #+#    #+#             */
/*   Updated: 2023/11/15 10:18:47 by amoubine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lenofsrc;
	size_t	lenofdst;
	size_t	i;

	lenofdst = strlen(dst);
	lenofsrc = strlen(src);
	if (size == 0)
		return (lenofsrc);
	if (lenofdst >= size)
	{
		return (size + lenofsrc);
	}
	i = 0;
	while (i < size - 1 - lenofdst && src[i] != '\0')
	{
		dst[lenofdst + i] = src[i];
		i++;
	}
	dst[lenofdst + i] = '\0';
	return (lenofdst + lenofsrc);
}
