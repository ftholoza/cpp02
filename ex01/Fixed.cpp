/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesco <francesco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 18:08:47 by ftholoza          #+#    #+#             */
/*   Updated: 2024/03/02 01:29:15 by francesco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractional = 8;

/*-----------------------------CONSTRUCTORS--------------------------------*/

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixedpoint = 0;
	return ;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedpoint = value << this->_fractional;
	return ;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
 	this->_fixedpoint = roundf(value * (1 << this->_fractional));
	return ;
}

Fixed::Fixed(const Fixed& to_copy)
{
	std::cout << "copy constructor called" << std::endl;
	*this = to_copy;
	return ;
}

/*---------------------------DESTRUCTOR-----------------------------------*/

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

/*---------------------------OPERATORS-----------------------------------*/

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

/*-------------------------GETTERS / SETTERS-----------------------------*/

int	Fixed::getRawBits(void) const
{
	return (this->_fixedpoint);
}

void	Fixed::setRawBits(int const fixed_point)
{
	_fixedpoint = fixed_point;
}

/*-----------------------------CASTERS----------------------------------*/

float Fixed::toFloat(void) const
{
	return (float)((float)this->_fixedpoint / (1 << this->_fractional));
}

int	Fixed::toInt(void) const
{
	return (this->_fixedpoint >> this->_fractional);
}