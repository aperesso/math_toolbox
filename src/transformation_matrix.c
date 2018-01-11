/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transformation_matrix.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperesso <aperesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 23:12:00 by aperesso          #+#    #+#             */
/*   Updated: 2018/01/11 20:27:34 by aperesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/toolbox.h"

t_matrix	create_transformation_matrix(t_vec3 translation, float rx, float ry,
				float rz, float sx, float sy, float sz)
{
	t_matrix	mat;

	mat = scale(sx, sy, sz);
	mat = mult_matrix(rotatex(rx), mat);
	mat = mult_matrix(rotatey(ry), mat);
	mat = mult_matrix(rotatez(rz), mat);
	mat = mult_matrix(translate(translation.x, translation.y, translation.z),
		mat);
	return (mat);
}
