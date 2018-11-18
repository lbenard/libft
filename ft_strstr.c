/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 02:11:38 by lbenard           #+#    #+#             */
/*   Updated: 2018/11/18 04:39:10 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	needle_len;
	size_t	haystack_len;

	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char*)haystack);
	haystack_len = ft_strlen(haystack);
	while (haystack_len-- >= needle_len)
	{
		if (ft_memcmp(haystack, needle, needle_len) == 0)
			return ((char*)haystack);
		haystack++;
	}
	return (NULL);
}
