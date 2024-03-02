/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesco <francesco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 18:08:47 by ftholoza          #+#    #+#             */
/*   Updated: 2024/03/02 02:04:38 by francesco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractional = 8;

/*------------------------------CONSTRUCTORS--------------------------------*/

Fixed::Fixed()
{
	this->_fixedpoint = 0;
	return ;
}

Fixed::Fixed(const int value)
{
	this->_fixedpoint = value << this->_fractional;
	return ;
}

Fixed::Fixed(const float value)
{
 	this->_fixedpoint = roundf(value * (1 << this->_fractional));
	return ;
}

Fixed::Fixed(const Fixed& to_copy)
{
	*this = to_copy;
	return ;
}

/*---------------------------------DESTRUCTOR-------------------------------*/

Fixed::~Fixed()
{
	return ;
}

/*---------------------------------OPERATORS--------------------------------*/

Fixed& Fixed::operator=(const Fixed &to_copy)
{
	if (this != &to_copy)
		this->_fixedpoint = to_copy.getRawBits();
	return (*this);
}

/*-------------------------[!=|<|>|>=|<=|==]--------------------------------*/

std::ostream& operator<<(std::ostream& os, const Fixed&  _fixed)
{
	return os << _fixed.toFloat();
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

/*------------------------------[+|*|-|/]----------------------------------*/

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
	float div = ((a.toFloat()) / (b.toFloat()));
	res.setRawBits(div * (1 << 8));
	return (res);
}

/*-------------------------------INCREMENTQTORS-----------------------------*/

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

/*-------------------------------GETTERS/SETTERS----------------------------*/

int	Fixed::getRawBits(void) const
{
	return (this->_fixedpoint);
}

void	Fixed::setRawBits(int const fixed_point)
{
	_fixedpoint = fixed_point;
	return ;
}

/*-------------------------------CASTERS------------------------------------*/

float Fixed::toFloat(void) const
{
	return (float)((float)this->_fixedpoint / (1 << this->_fractional));
}

int	Fixed::toInt(void) const
{
	return (this->_fixedpoint / 256);
}

/*--------------------------------MIN/MAX/ABS-------------------------------*/

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

Fixed	Fixed::abs(Fixed x)
{
	if (x < 0)
		return (x * -1);
	else
		return (x);
}
