/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 16:28:33 by lbenard           #+#    #+#             */
/*   Updated: 2018/11/12 19:01:05 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	needle_len;

	if (!*needle || ft_strcmp(haystack, needle) == 0)
		return ((char*)haystack);
	i = 0;
	needle_len = ft_strlen(needle);
	while (haystack[i] && len >= needle_len)
	{
		j = 0;
		while (haystack[i + j] == needle[j])
		{
			if (!needle[j + 1])
				return ((char*)(haystack + i));
			j++;
		}
		i++;
		len--;
	}
	return (NULL);
}
