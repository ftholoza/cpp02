/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 18:51:49 by ftholoza          #+#    #+#             */
/*   Updated: 2024/03/04 22:46:16 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"


bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed	w1;
	Fixed	w2;

	Point a1(a);
	Point b1(b);
	Point c1(c);
	Point point1(point);

	w1 = ((a1.get_x() * (c1.get_y() - a1.get_y())) + ((point1.get_y() - a1.get_y()) * (c1.get_x() - a1.get_x())) - (point1.get_x() * (c1.get_y() - a1.get_y())))
		/ (((b1.get_y() - a1.get_y()) * (c1.get_x() - a1.get_x())) - ((b1.get_x() - a1.get_x()) * (c1.get_y() - a1.get_y())));
	w2 = ((point1.get_y() - a1.get_y()) - w1 * (b1.get_y() - a1.get_y())) / (c1.get_y() - a1.get_y());
	if ((w1 >= Fixed(0)) && (w2 >= Fixed(0)) && (w1 + w2 < 1))
		return (true);
	else
		return (false);
}