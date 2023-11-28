/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoubine <amoubine@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 04:43:52 by amoubine          #+#    #+#             */
/*   Updated: 2023/11/27 04:58:24 by amoubine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest == src)
		return (dest);
	while (n > 0)
	{
		if (dest > src)
		{
			((unsigned char *)dest)[n - 1] = ((unsigned char *)src)[n - 1];
			n--;
		}
		else
		{
			ft_memcpy(dest, src, n);
			n--;
		}
	}
	return (dest);
}
// int main() {
//   char *p =NULL;
//   char *s = NULL;
//   printf("%s", ft_memmove(p, s, 0));
// }