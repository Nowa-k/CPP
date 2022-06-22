/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleferra <aleferra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 12:32:33 by aleferra          #+#    #+#             */
/*   Updated: 2022/06/22 17:15:08 by aleferra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# define BLK "\e[0;30m"
# define RED "\e[0;31m"
# define GRN "\e[0;32m"
# define WHT "\e[0;37m"

class Fixed {

public :
	Fixed();
	Fixed ( const Fixed &f);
	Fixed &operator= (const Fixed &);
	~Fixed();

	int getRawBits ( void ) const;
	void setRawBits ( int const raw );

private :
	int	virgulefixe;
	static const int	partfract = 8;
	
};

#endif
