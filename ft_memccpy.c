/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 16:56:13 by lbenard           #+#    #+#             */
/*   Updated: 2018/11/12 18:15:02 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	t_u8	*dst_c;
	t_u8	*src_c;
	size_t	i;

	dst_c = (t_u8*)dst;
	src_c = (t_u8*)src;
	i = 0;
	while (i < n)
	{
		dst_c[i] = src_c[i];
		if (src_c[i] == (t_u8)c)
			return (dst_c + i + 1);
		i++;
	}
	return (NULL);
}
