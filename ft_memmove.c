/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-meka <mel-meka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:41:49 by mel-meka          #+#    #+#             */
/*   Updated: 2023/11/04 17:00:59 by mel-meka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dst;
	s = src;
	if (s == d)
	{
		return (dst);
	}
	else if (s < d && (void *)(s + n - 1) >= dst)
	{
		while (n != 0)
		{
			*(d + n - 1) = *(s + n - 1);
			n--;
		}
	}
	else
	{
		ft_memcpy(dst, src, n);
	}
	return (dst);
}
