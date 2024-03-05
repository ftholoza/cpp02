/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 18:51:49 by ftholoza          #+#    #+#             */
/*   Updated: 2024/03/05 18:20:02 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"


/*Fixed	area(Fixed x1, Fixed y1, Fixed x2, Fixed y2, Fixed x3, Fixed y3)
{
	Fixed area;

	area = (((x1 * (y2 - y3)) + (x2 * (y3 - y1)) + (x3 * (y1 - y2))) / 2);
	return (abs(area));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed area_abc;
	Fixed area_pbc;
	Fixed area_pac;
	Fixed area_pab;

	area_abc = area(a.get_x(), a.get_y(), b.get_x(), b.get_y(), c.get_x(), c.get_y());
	area_pbc = area(point.get_x(), point.get_y(), b.get_x(), b.get_y(), c.get_x(), c.get_y());
	area_pac = area(a.get_x(), a.get_y(), point.get_x(), point.get_y(), c.get_x(), c.get_y());
	area_pab = area(a.get_x(), a.get_y(), b.get_x(), b.get_y(), point.get_x(), point.get_y());
	return (area_abc == area_pbc + area_pac + area_pab);
}*/


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
	
	return (w1 > Fixed(0) &&  w2 > Fixed(0) && w1 + w2 < Fixed(1));
}