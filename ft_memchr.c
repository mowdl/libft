/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-meka <mel-meka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:20:48 by mel-meka          #+#    #+#             */
/*   Updated: 2023/11/04 15:29:22 by mel-meka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*buf;

	buf = (unsigned char *)s;
	while (n != 0)
	{
		if (*buf == (unsigned char)c)
			return (buf);
		buf++;
		n--;
	}
	return (0);
}
