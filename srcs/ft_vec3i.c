/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec3i.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 17:46:12 by lbenard           #+#    #+#             */
/*   Updated: 2018/12/21 22:06:22 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vec3i	ft_vec3i(int x, int y, int z)
{
	t_vec3i	retval;

	retval.x = x;
	retval.y = y;
	retval.z = z;
	return (retval);
}