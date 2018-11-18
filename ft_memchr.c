/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 02:07:51 by lbenard           #+#    #+#             */
/*   Updated: 2018/11/17 03:43:52 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const t_u8	*s_byte;
	t_u8		to_find;

	s_byte = (const t_u8*)s;
	to_find = (t_u8)c;
	while (n--)
	{
		if (*s_byte == to_find)
			return ((void*)s_byte);
		s_byte++;
	}
	return (NULL);
}
