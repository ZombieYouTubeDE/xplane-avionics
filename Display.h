#include "DisplayElementFBO.h"

#include "GL/glew.h"
#include "GL/gl.h"
#include "GL/glu.h"
#include <list>

#pragma once
class Display
{
public:

	Display();
	Display(float x, float y, float width, float height);
	Display(float x, float y, float width, float height, int pixelsX, int pixelsY);
	~Display();

	void addElement(DisplayElement* de);

	void draw();
	void update();

private:

	float texX, texY, texW, texH;
	int resX, resY;

	GLint oldFramebuffer;
	GLuint framebuffer;
	GLint texture;

	std::list<DisplayElement*> elements;

	void init();

};

