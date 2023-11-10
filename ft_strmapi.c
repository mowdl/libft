/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-meka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 22:25:55 by mel-meka          #+#    #+#             */
/*   Updated: 2023/11/05 22:32:05 by mel-meka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			len;
	unsigned int	i;
	char			*r;

	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(s);
	r = ft_calloc(len + 1, sizeof(char));
	if (r == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		r[i] = f(i, s[i]);
		i++;
	}
	return (r);
}
