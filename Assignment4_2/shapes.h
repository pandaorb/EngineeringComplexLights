#include <GL/glut.h>

#define FIRST_ELEMENT	0
#define SECOND_ELEMENT	1
#define	THIRD_ELEMENT	2

typedef GLfloat tuple[][3];
//void drawPolygon(tuple points);

void drawCube(int a, int b, int c, int d);
void drawPolygon(tuple points, float ratio, int a, int b, int c, int d);
