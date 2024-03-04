/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:57:58 by ftholoza          #+#    #+#             */
/*   Updated: 2024/03/04 22:47:48 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main()
{
	Point	a(0, 0);
	Point	b(10, 30);
	Point	c(20,0);
	Point	point(10, 15);
	Point	point2(1, 10);
	Point	point3(0.245f, 0.34);
	Point	point4(0.2f, 0.34f);

	std::cout << "Point: x: " << point.get_x() << " y: " << point.get_y() << std::endl;
	if (bsp(a, b, c, point))
		std::cout << " is inside" << std::endl;
	else
		std::cout << " is not inside" << std::endl;
	std::cout << "Point2: x: " << point2.get_x() << " y: " << point2.get_y() << std::endl;
	if (bsp(a, b, c, point2))
		std::cout << " is inside" << std::endl;
	else
		std::cout << " is not inside" << std::endl;
	std::cout << "Point3: x: " << point3.get_x() << " y: " << point3.get_y() << std::endl;
	if (bsp(a, b, c, point3))
		std::cout << " is inside" << std::endl;
	else
		std::cout << " is not inside" << std::endl;
	std::cout << "Point4: x: " << point4.get_x() << " y: " << point4.get_y() << std::endl;
	if (bsp(a, b, c, point4))
		std::cout << " is inside" << std::endl;
	else
		std::cout << " is not inside" << std::endl;
   return 0;
}