/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-07-27 15:41:49 by samartin          #+#    #+#             */
/*   Updated: 2025-07-27 15:41:49 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include "Array.hpp"

int main()
{
	{
		Array<int> intArray(5);

		std::cout << std::endl;
		std::cout << TSTH << "=========================================" << TSTR << std::endl;
		std::cout << TSTH << "|   Array created with 5 default ints   |" << TSTR << std::endl;
		std::cout << TSTH << "=========================================" << TSTR << std::endl;
		for (unsigned int i = 0; i < intArray.size(); i++)
			std::cout << intArray[i] << ", ";
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << TSTH << "=========================================" << TSTR << std::endl;
		std::cout << TSTH << "|  Replacing contents with range 0 - 4  |" << TSTR << std::endl;
		std::cout << TSTH << "=========================================" << TSTR << std::endl;
		for (unsigned int i = 0; i < intArray.size(); i++)
			intArray[i] = i;
		for (unsigned int i = 0; i < intArray.size(); i++)
			std::cout << intArray[i] << ", ";
		std::cout << std::endl;
	}
	{
		Array<std::string> stringArray(5);
		std::cout << std::endl;
		std::cout << TSTH << "=========================================" << TSTR << std::endl;
		std::cout << TSTH << "|  Array created with 5 default strings |" << TSTR << std::endl;
		std::cout << TSTH << "=========================================" << TSTR << std::endl;
		for (unsigned int i = 0; i < stringArray.size(); i++)
			std::cout << "\"" << stringArray[i] << "\", ";
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << TSTH << "=========================================" << TSTR << std::endl;
		std::cout << TSTH << "|    Replacing contents with 5 \"Holi\"   |" << TSTR << std::endl;
		std::cout << TSTH << "=========================================" << TSTR << std::endl;
		for (unsigned int i = 0; i < stringArray.size(); i++)
			stringArray[i] = "Holi";
		for (unsigned int i = 0; i < stringArray.size(); i++)
			std::cout << stringArray[i] << ", ";
		std::cout << std::endl;
	}
	return (0);
}
