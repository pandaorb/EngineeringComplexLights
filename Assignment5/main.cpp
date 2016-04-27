/*
* This is assignment 5 for COMP 5400. It is a 3D engineering campus populated 
* with 3D students and viewed with perspective projection. The student with 
* the backpack may be controlled with keyboard input:
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
* According to specifications, the spotlight will move as the student moves.
* The 'L' keystroke will cycle from spotlight only to extra light only to 
* both lights and then to no lights. I was unable to get the '+' and '-' 
* keystrokes to make any visible differences in brightness. 
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
	lightInit();
	programInit();
	glutMainLoop();
	return 0;
}