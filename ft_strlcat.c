/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-meka <mel-meka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:40:47 by mel-meka          #+#    #+#             */
/*   Updated: 2023/11/03 14:22:42 by mel-meka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	dst_len = ft_strlen(dst);
	if (dst_len > dstsize)
		dst_len = dstsize;
	i = 0;
	while (i + dst_len < dstsize - 1 && i < src_len)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if (dst_len < dstsize)
		dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
