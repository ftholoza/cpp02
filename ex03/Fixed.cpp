/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 18:08:47 by ftholoza          #+#    #+#             */
/*   Updated: 2024/03/01 18:05:04 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractional = 8;

Fixed::Fixed()
{
	this->_fixedpoint = 0;
}

Fixed::Fixed(const int value)
{
	this->_fixedpoint = value << this->_fractional;
}

Fixed::Fixed(const float value)
{
 	this->_fixedpoint = roundf(value * 256);
}
Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed& to_copy)
{
	*this = to_copy;
}

Fixed& Fixed::operator=(const Fixed &to_copy)
{
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

bool	operator!=(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() == b.getRawBits())
		return (false);
	else
		return (true);
}

bool			operator<(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (true);
	else
		return (false);
}

bool			operator>(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (true);
	else
		return (false);
}

bool			operator>=(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() >= b.getRawBits())
		return (true);
	else
		return (false);
}

bool			operator<=(const Fixed &a, const Fixed &b)
{
		if (a.getRawBits() <= b.getRawBits())
			return (true);
		else	
			return (false);
}

bool			operator==(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() == b.getRawBits())
		return (true);
	else
		return (false);
}

Fixed 			operator+(const Fixed &a, const Fixed &b)
{
	Fixed	res;
	res.setRawBits(a.getRawBits() + b.getRawBits());
	return (res);
}

Fixed 			operator*(const Fixed &a, const Fixed &b)
{
	Fixed	res;
	float		div = ((a.toFloat()) * (b.toFloat()));
	res.setRawBits(div * 256);
	return (res);
}

Fixed 			operator-(const Fixed &a, const Fixed &b)
{
	Fixed	res;
	res.setRawBits(a.getRawBits() - b.getRawBits());
	return (res);
}

Fixed			operator/(const Fixed &a, const Fixed &b)
{
	Fixed	res;
	if (b == 0)
		std::cout << "undefiend result" << std::endl;
	float div = ((a.toFloat()) / (b.toFloat()));
	res.setRawBits(div * 256);
	return (res);
}

float	Fixed::operator ++(int value)
{
	int		i;
	
	i = this->getRawBits();
	this->setRawBits((i + 1));
	return (float)((float)i / 256);  
}

float	Fixed::operator --(int value)
{
	int i;
	
	i = this->getRawBits();
	this->setRawBits((i - 1));
	return (float)((float)i / 256);
}

float	Fixed::operator ++()
{
	int		i;
	
	i = this->getRawBits();
	this->setRawBits((i + 1));
	i++;
	return  (float)((float)i / 256);
}

float	Fixed::operator --()
{
	int i;
	
	i = this->getRawBits();
	this->setRawBits((i - 1) * 256);
	return (float)((float)i / 256);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed&b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	else	
		return (b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed&b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	else
		return (b);
}

Fixed&	Fixed::min(Fixed& a, Fixed&b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	else
		return (b);
}

Fixed& Fixed::max(Fixed& a, Fixed&b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	else
		return (b);
}

