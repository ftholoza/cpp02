/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 18:51:49 by ftholoza          #+#    #+#             */
/*   Updated: 2024/03/01 20:12:12 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

Fixed	area(Fixed x1, Fixed y1, Fixed x2, Fixed y2, Fixed x3, Fixed y3)
{
	Fixed area;

	std::cout << "x1: " << x1 << " y1:" << y1 << " x: " << x2 << " y2: " << y2 << " x3: " << x3 << "  y3: " << y3 << std::endl;
	area = (((x1 * (y2 - y3)) + (x2 * (y3 - y1)) + (x3 * (y1 - y2))) / 2);
	return (abs(area.toInt()));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed area_abc;
	Fixed area_pbc;
	Fixed area_pac;
	Fixed area_pab;

	Point a1(a);
	Point b1(b);
	Point c1(c);
	Point point1(point);

	area_abc = area(a1.get_x(), a1.get_y(), b1.get_x(), b1.get_y(), c1.get_x(), c1.get_y());
	area_pbc = area(point1.get_x(), point1.get_y(), b1.get_x(), b1.get_y(), c1.get_x(), c1.get_y());
	area_pac = area(a1.get_x(), a1.get_y(), point1.get_x(), point1.get_y(), c1.get_x(), c1.get_y());
	area_pab = area(a1.get_x(), a1.get_y(), b1.get_x(), b1.get_y(), point1.get_x(), point1.get_y());

	std::cout << area_abc << std::endl;
	std::cout << area_pbc << std::endl;
	std::cout << area_pac << std::endl;
	std::cout << area_pab << std::endl;
	return (area_abc == area_pbc + area_pac + area_pab);
}