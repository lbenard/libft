/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 16:56:13 by lbenard           #+#    #+#             */
/*   Updated: 2018/11/07 16:16:12 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	t_u8	*dst_c;
	t_u8	*src_c;

	dst_c = (t_u8*)dst;
	src_c = (t_u8*)src;
	while (n--)
	{
		*dst_c = *src_c;
		if (*src_c == (t_u8)c)
			return (++dst_c);
		dst_c++;
		src_c++;
	}
	return (NULL);
}
