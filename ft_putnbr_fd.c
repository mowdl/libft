/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-meka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 00:38:47 by mel-meka          #+#    #+#             */
/*   Updated: 2023/11/06 00:49:55 by mel-meka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putlong_fd(long n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putlong_fd(-n, fd);
	}
	else if (n > 10)
	{
		ft_putlong_fd(n / 10, fd);
		ft_putlong_fd(n % 10, fd);
	}
	else
	{
		ft_putchar_fd('0' + n, fd);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	ft_putlong_fd(n, fd);
}
