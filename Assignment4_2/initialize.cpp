#include "stdafx.h"
#include <GL/glut.h>

int viewInit(void)
{
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(800, 800);
	glutInitWindowPosition(0, 0); //This is top left in windows
	glutCreateWindow("COMP-5400 Assignment 4");
	return 0;
}

int programInit(void)
{
	/* set background color to black */
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glShadeModel(GL_SMOOTH);

	/* set buildings to purple */
	glColor3f(0.5, 0.0, 0.5);

	/* set up camera */
	glMatrixMode(GL_PROJECTION);

	//http://stackoverflow.com/questions/628796/what-does-glloadidentity-do-in-opengl
	glLoadIdentity();

	/* sets perspective projection parameters */
	gluPerspective(90.0, 1.0, 5.0, 500.0);
	glMatrixMode(GL_MODELVIEW);
	return 0;
}