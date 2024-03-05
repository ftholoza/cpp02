/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesco <francesco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 18:36:39 by ftholoza          #+#    #+#             */
/*   Updated: 2024/03/05 03:02:47 by francesco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point(): x(0), y(0)
{	
	return ;
}

Point::~Point()
{
	return ;
}

Point::Point(const float x, const float y): x(x), y(y)
{
	return ;
}

Point::Point(Point const & to_copy): x(to_copy.x), y(to_copy.y)
{
	return ;
}

Point& Point::operator=(Point &to_copy)
{	
	return (to_copy);
}

Fixed	Point::get_x(void) const
{
	return (this->x);
}

Fixed	Point::get_y(void) const
{
	return (this->y);
}
