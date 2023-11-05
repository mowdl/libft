/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-meka <mel-meka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:44:52 by mel-meka          #+#    #+#             */
/*   Updated: 2023/11/04 17:04:44 by mel-meka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	nlen;
	size_t	i;

	nlen = ft_strlen(needle);
	if (nlen == 0)
		return ((char *)haystack);
	if (len < nlen)
		return (0);
	i = 0;
	while (i < len - nlen + 1 && haystack[i] != '\0')
	{
		if (ft_strncmp(haystack + i, needle, nlen) == 0)
			return ((char *)haystack + i);
		i++;
	}
	return (0);
}
