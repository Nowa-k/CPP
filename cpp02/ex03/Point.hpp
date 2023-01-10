#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point {
	public :
		Point (); // Constructeur par défaut
		Point (float const f, float const s); 
        Point (const Point&); // constructeur de recopie
        ~Point (); // destructeur
        Point &operator=(const Point&); // surchqrge d'opérateur d'affectation

		Fixed getX( void ) const;
		Fixed getY( void ) const;
		void setX( const Fixed &f );
		void setY (const Fixed &f );

	private :
		const Fixed x;
		const Fixed y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif