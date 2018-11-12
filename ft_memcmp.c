/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 17:56:06 by lbenard           #+#    #+#             */
/*   Updated: 2018/11/12 16:21:25 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	t_u8	*s1_cpy;
	t_u8	*s2_cpy;
	int		diff;

	i = 0;
	s1_cpy = (t_u8*)s1;
	s2_cpy = (t_u8*)s2;
	while (i < n)
	{
		if ((diff = s1_cpy[i] - s2_cpy[i]))
			return (diff);
		i++;
	}
	return (0);
}
