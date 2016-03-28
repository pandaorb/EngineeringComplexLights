#include "stdafx.h"
#include "shapes.h"
#include "buildings.h"

void drawDavis(void)
{
	glPushMatrix();
	glTranslatef(11.0, 0.0, -3.5);
	glScalef(1.0, 1.0, 3.0);
	drawCube(0, 3, 2, 1);
	drawCube(2, 3, 7, 6);
	drawCube(0, 4, 7, 3);
	drawCube(1, 2, 6, 5);
	drawCube(4, 5, 6, 7);
	drawCube(0, 1, 5, 4);
	glPopMatrix();
}
