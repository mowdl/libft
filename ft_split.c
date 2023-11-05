/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-meka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 20:02:06 by mel-meka          #+#    #+#             */
/*   Updated: 2023/11/05 21:16:35 by mel-meka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	if (*s == '\0')
		return (0);
	if (*s != c)
		count = 1;
	s++;
	while (*s)
	{
		if (s[-1] == c && s[0] != c)
			count++;
		s++;
	}
	return (count);
}

static char	**set_arr(char **arr, char const *s, char c, size_t words)
{
	unsigned int	start;
	size_t			len;
	size_t			i;

	i = 0;
	start = 0;
	while (i < words)
	{
		len = 0;
		while (s[start] == c)
			start++;
		while (s[start + len] != c)
			len++;
		arr[i] = ft_substr(s, start, len);
		if (arr[i] == 0)
			return (0);
		start += len;
		i++;
	}
	arr[i] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**arr;

	if (s == NULL)
		return (NULL);
	words = count_words(s, c);
	arr = ft_calloc(words + 1, sizeof(char *));
	if (arr == 0)
		return (0);
	return (set_arr(arr, s, c, words));
}
