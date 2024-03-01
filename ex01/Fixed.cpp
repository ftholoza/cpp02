/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 18:08:47 by ftholoza          #+#    #+#             */
/*   Updated: 2024/03/01 13:13:02 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractional = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixedpoint = 0;
	
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedpoint = value << this->_fractional;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
 	this->_fixedpoint = roundf(value * 256);
}
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& to_copy)
{
	std::cout << "copy constructor called" << std::endl;
	*this = to_copy;
}

Fixed& Fixed::operator=(const Fixed &to_copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &to_copy)
		this->_fixedpoint = to_copy.getRawBits();
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed&  _fixed)
{
	return os << _fixed.toFloat();
}

int	Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedpoint);
}

void	Fixed::setRawBits(int const fixed_point)
{
	_fixedpoint = fixed_point;
}

float Fixed::toFloat(void) const
{
	return (float)((float)this->_fixedpoint / 256);
}

int	Fixed::toInt(void) const
{
	return (this->_fixedpoint / 256);
}