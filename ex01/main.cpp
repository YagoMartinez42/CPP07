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
#include "Iter.hpp"

int main()
{
	std::cout << std::endl;
	std::cout << TSTH << "======================================" << TSTR << std::endl;
	std::cout << TSTH << "|  Iterating int array with plusTwo  |" << TSTR << std::endl;
	std::cout << TSTH << "======================================" << TSTR << std::endl;
	{
		int intArr[] = {1, 2, -1, 4, -8, 0};
		iter(intArr, 6, plusTwo);
		for (int i = 0; i < 6; i++)
			std::cout << intArr[i] << ", ";
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << TSTH << "======================================" << TSTR << std::endl;
	std::cout << TSTH << "|  Iterating str array with plusTwo  |" << TSTR << std::endl;
	std::cout << TSTH << "|  += operator is defined for string |" << TSTR << std::endl;
	std::cout << TSTH << "|   It doesn't raise an exception,   |" << TSTR << std::endl;
	std::cout << TSTH << "|          but does nothing.         |" << TSTR << std::endl;
	std::cout << TSTH << "======================================" << TSTR << std::endl;
	{
		std::string strArr[] = {"Hola", "Mundo"};
		try
		{
			iter(strArr, 2, plusTwo);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		for (int i = 0; i < 2; i++)
			std::cout << strArr[i] << ", ";
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << TSTH << "=========================================" << TSTR << std::endl;
	std::cout << TSTH << "|  Printing string array with toFile()  |" << TSTR << std::endl;
	std::cout << TSTH << "=========================================" << TSTR << std::endl;
	{
		std::string strArr[] = {"Hello", "There", "General", "Kenobi"};
		iter(strArr, 4, toFile);
	}
	std::cout << std::endl;
	std::cout << TSTH << "==============================================" << TSTR << std::endl;
	std::cout << TSTH << "|  And adding some double floats to the end  |" << TSTR << std::endl;
	std::cout << TSTH << "==============================================" << TSTR << std::endl;
	{
		double doubArr[] = {1.0, -0.01, 5.555, 33.33333333};
		iter(doubArr, 4, toFile);
	}
	return (0);
}
