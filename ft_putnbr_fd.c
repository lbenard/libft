/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 20:10:06 by lbenard           #+#    #+#             */
/*   Updated: 2018/11/08 20:42:15 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd_recursive(int n, int fd)
{
	if (n)
	{
		ft_putnbr_fd_recursive(n / 10, fd);
		ft_putchar_fd('0' + ft_abs(n % 10), fd);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
		ft_putchar_fd('-', fd);
	else
		n = -n;
	ft_putnbr_fd_recursive(n, fd);
}
