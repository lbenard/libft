/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mat4_view.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 18:25:31 by lbenard           #+#    #+#             */
/*   Updated: 2018/12/21 22:06:57 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <math.h>

t_mat4	ft_mat4_view(t_vec3f position, t_vec2f rotation)
{
	float	cos_pitch;
	float	sin_pitch;
	float	cos_yaw;
	float	sin_yaw;
	t_vec3f	xaxis;
	t_vec3f	yaxis;
	t_vec3f	zaxis;

	cos_pitch = cos(rotation.x);
	sin_pitch = sin(rotation.x);
	cos_yaw = cos(rotation.y);
	sin_yaw = sin(rotation.y);
	xaxis = ft_vec3f(cos_yaw, 0, -sin_yaw);
	yaxis = ft_vec3f(sin_yaw * sin_pitch, cos_pitch, cos_yaw * sin_pitch);
	zaxis = ft_vec3f(sin_yaw * cos_pitch, -sin_pitch, cos_pitch * cos_yaw);
	return ((t_mat4)(struct s_mat4_data)
	{
		xaxis.x, yaxis.x, zaxis.x, 0.0f,
		xaxis.y, yaxis.y, zaxis.y, 0.0f,
		xaxis.z, yaxis.z, zaxis.z, 0.0f,
		-ft_vec3f_dot(xaxis, position),
		-ft_vec3f_dot(yaxis, position), 
		-ft_vec3f_dot(zaxis, position), 1.0f
	});
}
