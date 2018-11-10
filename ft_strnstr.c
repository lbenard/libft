/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 16:28:33 by lbenard           #+#    #+#             */
/*   Updated: 2018/11/09 16:38:01 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_len;

	if (!*needle)
		return ((char*)haystack);
	i = 0;
	needle_len = ft_strlen(needle);
	while (haystack[i] && i + needle_len < len + 1)
	{
		if (ft_memcmp(&haystack[i], needle, needle_len) == 0)
			return ((char*)&haystack[i]);
		i++;
	}
	return (NULL);
}
