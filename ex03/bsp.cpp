/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesco <francesco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 18:51:49 by ftholoza          #+#    #+#             */
/*   Updated: 2024/03/05 02:48:34 by francesco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"


bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	w1;
	Fixed	w2;
	
	w1 = (a.get_x() * (c.get_y() - a.get_y()) + (point.get_y() - a.get_y())
		* (c.get_x() - a.get_x()) - point.get_x() * (c.get_y() - a.get_y()))
		/ ((b.get_y() - a.get_y()) * (c.get_x() - a.get_x())
		- (b.get_x() - a.get_x()) * (c.get_y() - a.get_y()));
	w2 = (point.get_y() - a.get_y() - w1 * (b.get_y() - a.get_y()))
		/ (c.get_y() - a.get_y());

	return (w1 > 0 &&  w2 > 0 && (w1 + w2) < 1);
}