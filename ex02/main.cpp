/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesco <francesco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:57:58 by ftholoza          #+#    #+#             */
/*   Updated: 2024/03/02 01:54:36 by francesco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*int	main(void)
{
	Fixed	a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);
	Fixed e(42);

	a = Fixed(1234.4321f);
	
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	a = e = c;
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	if (d != b)
		std::cout << "Test 1: !=: foire" << std::endl;
	else
		std::cout << "Test 1: !=: reussi" << std::endl;
	if (d != a)
		std::cout << "Test 2: !=: reussi" << std::endl;
	else
		std::cout << "Test 2: !=: foire" << std::endl;
	if (d == b)
		std::cout << "Test 1: ==: reussi" << std::endl;
	else
		std::cout << "Test 1: ==: foire" << std::endl;
	if (d == a)
		std::cout << "Test 2: ==: foire" << std::endl;
	else
		std::cout << "Test 2: ==: reussi" << std::endl;
	if (d > a)
		std::cout << "Test 2: >: foire" << std::endl;
	else
		std::cout << "Test 2: >: reussi" << std::endl;
	if (a > d)
		std::cout << "Test 2: >: reussi" << std::endl;
	else
		std::cout << "Test 2: >: foire" << std::endl;
	if (d < a)
		std::cout << "Test 2: <: reussi" << std::endl;
	else
		std::cout << "Test 2: <: foire" << std::endl;
	if (a < d)
		std::cout << "Test 2: <: foire" << std::endl;
	else
		std::cout << "Test 2: <: reussi" << std::endl;
	if (d >= a)
		std::cout << "Test 2: >=: foire" << std::endl;
	else
		std::cout << "Test 2: >=: reussi" << std::endl;
	if (a >= d)
		std::cout << "Test 2: >=: reussi" << std::endl;
	else
		std::cout << "Test 2: >=: foire" << std::endl;
	if (d >= b)
		std::cout << "Test 2: >=: reussi" << std::endl;
	else
		std::cout << "Test 2: >=: foire" << std::endl;
	if (d <= b)
		std::cout << "Test 2: <=: reussi" << std::endl;
	else
		std::cout << "Test 2: <=: foire" << std::endl;
	if (d <= a)
		std::cout << "Test 2: <=: reussi" << std::endl;
	else
		std::cout << "Test 2: <=: foire" << std::endl;
	
	Fixed f(10);
	Fixed g(20);
	Fixed	h;
	h = (f + g);
	std::cout << "10 + 20 = " << h << std::endl;
	h = f * g;
	std::cout << "10 * 20 = " << h << std::endl;
	h = f - g;
	std::cout << "10 - 20 = " << h << std::endl;
	h = g / f;
	std::cout << "20 / 10 = " << h << std::endl;
	float	i = 10;
	std::cout << "i = : " << i << std::endl;
	std::cout << "f = : " << f << std::endl;
	i++;
	f++;
	std::cout << "i++: 10 + 1 = " << i << std::endl;
	std::cout << "f++: 10 + 1 = " << f << std::endl;
	f--;
	i--;
	std::cout << "i: 11 - 1 = " << i << std::endl;
	std::cout << "f: 11 - 1 = " << f << std::endl;
	std::cout << "i = : " << i << std::endl;
	std::cout << "f = : " << f << std::endl;
	std::cout << "i--: " << i-- << std::endl;
	std::cout << "i = " << i << std::endl;
	std::cout << "f--: " << f-- << std::endl;
	std::cout << "f = " << f << std::endl;
	while (f > 0)
		f--;
	while (i > 0)
		i--;
	std::cout << "i = : " << i << std::endl;
	std::cout << "f = : " << f << std::endl;
	i = 10;
	f = 10;
	std::cout << "i = : " << i << std::endl;
	std::cout << "f = : " << f << std::endl;
	--f;
	--i;
	std::cout << "i = : " << i << std::endl;
	std::cout << "f = : " << f << std::endl;
	std::cout << "i = : " << --i << std::endl;
	std::cout << "f = : " << --f << std::endl;
	while (f > 0)
		--f;
	while (i > 0)
		--i;
	std::cout << "i = : " << i << std::endl;
	std::cout << "f = : " << f << std::endl;
	Fixed	x = 10;
	Fixed	y = 5;
	std::cout << "using max on x: " << x << " and y: " << y << " result = " << Fixed::max(x, y) << std::endl;
	std::cout << "using min on x: " << x << " and y: " << y << " result = " << Fixed::min(x, y) << std::endl;
	Fixed const	u(80);
	Fixed const	p(40);
	std::cout << "using max on u: " << u << " and p: " << p << " result = " << Fixed::max(u, p) << std::endl;
	std::cout << "using min on u: " << u << " and p: " << p << " result = " << Fixed::min(u, p) << std::endl;
	y = 10;
	std::cout << "using max on x: " << x << " and y: " << y << " result = " << Fixed::max(x, y) << std::endl;
	std::cout << "using min on x: " << x << " and y: " << y << " result = " << Fixed::min(x, y) << std::endl;
	return (0);
}*/
//SUBJECT MAIN

int	main(void)
{
	Fixed	a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	/*std::cout << b / 0 << std::endl;
	std::cout << b * 0 << std::endl;
	while (a != Fixed(15.8560f))
		a++;
	std::cout << a << std::endl;*/
	return (0);
}

/*int	main(void)
{
	Fixed a(5.5f);
	Fixed b(3.4f);

	std::cout << "a * b " << a * b << std::endl;
	std::cout << "a / b " << a / b << std::endl;
	std::cout << "a + b " << a + b << std::endl;
	std::cout << "a - b " << a - b << std::endl;
	std::cout << "a++ " << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << a * 1000000000 << std::endl;
	std::cout << a * -1 << std::endl;
	std::cout << a + -1 << std::endl;
}*/