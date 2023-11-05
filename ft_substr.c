/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-meka <mel-meka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 21:21:56 by mel-meka          #+#    #+#             */
/*   Updated: 2023/11/04 21:51:38 by mel-meka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*r;
	size_t	s_len;
	size_t	i;

	if (s == 0)
		return (0);
	r = ft_calloc(len + 1, sizeof(char));
	if (r == 0)
		return (0);
	s_len = ft_strlen(s);
	i = 0;
	while (i + start < s_len && i < len)
	{
		r[i] = s[i + start];
		i++;
	}
	r[i] = '\0';
	return (r);
}
