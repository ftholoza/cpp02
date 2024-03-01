/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 18:36:39 by ftholoza          #+#    #+#             */
/*   Updated: 2024/03/01 20:01:14 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point()
{	
}
Point::~Point()
{
}

Point::Point(const float x, const float y): x(x), y(y)
{
}

Point::Point(Point const & to_copy): x(to_copy.x), y(to_copy.y)
{
}

Point& Point::operator=(Point &to_copy)
{	
	return (to_copy);
}

Fixed	Point::get_x(void) 
{
	return (this->x);
}

Fixed	Point::get_y(void)
{
	return (this->y);
}