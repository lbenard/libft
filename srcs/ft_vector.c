/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 19:57:48 by lbenard           #+#    #+#             */
/*   Updated: 2019/02/18 18:44:13 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_vector	ft_vector(void)
{
	t_vector	ret;

	ret.capacity = 0;
	ret.size = 0;
	ret.data = NULL;
	return (ret);
}
