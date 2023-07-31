/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geudes <geudes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 09:24:40 by geudes            #+#    #+#             */
/*   Updated: 2023/07/31 11:13:44 by geudes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int value;
		static const int e = 8;
	public:
		Fixed();
		Fixed(Fixed const& to_cpy);
		Fixed(int const& to_cpy);
		Fixed(float const& to_cpy);
		~Fixed();
		Fixed& operator=(const Fixed& to_cpy);

		float toFloat(void) const;
		int toInt(void) const;

		int getRawBits(void) const;
		void setRawBits(int const raw);
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);
