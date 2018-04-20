#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include <absShape.hpp>
#include <mementoRectangle.hpp>

class Rectangle : public AbsShape {
public:
	Rectangle(std::vector<int> points, int color);
	Rectangle(int x, int y, int width, int height);

	// AbsShape methods
	virtual void setMemento(IMemento * m) override;
	virtual IMemento * createMemento() override;
	virtual void draw() override;
	virtual IShape * clone() override;
};

#endif