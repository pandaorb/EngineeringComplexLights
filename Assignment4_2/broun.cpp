#include "stdafx.h"
#include "shapes.h"
#include "buildings.h"

void drawBroun(void)
{
	drawBrounSquare();
	drawBrounRectangle();
	drawBrounWeird();
}

void drawBrounSquare(void)
{
	glPushMatrix();
	glTranslatef(-9.0, 0.0, 3.5);
	glScalef(0.9, 1.0, 0.9);
	drawCube(0, 3, 2, 1);
	drawCube(2, 3, 7, 6);
	drawCube(0, 4, 7, 3);
	drawCube(1, 2, 6, 5);
	drawCube(4, 5, 6, 7);
	drawCube(0, 1, 5, 4);
	glPopMatrix();
}

void drawBrounRectangle(void)
{
	glPushMatrix();
	glTranslatef(-9.0, 0.0, 3.5);
	glRotatef(90.0, 0.0, 1.0, 0.0);
	glScalef(1.0, 1.0, 2);
	drawCube(0, 3, 2, 1);
	drawCube(2, 3, 7, 6);
	drawCube(0, 4, 7, 3);
	drawCube(1, 2, 6, 5);
	drawCube(4, 5, 6, 7);
	drawCube(0, 1, 5, 4);
	glPopMatrix();
}

void drawBrounWeird(void)
{
	glPushMatrix();
	glTranslatef(-7.5, 0.0, 3.5);
	glScalef(0.5, 1.0, 1.5);
	drawCube(0, 3, 2, 1);
	drawCube(2, 3, 7, 6);
	drawCube(0, 4, 7, 3);
	drawCube(1, 2, 6, 5);
	drawCube(4, 5, 6, 7);
	drawCube(0, 1, 5, 4);
	glPopMatrix();
}