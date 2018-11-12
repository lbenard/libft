/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 17:50:50 by lbenard           #+#    #+#             */
/*   Updated: 2018/11/12 18:17:47 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	t_u8	*s_cpy;
	size_t	i;

	s_cpy = (t_u8*)s;
	i = 0;
	while (i < n)
	{
		if (s_cpy[i] == (t_u8)c)
			return ((void*)(s + i));
		i++;
	}
	return (NULL);
}
