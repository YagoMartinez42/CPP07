/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-25 13:54:45 by samartin          #+#    #+#             */
/*   Updated: 2025-06-25 13:54:45 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP

# ifndef TSTL
#  define TSTL "\e[32m"
# endif
# ifndef TSTH
#  define TSTH "\e[33m\e[44m"
# endif
# ifndef TSTR
#  define TSTR "\e[00m"
# endif

# include <iostream>
# include <fstream>

template <typename AVar>
void plusTwo(AVar &a)
{
	a += 2;
}

template <typename AVar>
void toFile(AVar &a)
{
	std::ofstream aFile;

	aFile.open ("fileout.txt", std::ios_base::app);
	aFile << a << std::endl;
	aFile.close();
}

#endif