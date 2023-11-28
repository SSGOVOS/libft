/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoubine <amoubine@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 02:22:19 by amoubine          #+#    #+#             */
/*   Updated: 2023/11/25 02:12:39 by amoubine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s != (char)c)
		{
			s++;
		}
		else if (*s == (char)c)
			return ((char *)s);
	}
	if (c == 0)
		return ((char *)s);
	return (0);
}
