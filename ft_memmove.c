/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 17:13:27 by lbenard           #+#    #+#             */
/*   Updated: 2018/11/12 17:37:38 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	t_u8	*dst_cpy;
	t_u8	*src_cpy;
	size_t	i;

	dst_cpy = (t_u8*)dst;
	src_cpy = (t_u8*)src;
	i = 0;
	if (src < dst)
		while (i < len)
		{
			dst_cpy[len - i - 1] = src_cpy[len - i - 1];
			i++;
		}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
