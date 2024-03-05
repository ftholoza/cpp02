/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 18:08:47 by ftholoza          #+#    #+#             */
/*   Updated: 2024/03/05 17:13:52 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractional = 8;

/*------------------------------CONSTRUCTORS--------------------------------*/

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->setRawBits(0);
	return ;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(value << this->_fractional);
	return ;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
 	this->setRawBits(roundf(value * (1 << this->_fractional)));
	return ;
}

Fixed::Fixed(Fixed const &to_copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = to_copy;
	return ;
}

/*---------------------------------DESTRUCTOR-------------------------------*/

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

/*---------------------------------OPERATORS--------------------------------*/

Fixed& Fixed::operator=(const Fixed &to_copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &to_copy)
		this->setRawBits(to_copy.getRawBits());
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed&  _fixed)
{
	os << _fixed.toFloat();
	return (os);
}

/*-------------------------------GETTERS/SETTERS----------------------------*/

int	Fixed::getRawBits(void) const
{
	return (this->_fixedpoint);
}

void	Fixed::setRawBits(int const fixed_point)
{
	this->_fixedpoint = fixed_point;
	return ;
}

/*-------------------------------CASTERS------------------------------------*/

float Fixed::toFloat(void) const
{
	return (this->getRawBits() / ((float)(1 << this->_fractional)));
}

int	Fixed::toInt(void) const
{
	return (this->getRawBits() >> this->_fractional);
}


