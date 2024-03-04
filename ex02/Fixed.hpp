/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:46:31 by ftholoza          #+#    #+#             */
/*   Updated: 2024/03/04 20:12:03 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int _fixedpoint;
		static const int _fractional;
	public:
		Fixed();
		~Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed& to_copy);
		Fixed& operator=(const Fixed &to_copy);
		float			operator ++(int value);
		float			operator --(int value);
		float			operator ++();
		float			operator --();
		bool			operator!=(Fixed const &b) const;
		bool			operator<(Fixed const &b) const;
		bool			operator>(Fixed const &b) const;
		bool			operator>=(Fixed const &b) const;
		bool			operator<=(Fixed const &b) const;
		bool			operator==(Fixed const &b) const;
		Fixed			operator+(Fixed const &b) const;
		Fixed 			operator*(Fixed const &b) const;
		Fixed 			operator-(Fixed const &b) const;
		Fixed 			operator/(Fixed const &b) const;
		int		getRawBits(void) const;
		void	setRawBits(int const fixed_point);
		float	toFloat(void) const;
		int		toInt(void) const;
		static	const Fixed& min(const Fixed& a, const Fixed&b);
		static	const Fixed& max(const Fixed& a, const Fixed&b);
		static	Fixed& min(Fixed& a, Fixed&b);
		static	Fixed& max(Fixed& a, Fixed&b);
};

std::ostream&	operator<<(std::ostream& os, const Fixed&  _fixed);

#endif