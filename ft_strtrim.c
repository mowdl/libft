/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-meka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 22:19:55 by mel-meka          #+#    #+#             */
/*   Updated: 2023/11/05 19:57:28 by mel-meka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in(char const *set, char c)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static char	*empty_str(void)
{
	char	*r;

	r = ft_calloc(1, sizeof(char));
	if (r == 0)
		return (0);
	*r = '\0';
	return (r);
}

static size_t	get_start(char const *s1, char const *set, size_t s1_len)
{
	size_t	start;

	start = 0;
	while (start < s1_len)
	{
		if (!is_in(set, s1[start]))
			break ;
		start++;
	}
	return (start);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1_len;
	size_t	start;
	size_t	end;
	char	*r;

	if (s1 == 0 || set == 0)
		return (0);
	s1_len = ft_strlen(s1);
	start = get_start(s1, set, s1_len);
	end = s1_len;
	while (end != 0 && end >= start)
	{
		if (!is_in(set, s1[end - 1]))
			break ;
		end--;
	}
	if (s1_len == 0 || end < start)
		return (empty_str());
	r = ft_calloc(end - start + 1, sizeof(char));
	if (r == 0)
		return (0);
	ft_memcpy(r, s1 + start, end - start);
	r[end] = '\0';
	return (r);
}
