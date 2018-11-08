/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 13:12:22 by lbenard           #+#    #+#             */
/*   Updated: 2018/11/08 12:51:29 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	k;

	if (!*needle)
		return ((char*)haystack);
	i = 0;
	k = 0;
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[k])
			k++;
		else
			k = 0;
		if (!needle[k])
			return ((char*)haystack + i - k + 1);
		i++;
	}
	return (NULL);
}
