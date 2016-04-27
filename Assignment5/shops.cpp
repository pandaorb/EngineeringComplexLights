#include "stdafx.h"
#include "shapes.h"
#include "buildings.h"

void drawShops(void)
{
	drawShopsTop();
	drawShopsMiddle();
	drawShopsBottom();
	drawShopsEast();
}

void drawShopsTop(void)
{
	glPushMatrix();
	glTranslatef(-3.5, 0.0, -3.5);
	glScalef(2.0, 2.0, 0.85);
	drawCube(0, 3, 2, 1);
	drawCube(2, 3, 7, 6);
	drawCube(0, 4, 7, 3);
	drawCube(1, 2, 6, 5);
	drawCube(4, 5, 6, 7);
	drawCube(0, 1, 5, 4);
	glPopMatrix();
}

void drawShopsMiddle(void)
{
	glPushMatrix();
	glTranslatef(-3.5, 0.0, -2.0);
	glScalef(2.0, 2.0, 0.85);
	drawCube(0, 3, 2, 1);
	drawCube(2, 3, 7, 6);
	drawCube(0, 4, 7, 3);
	drawCube(1, 2, 6, 5);
	drawCube(4, 5, 6, 7);
	drawCube(0, 1, 5, 4);
	glPopMatrix();
}

void drawShopsBottom(void)
{
	glPushMatrix();
	glTranslatef(-3.5, 0.0, -0.5);
	glScalef(2.0, 2.0, 0.85);
	drawCube(0, 3, 2, 1);
	drawCube(2, 3, 7, 6);
	drawCube(0, 4, 7, 3);
	drawCube(1, 2, 6, 5);
	drawCube(4, 5, 6, 7);
	drawCube(0, 1, 5, 4);
	glPopMatrix();
}

void drawShopsEast(void)
{
	glPushMatrix();
	glTranslatef(-2.0, 0.0, 0.0);
	glRotatef(90.0, 0.0, 1.0, 0.0);
	glScalef(3.0, 2.0, 0.50);
	drawCube(0, 3, 2, 1);
	drawCube(2, 3, 7, 6);
	drawCube(0, 4, 7, 3);
	drawCube(1, 2, 6, 5);
	drawCube(4, 5, 6, 7);
	drawCube(0, 1, 5, 4);
	glPopMatrix();
}