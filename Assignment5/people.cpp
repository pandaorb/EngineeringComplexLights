#include "stdafx.h"
#include <GL/glut.h>
#include "student.h"
#include <stdlib.h>
#include "people.h"



void drawPeople(void)
{
	GLfloat randomLocations[][3] = {
		{ -14.0, 0.0, -8.0 },
		{ -11.0, 0.0, -2.5 },
		{ 8.0, 0.0, -1.0 },
		{ -1.0, 0.0, 3.0 },
		{ -6.0, 0.0, -4.0 }
	};
	for (int i = 0; i < NUM_PEOPLE; i++)
	{
		/* Random Number Generation is producing valid numbers but
		 * causes program to freak out
		 */
		/*int randomLocationX = rand() % 15;
		randomLocationX = (randomLocationX % 2 == 0) ? randomLocationX : randomLocationX * -1;
		int randomLocationZ = rand() % 15;
		randomLocationZ = (randomLocationZ % 2 == 0) ? randomLocationZ : randomLocationZ * -1;*/
		
		glPushMatrix();
		glTranslatef(randomLocations[i][0], randomLocations[i][1], randomLocations[i][2]);
		drawPerson();
		glPopMatrix();
	}
}

void drawPerson()
{
	drawEntireHead();
	drawEntireBody();
	drawEntireLeg();
	drawEntireArm();
}

void drawEntireHead(void)
{
	drawHead(0, 3, 2, 1);
	drawHead(2, 3, 7, 6);
	drawHead(0, 4, 7, 3);
	drawHead(1, 2, 6, 5);
	drawHead(4, 5, 6, 7);
	drawHead(0, 1, 5, 4);
}

void drawEntireBody(void)
{
	drawBody(0, 3, 2, 1);
	drawBody(2, 3, 7, 6);
	drawBody(0, 4, 7, 3);
	drawBody(1, 2, 6, 5);
	drawBody(4, 5, 6, 7);
	drawBody(0, 1, 5, 4);
}

void drawEntireLeg(void)
{
	drawLegs(0, 3, 2, 1);
	drawLegs(2, 3, 7, 6);
	drawLegs(0, 4, 7, 3);
	drawLegs(1, 2, 6, 5);
	drawLegs(4, 5, 6, 7);
	drawLegs(0, 1, 5, 4);
}

void drawEntireArm(void)
{
	drawArms(0, 3, 2, 1);
	drawArms(2, 3, 7, 6);
	drawArms(0, 4, 7, 3);
	drawArms(1, 2, 6, 5);
	drawArms(4, 5, 6, 7);
	drawArms(0, 1, 5, 4);
}