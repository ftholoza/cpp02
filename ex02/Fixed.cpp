/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 18:08:47 by ftholoza          #+#    #+#             */
/*   Updated: 2024/05/29 20:18:13 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractional = 8;

/*------------------------------CONSTRUCTORS--------------------------------*/

Fixed::Fixed()
{
	this->setRawBits(0);
	return ;
}

Fixed::Fixed(const int value)
{
	this->setRawBits(value << this->_fractional);
	return ;
}

Fixed::Fixed(const float value)
{
 	this->setRawBits(roundf(value * (1 << this->_fractional)));
	return ;
}

Fixed::Fixed(Fixed const &to_copy)
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
		this->setRawBits(to_copy.getRawBits());
	return (*this);
}

/*-------------------------[!=|<|>|>=|<=|==]--------------------------------*/

std::ostream& operator<<(std::ostream& os, const Fixed&  _fixed)
{
	os << _fixed.toFloat();
	return (os);
}

bool	Fixed::operator!=(Fixed const &b) const
{
	if (this->toFloat() == b.toFloat())
		return (false);
	else
		return (true);
}

bool	Fixed::operator<(Fixed const &b) const
{
	if (this->toFloat() < b.toFloat())
		return (true);
	else
		return (false);
}

bool	Fixed::operator>(Fixed const &b) const
{
	if (this->toFloat() > b.toFloat())
		return (true);
	else
		return (false);
}

bool	Fixed::operator>=(Fixed const &b) const
{
	if (this->toFloat() >= b.toFloat())
		return (true);
	else
		return (false);
}

bool	Fixed::operator<=(Fixed const &b) const
{
		if (this->toFloat() <= b.toFloat())
			return (true);
		else	
			return (false);
}

bool	Fixed::operator==(Fixed const &b) const
{
	if (this->toFloat() == b.toFloat())
		return (true);
	else
		return (false);
}

/*------------------------------[+|*|-|/]----------------------------------*/

Fixed 	Fixed::operator+(Fixed const &b) const
{
	Fixed	res(this->toFloat() + b.toFloat());	
	return (res);
}

Fixed	Fixed::operator*(Fixed const &b) const
{
	Fixed	res(this->toFloat() * b.toFloat());
	return (res);
}

Fixed	Fixed::operator-(Fixed const &b) const
{
	Fixed	res(this->toFloat() - b.toFloat());
	return (res);
}

Fixed	Fixed::operator/(Fixed const &b) const
{
	if (b.toFloat() == 0)
	{
		std::cout << "Error: division by 0" << std::endl;
		return (0);
	}
	Fixed	res(this->toFloat() / b.toFloat());
	return (res);
}

/*-------------------------------INCREMENTQTORS-----------------------------*/

float	Fixed::operator ++(int value)
{
	int		i;
	(void)value;
	
	i = this->getRawBits();
	this->setRawBits((i + 1));
	return (float)((float)i / 256);  
}

float	Fixed::operator --(int value)
{
	int i;
	(void)value;
	
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
	this->setRawBits(i - 1);
	i--;
	return (float)((float)i / (1 << this->_fractional));
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
	return (this->getRawBits() / (float)(1 << this->_fractional));
}

int	Fixed::toInt(void) const
{
	return (this->getRawBits() >> this->_fractional);
}

/*--------------------------------MIN/MAX-----------------------------------*/

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


