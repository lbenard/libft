/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 18:14:16 by lbenard           #+#    #+#             */
/*   Updated: 2018/11/12 17:38:28 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	i = 0;
	if (src_len < len)
	{
		while (i < len)
		{
			if (i < src_len)
				dst[i] = src[i];
			else
				dst[i] = 0;
			i++;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
