/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 20:35:42 by lbenard           #+#    #+#             */
/*   Updated: 2018/11/07 14:53:40 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	while (42)
	{
		if (*s == (char)c)
			last = (char*)s;
		if (!*s)
			break ;
		s++;
	}
	return (last);
}
