/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:57:58 by ftholoza          #+#    #+#             */
/*   Updated: 2024/03/05 18:47:17 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include "iostream"
#include "iomanip"

/*int main()
{
	Point	a(0, 0);
	Point	b(10, 30);
	Point	c(0, 10);
	Point	point(10, 15);
	Point	point2(1, 10);
	Point	point3(0, 0);
	Point	point4(1, 10);
	
	std::cout << a.get_x() << " " << a.get_y() << std::endl;
	std::cout << b.get_x() << " " << b.get_y() << std::endl;
	std::cout << c.get_x() << " " << c.get_y() << std::endl;	

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
}*/

int main()
{
	Point	a(-1, -1);
	Point	b(-9.8f, -4.2f);
	Point	c(-6.4f, 3.4f);
	Point	point(-5.7f, -0.2f);
	Point	point2(-5.5f, -3);
	Point	point3(-8.6f, -0.6f);
	Point	point4(-9, -3.3f);
	Point	point5(-6.3f, 3);
	Point	point6(-3.6f, 1.2f);
	
	std::cout << a.get_x() << " " << a.get_y() << std::endl;
	std::cout << b.get_x() << " " << b.get_y() << std::endl;
	std::cout << c.get_x() << " " << c.get_y() << std::endl;	

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
	std::cout << "Point5: x: " << point5.get_x() << " y: " << point5.get_y() << std::endl;
	if (bsp(a, b, c, point5))
		std::cout << " is inside" << std::endl;
	else
		std::cout << " is not inside" << std::endl;
	std::cout << "Point6: x: " << point6.get_x() << " y: " << point6.get_y() << std::endl;
	if (bsp(a, b, c, point6))
		std::cout << " is inside" << std::endl;
	else
		std::cout << " is not inside" << std::endl;
	
   return 0;
}

/*bool	bsp(Point const a, Point const b, Point const c, Point const point);

int	main(void) {
	const Fixed	a(Fixed(5.05f) * Fixed(2));
	const Fixed	b(Fixed(3.12f) - Fixed(-12));

	Point	p01;
	Point	p02(5.2f, 1.3f);
	Point	p03(a.toFloat(), b.toFloat());
	Point	p04 = p03;

	Point	p11(5.0f, 2.0f);
	Point	p12(-4.2f, -3.3f);
	Point	p13(0.5f, 5.3f);
	Point	p14(1.1f, 1.1f);

	Point	p21(-4.64f, 11.7f);
	Point	p22(-16.48f, -2.89f);
	Point	p23(11.43f, -7.2f);
	Point	p24(8.18f, 7.01f);

	Point	p31(-20.0f, -0.05f);
	Point	p32(20.0f, -0.05f);
	Point	p33(0.0f, 20.0f);
	Point	p34;

	Point	p41(-20.0f, 0);
	Point	p42(20.0f, 0);
	Point	p43(0.0f, 20.0f);
	Point	p44;

	std::cout << "p01: " << p01 << std::endl;
	std::cout << "p02: " << p02 << std::endl;
	std::cout << "p03: " << p03 << std::endl;
	std::cout << "p04: " << p04 << std::endl;
	if (bsp(p01, p02, p03, p04))
		std::cout << "\e[0;32mp04 is in triangle p01, p02, p03\e[0m" << std::endl;
	else
		std::cout << "\e[0;31mp04 is not in triangle p01, p02, p03\e[0m" << std::endl;

	std::cout << "p11: " << p11 << std::endl;
	std::cout << "p12: " << p12 << std::endl;
	std::cout << "p13: " << p13 << std::endl;
	std::cout << "p14: " << p14 << std::endl;	
	if (bsp(p11, p12, p13, p14))
		std::cout << "\e[0;32mp14 is in triangle p11, p12, p13\e[0m" << std::endl;
	else
		std::cout << "\e[0;31mp14 is not in triangle p11, p12, p13\e[0m" << std::endl;

	std::cout << "p21: " << p21 << std::endl;
	std::cout << "p22: " << p22 << std::endl;
	std::cout << "p23: " << p23 << std::endl;
	std::cout << "p24: " << p24 << std::endl;	
	if (bsp(p21, p22, p23, p24))
		std::cout << "\e[0;32mp24 is in triangle p21, p22, p23\e[0m" << std::endl;
	else
		std::cout << "\e[0;31mp24 is not in triangle p21, p22, p23\e[0m" << std::endl;

	std::cout << "p31: " << p31 << std::endl;
	std::cout << "p32: " << p32 << std::endl;
	std::cout << "p33: " << p33 << std::endl;
	std::cout << "p34: " << p34 << std::endl;	
	if (bsp(p31, p32, p33, p34))
		std::cout << "\e[0;32mp34 is in triangle p31, p32, p33\e[0m" << std::endl;
	else
		std::cout << "\e[0;31mp34 is not in triangle p31, p32, p33\e[0m" << std::endl;

	std::cout << "p41: " << p41 << std::endl;
	std::cout << "p42: " << p42 << std::endl;
	std::cout << "p43: " << p43 << std::endl;
	std::cout << "p44: " << p44 << std::endl;	
	if (bsp(p41, p42, p43, p44))
		std::cout << "\e[0;32mp44 is in triangle p41, p42, p43\e[0m" << std::endl;
	else
		std::cout << "\e[0;31mp44 is not in triangle p41, p42, p43\e[0m" << std::endl;
	return(0);
}*/
