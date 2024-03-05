/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:57:58 by ftholoza          #+#    #+#             */
/*   Updated: 2024/03/05 17:09:29 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed	a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);
	//Fixed e(42);

	a = Fixed(1234.4321f);
	
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	//a = e = c;
	//std::cout << "a is " << a << std::endl;
	//std::cout << "b is " << b << std::endl;
	//std::cout << "c is " << c << std::endl;
	//std::cout << "d is " << d << std::endl;
	return (0);
}

/*int	main(void)
{
	Fixed	a;
	Fixed	b(a);
	Fixed	c;
	
	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	/*std::cout << "My tests:" << std::endl;
	Fixed d;
	d.setRawBits(42);
	Fixed e = d;
	Fixed f;
	f.setRawBits(32);
	std::cout << "f: fixed point\n" << f.getRawBits() << std::endl;
	std::cout << "d: fixed point\n" << d.getRawBits() << std::endl;
	std::cout << "e: fixed point\n" << e.getRawBits() << std::endl;
	
	f = d = f;
	std::cout << "f: fixed point" << f.getRawBits() << std::endl;
	std::cout << "d: fixed point" << d.getRawBits() << std::endl;
	f = d = e;
	std::cout << "f: fixed point" << f.getRawBits() << std::endl;
	std::cout << "d: fixed point" << d.getRawBits() << std::endl;
	return (0);
}*/