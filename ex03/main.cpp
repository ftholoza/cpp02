/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:57:58 by ftholoza          #+#    #+#             */
/*   Updated: 2024/03/01 20:12:56 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main()
{
	Point	a(0, 0);
	Point	b(10, 30);
	Point	c(20,0);
	Point	point(10, 30);

	if (bsp(a, b, c, point))
		std::cout << "is inside" << std::endl;
	else
		std::cout << "is not inside" << std::endl;
   return 0;
}