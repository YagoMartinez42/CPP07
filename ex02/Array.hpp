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
		Array() : len(0), items(NULL) {}
		Array(const unsigned int n) : len(n), items(new T[n]) {}
		Array(const Array& orig) : len(orig.len), items(new T[orig.len])
		{
			for (unsigned int i = 0; i < orig.len; i++)
				this->items[i] = orig.items[i];
		}
		~Array()
		{
			if (this->items != NULL)
			{
				delete[] this->items;
				this->items = NULL;
			}
		}
		Array& operator=(const Array& orig)
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
			return (*this);
		}
		T& operator[](unsigned int i) 
		{
			if (i < this->len)
				return (this->items[i]);
			else
				throw (std::out_of_range("Index out of range"));
		}
		unsigned int size() const
		{
			return this->len;
		}
	private:
		unsigned int len;
		T* items;
};

#endif