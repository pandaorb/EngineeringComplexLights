#include "stdafx.h"
#include "shapes.h"
#include "buildings.h"

void drawRoss(void)
{
	glPushMatrix();
	glTranslatef(5.0, 0.0, 2.0);
	glScalef(2.5, 1.0, 1.5);
	drawCube(0, 3, 2, 1);
	drawCube(2, 3, 7, 6);
	drawCube(0, 4, 7, 3);
	drawCube(1, 2, 6, 5);
	drawCube(4, 5, 6, 7);
	drawCube(0, 1, 5, 4);
	glPopMatrix();
}
