#include "stdafx.h"
#include "shapes.h"
#include "buildings.h"

void drawWilmore(void)
{
	/* East to West */
	glPushMatrix();
	glTranslatef(2.0, 0.0, -2.0);
	glScalef(3.5, 2.0, 3.0);
	drawCube(0, 3, 2, 1);
	drawCube(2, 3, 7, 6);
	drawCube(0, 4, 7, 3);
	drawCube(1, 2, 6, 5);
	drawCube(4, 5, 6, 7);
	drawCube(0, 1, 5, 4);
	glPopMatrix();

	/* North to South */
	glPushMatrix();
	glTranslatef(2.5, 0.0, -2.4);
	glScalef(2.7, 2.0, 3.8);
	drawCube(0, 3, 2, 1);
	drawCube(2, 3, 7, 6);
	drawCube(0, 4, 7, 3);
	drawCube(1, 2, 6, 5);
	drawCube(4, 5, 6, 7);
	drawCube(0, 1, 5, 4);
	glPopMatrix();
}

