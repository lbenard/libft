/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 13:03:16 by lbenard           #+#    #+#             */
/*   Updated: 2018/11/12 17:47:06 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;

	if (!*needle)
		return ((char*)haystack);
	i = 0;
	while (haystack[i])
	{
		if (ft_memcmp(haystack + i, needle, ft_strlen(needle)) == 0)
			return ((char*)(haystack + i));
		i++;
	}
	return (NULL);
}
