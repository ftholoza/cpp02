/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 18:31:15 by ftholoza          #+#    #+#             */
/*   Updated: 2024/03/01 20:00:49 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	private:
		Fixed	const	x;
		Fixed	const	y;
	public:
		Point();
		~Point();
		Point(const float x, const float y);
		Point(Point const &to_copy);
		Point& operator=(Point &to_copy);
		Fixed	get_x(void);
		Fixed	get_y(void);
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif