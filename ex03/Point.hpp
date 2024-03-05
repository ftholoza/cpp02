/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesco <francesco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 18:31:15 by ftholoza          #+#    #+#             */
/*   Updated: 2024/03/05 03:00:28 by francesco        ###   ########.fr       */
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
		Fixed	get_x(void) const;
		Fixed	get_y(void) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

std::ostream &operator<<(std::ostream &o, const Point &obj);

#endif