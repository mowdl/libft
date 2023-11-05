/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-meka <mel-meka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 20:55:18 by mel-meka          #+#    #+#             */
/*   Updated: 2023/11/04 20:59:31 by mel-meka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*r;
	size_t	len;

	len = ft_strlen(s1);
	r = (char *)malloc(sizeof(char) * (len + 1));
	if (r == 0)
		return (0);
	ft_memcpy(r, s1, (len + 1));
	return (r);
}
