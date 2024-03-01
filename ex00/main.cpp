/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:57:58 by ftholoza          #+#    #+#             */
/*   Updated: 2024/02/28 19:13:36 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
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
	std::cout << "d: fixed point" << d.getRawBits() << std::endl;*/
	return (0);
}