/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 18:08:47 by ftholoza          #+#    #+#             */
/*   Updated: 2024/02/28 19:14:28 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::raw_bits = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixed_point = 0;
	
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed& to_copy)
{
	std::cout << "copy constructor called" << std::endl;
	*this = to_copy;
}

Fixed& Fixed::operator=(const Fixed& to_copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixed_point = to_copy.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed_point);
}

void	Fixed::setRawBits(int const fixed_point)
{
	_fixed_point = fixed_point;
}