/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:30:25 by airodrig          #+#    #+#             */
/*   Updated: 2023/07/26 16:45:56 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed b( 10 );
	Fixed c( 42.42f );
	Fixed d( b );

	a = Fixed( 1234.4321f );

	std::cout<<"a is "<< a <<std::endl;
	std::cout<<"b is "<< b <<std::endl;
	std::cout<<"c is "<< c <<std::endl;
	std::cout<<"d is "<< d <<std::endl;

	std::cout<<"a is "<<a.toInt()<<" as integer"<<std::endl;
	std::cout<<"b is "<<b.toInt()<<" as integer"<<std::endl;
	std::cout<<"c is "<<c.toInt()<<" as integer"<<std::endl;
	std::cout<<"d is "<<d.toInt()<<" as integer"<<std::endl;

	return (0);
}