/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mat3_x_vec3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 23:39:33 by lbenard           #+#    #+#             */
/*   Updated: 2018/11/29 23:40:06 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vec3f	ft_mat3_x_vec3(t_mat3 a, t_vec3f b)
{
	t_vec3f	result;

	result.x = a.m[0][0] * b.x +
		a.m[0][1] * b.y +
		a.m[0][2] * b.z;
	result.y = a.m[1][0] * b.x +
		a.m[1][1] * b.y +
		a.m[1][2] * b.z;
	result.z = a.m[2][0] * b.x +
		a.m[2][1] * b.y +
		a.m[2][2] * b.z;
	return (result);
}
