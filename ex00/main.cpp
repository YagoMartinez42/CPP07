/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-25 13:54:58 by samartin          #+#    #+#             */
/*   Updated: 2025-06-25 13:54:58 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include "NumTemplates.hpp"

int main( void ) {
	std::cout << std::endl;
	std::cout << TSTH << "===========================" << TSTR << std::endl;
	std::cout << TSTH << "|    Test from subject    |" << TSTR << std::endl;
	std::cout << TSTH << "===========================" << TSTR << std::endl;
	{
		int a = 2;
		int b = 3;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	std::cout << std::endl;
	std::cout << TSTH << "===========================================================" << TSTR << std::endl;
	std::cout << TSTH << "|  When equals, second param is specified to be returned  |" << TSTR << std::endl;
	std::cout << TSTH << "===========================================================" << TSTR << std::endl;
	{
		float e = -4.05f;
		float f = -4.05f;
		std::cout << "e = " << e << ", f = " << f << std::endl;
		std::cout << "e address = " << &e << ", f address = " << &f << std::endl;
		std::cout << "min( a, b ) [address, value] = " << &::min( e, f ) << ", " << ::min( e, f ) << std::endl;
		std::cout << "max( a, b ) [address, value] = " << &::max( e, f ) << ", " << ::max( e, f ) << std::endl;
	}
	return 0;
}
