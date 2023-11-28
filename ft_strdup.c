/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: amoubine <amoubine@student.1337.ma>        +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2023/11/15 09:10:12 by amoubine          #+#    #+#             */
/*   Updated: 2023/11/15 09:10:12 by amoubine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*p;

	len = ft_strlen(s) + 1;
	p = malloc(len * sizeof(char));
	if (p == NULL)
		return (NULL);
	ft_strlcpy(p, s, len);
	return (p);
}
