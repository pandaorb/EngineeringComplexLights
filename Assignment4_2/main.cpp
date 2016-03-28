/*
* This is assignment 4 for COMP 5400. It is a 3D engineering campus populated 
* with 3D students and viewed with perspective projection. The student with 
* the green backpack may be controlled with keyboard input:
*		UP		moves student forward
*		RIGHT	rotates student clockwise
*		LEFT	rotates student counter-clockwise
* Clicking the right mouse button will spin the world about the y-axis.
* Keystrokes will move the camera as follows:
*		X		moves camera in positive x direction
*		x		moves camera in negative x direction
*		Y		moves camera in positive y direction
*		y		moves camera in negative y direction
*		Z		moves camera in positive Z direction
*		z		moves camera in negative z direction
* As allowed by specifications, the student can move through other objects
* like a ghost. 
*/

#include "stdafx.h"
#include <GL/glut.h>
#include "initialize.h"
#include "student.h"
#include "buildings.h"
#include "animation.h"

int _tmain(int argc, char** argv)
{
	glutInit(&argc, argv);
	viewInit();
	glutReshapeFunc(myReshape);
	glutDisplayFunc(display);
	glutMouseFunc(mouse);
	glutKeyboardFunc(keys);
	glutSpecialFunc(keyboard);
	glEnable(GL_DEPTH_TEST); /* Enable hidden--surface--removal */
	programInit();
	glutMainLoop();
	return 0;
}