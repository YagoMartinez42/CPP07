/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NumTemplates.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-07-08 10:05:58 by samartin          #+#    #+#             */
/*   Updated: 2025-07-08 10:05:58 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NUMTEMPLATES_HPP
# define NUMTEMPLATES_HPP

template < typename Num >
void swap(Num& a, Num& b)
{
	Num swp = a;

	a = b;
	b = swp;
}

template < typename Num >
Num& max(const Num& a, const Num& b)
{
	if (a > b)
		return (a);
	return(b);
}

template < typename Num >
Num& min(const Num& a, const Num& b)
{
	if (a < b)
		return (a);
	return(b);
}

#endif