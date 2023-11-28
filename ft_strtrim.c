/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoubine <amoubine@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 10:06:17 by amoubine          #+#    #+#             */
/*   Updated: 2023/11/27 04:40:05 by amoubine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checkforset(char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	startcounter;
	size_t	endcounter;
	char	*ptr;

	if (set == NULL || s1 == NULL)
		return (NULL);
	startcounter = 0;
	while (s1[startcounter] && checkforset(s1[startcounter], set))
		startcounter++;
	endcounter = ft_strlen(s1);
	if (endcounter == startcounter)
		return (ft_strdup(""));
	while (endcounter > startcounter && checkforset(s1[endcounter - 1], set))
		endcounter--;
	ptr = malloc((endcounter - startcounter) + 1);
	ft_strlcpy(ptr, (s1 + startcounter), (endcounter - startcounter) + 1);
	return (ptr);
}
