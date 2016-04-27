#include "stdafx.h"
#include "shapes.h"
#include "buildings.h"

void drawGrounds(void)
{
	glColor3f(0.0, 1.0, 0.0);
	glPushMatrix();
	glTranslatef(-50.0, -100.0, -50.0);
	glScalef(100.0, 100.0, 200.0);
	drawCube(0, 3, 2, 1);
	drawCube(2, 3, 7, 6);
	drawCube(0, 4, 7, 3);
	drawCube(1, 2, 6, 5);
	drawCube(4, 5, 6, 7);
	drawCube(0, 1, 5, 4);
	glPopMatrix();
}
