/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geudes <geudes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 09:24:40 by geudes            #+#    #+#             */
/*   Updated: 2023/07/31 20:14:14 by geudes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int value;
		static const int e = 8;
	public:
		Fixed();
		Fixed(Fixed const& to_cpy);
		Fixed(int const& to_cpy);
		~Fixed();
		Fixed& operator=(const Fixed& to_cpy);

		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif
