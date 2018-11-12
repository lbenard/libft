/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 16:42:53 by lbenard           #+#    #+#             */
/*   Updated: 2018/11/12 16:17:17 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	t_u8	*cpy;
	size_t	i;

	cpy = (t_u8*)b;
	i = 0;
	while (i < len)
		cpy[i++] = c;
	return (b);
}
