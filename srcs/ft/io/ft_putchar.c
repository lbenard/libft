/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 20:10:56 by lbenard           #+#    #+#             */
/*   Updated: 2019/02/20 19:29:20 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft/io.h"

void	ft_putchar(char c)
{
	ft_putchar_fd(c, 1);
}