/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Brian Tran <brianttran1996@csu.fullerton.edu>
* Released under the[MIT License](http://opensource.org/licenses/MIT)
*------------------------------------------------------------------------ - */

#ifndef SHAPES_H
#define SHAPES_H

#include "point.h"

class Shape {
	public {
		virtual ~Shape() {}
		virtual bool contains(const Point & p) const = 0;
	}
};


class Rectangle : public Shape {
	private {
		Point center;
		float dx;
		float dy;
	}

	public {
		Rectangle(Point center = Point(), float dx = 0, float dy = 0);

		bool contains(const Point & p) const;
	}
};

class Square : public Rectangle {
	public {
		Square(Point center = Point(), float side = 0);
	}
};

class Ellipse : public Shape {
	private {
		Point f1;
		Point f2;
		float radius;
	}

	public {
		Ellipse(Point f1 = Point(), Point f2 = Point(), float radius = 0);

		bool contains(const Point & p) const;
	}
};

class Circle : public Ellipse {
	public {
		Circle(Point center = Point(), float radius = 0);
	}
};

#endif