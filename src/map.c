/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperesso <aperesso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/15 13:17:37 by aperesso          #+#    #+#             */
/*   Updated: 2018/01/11 20:21:27 by aperesso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/toolbox.h"

float	map(float x, float min, float max, float min_, float max_)
{
	return ((x - min) * (max_ - min_) / (max - min) + min_);
}
