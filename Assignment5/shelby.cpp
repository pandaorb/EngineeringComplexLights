#include "stdafx.h"
#include "shapes.h"
#include "buildings.h"

void drawShelby(void)
{
	drawShelbyCentral();
	drawShelbyBridges();
	drawShelbyWings();
}

void drawShelbyCentral(void)
{
	glPushMatrix();
	glTranslatef(-12.0, 0.0, -5.0);
	glScalef(1.0, 2.0, 1.0);
	drawCube(0, 3, 2, 1);
	drawCube(2, 3, 7, 6);
	drawCube(0, 4, 7, 3);
	drawCube(1, 2, 6, 5);
	drawCube(4, 5, 6, 7);
	drawCube(0, 1, 5, 4);
	glPopMatrix();
	
}

void drawShelbyBridges(void)
{
	/* Left Bridge */
	glPushMatrix();
	glScalef(0.25, 0.25 * 2.0, 0.25);
	glTranslatef(-50.0, 0.0, -18.0);
	drawCube(0, 3, 2, 1);
	drawCube(2, 3, 7, 6);
	drawCube(0, 4, 7, 3);
	drawCube(1, 2, 6, 5);
	drawCube(4, 5, 6, 7);
	drawCube(0, 1, 5, 4);
	glPopMatrix();

	/* Right Bridge */
	glPushMatrix();
	glScalef(0.25, 0.25 * 2.0, 0.25);
	glTranslatef(-44.0, 0.0, -18.0);
	drawCube(0, 3, 2, 1);
	drawCube(2, 3, 7, 6);
	drawCube(0, 4, 7, 3);
	drawCube(1, 2, 6, 5);
	drawCube(4, 5, 6, 7);
	drawCube(0, 1, 5, 4);
	glPopMatrix();
}

void drawShelbyWings(void)
{
	/* West Wing */
	glPushMatrix();
	glTranslatef(-14.5, 0.0, -5.0);
	glScalef(2.0, 2.0, 1.0);
	drawCube(0, 3, 2, 1);
	drawCube(2, 3, 7, 6);
	drawCube(0, 4, 7, 3);
	drawCube(1, 2, 6, 5);
	drawCube(4, 5, 6, 7);
	drawCube(0, 1, 5, 4);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-14.5, 0.0, -5.0);
	glRotatef(-90.0, 0.0, 1.0, 0.0);
	glScalef(2.0, 2.0, 1.0);
	drawCube(0, 3, 2, 1);
	drawCube(2, 3, 7, 6);
	drawCube(0, 4, 7, 3);
	drawCube(1, 2, 6, 5);
	drawCube(4, 5, 6, 7);
	drawCube(0, 1, 5, 4);
	glPopMatrix();

	/* East Wing */
	glPushMatrix();
	glTranslatef(-10.5, 0.0, -5.0);
	glScalef(2.0, 2.0, 1.0);
	drawCube(0, 3, 2, 1);
	drawCube(2, 3, 7, 6);
	drawCube(0, 4, 7, 3);
	drawCube(1, 2, 6, 5);
	drawCube(4, 5, 6, 7);
	drawCube(0, 1, 5, 4);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-7.5, 0.0, -5.0);
	glRotatef(-90.0, 0.0, 1.0, 0.0);
	glScalef(2.0, 2.0, 1.0);
	drawCube(0, 3, 2, 1);
	drawCube(2, 3, 7, 6);
	drawCube(0, 4, 7, 3);
	drawCube(1, 2, 6, 5);
	drawCube(4, 5, 6, 7);
	drawCube(0, 1, 5, 4);
	glPopMatrix();
}