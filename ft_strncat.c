/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 18:34:22 by lbenard           #+#    #+#             */
/*   Updated: 2018/11/12 18:26:35 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*s1_cpy;
	size_t	i;

	s1_cpy = s1 + ft_strlen(s1);
	i = 0;
	while (i < n && s2[i])
	{
		s1_cpy[i] = s2[i];
		i++;
	}
	s1_cpy[i] = 0;
	return (s1);
}
