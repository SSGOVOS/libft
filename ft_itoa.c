/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoubine <amoubine@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:25:26 by amoubine          #+#    #+#             */
/*   Updated: 2023/11/27 02:42:23 by amoubine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	numberlen(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n > 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		len;
	long	nbr;

	nbr = n;
	len = numberlen(nbr);
	s = malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	s[len--] = 0;
	if (nbr == 0)
		s[0] = '0';
	if (nbr < 0)
	{
		nbr = -nbr;
		s[0] = '-';
	}
	while (nbr > 0)
	{
		s[len--] = (nbr % 10) + 48;
		nbr /= 10;
	}
	return (s);
}
