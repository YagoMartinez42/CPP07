/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-07-12 13:57:59 by samartin          #+#    #+#             */
/*   Updated: 2025-07-12 13:57:59 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template < typename T = long>
class Array
{
	public:
		Array() : items(NULL), len(0) {}
		Array(unsigned int n) : items(new T[n]), len(n) {}
		Array(const Array& orig)
		{
			this->len = orig.len;
			this->items = new T[orig.len];
			for (unsigned int i = 0; i < orig.len; i++)
				this->items[i] = orig.items[i];
		}
		~Array()
		{
			delete (this->items);
		}
		Array& Operator=(const Array& orig)
		{
			if (this != &orig)
			{
				if (this->items)
					delete (this->items);
				this->len = orig.len;
				this->items = new T[orig.len];
				for (unsigned int i = 0; i < orig.len; i++)
					this->items[i] = orig.items[i];
			}
			return (*this)
		}
	private:
		T items[];
		unsigned int len;
};

#endif