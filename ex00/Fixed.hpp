/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:46:31 by ftholoza          #+#    #+#             */
/*   Updated: 2024/02/28 18:10:36 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed
{
	private:
		int _fixed_point;
		static const int raw_bits;
	public:
		Fixed();
		Fixed(Fixed& to_copy);
		Fixed& operator=(const Fixed& to_copy);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const fixed_point);
};

#endif