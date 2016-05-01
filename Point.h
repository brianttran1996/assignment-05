/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Brian Tran <brianttran1996@csu.fullerton.edu>
* Released under the[MIT License](http://opensource.org/licenses/MIT)
*------------------------------------------------------------------------ - */

#ifndef POINT_H
#define POINT_H

class Point {
	
private:
		float x;
		float y;
	
public:
		Point(float x = 0, float y = 0);

		float getX() const;
		float getY() const;

		float distance(const Point & a) const;
};

#endif
