/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-07-08 10:35:27 by samartin          #+#    #+#             */
/*   Updated: 2025-07-08 10:35:27 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template < typename Arr >
void iter(Arr* a, unsigned int len, void(*fun)(Arr&))
{
	if (a && fun)
	{
		for (unsigned int i = 0; i < len; i++)
			fun(a[i]);
	}
}

#endif