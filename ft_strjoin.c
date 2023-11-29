/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoubine <amoubine@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 08:44:41 by amoubine          #+#    #+#             */
/*   Updated: 2023/11/29 00:54:23 by amoubine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	l_s1;
	size_t	l_s2;
	size_t	totallen;
	char	*res;

	if (!s1 || !s2)
		return (NULL);
	l_s1 = ft_strlen(s1);
	l_s2 = ft_strlen(s2);
	totallen = (ft_strlen(s1) + (ft_strlen(s2) + 1));
	res = malloc(totallen * sizeof(char));
	if (res == NULL)
		return (NULL);
	ft_strlcpy(res, s1, l_s1 + 1);
	ft_strlcpy(res + l_s1, s2, l_s2 + 1);
	return (res);
}
