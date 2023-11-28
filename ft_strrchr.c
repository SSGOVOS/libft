/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoubine <amoubine@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:40:45 by amoubine          #+#    #+#             */
/*   Updated: 2023/11/25 02:11:42 by amoubine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len > 0)
	{
		if (s[len - 1] == (char)c)
		{
			return ((char *)(s + len - 1));
		}
		len--;
	}
	len = ft_strlen(s);
	if (c == 0)
		return ((char *)(s + len));
	return (0);
}
