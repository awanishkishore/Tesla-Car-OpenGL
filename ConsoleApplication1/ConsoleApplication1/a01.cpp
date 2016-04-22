#include<GL\glut.h>
#include<stdio.h>

float v[6][2] = {
	/////////////////////// 1 3 5
	{ -0.5, -0.5 }, // x x x
	{ -0.5, 0.5 }, //
	{ 0.0, -0.5 }, //
	{ 0.0, 0.5 }, //
	{ 0.5, -0.5 }, // x x x
	{ 0.5, 0.5 } // 0 2 4
};


void display()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glColor3f(0, 1, 1);
	glColor3f(1, 0, 0);

	glBegin(GL_LINE_LOOP);
	glVertex2fv(v[0]);
	glVertex2fv(v[1]);
	glVertex2fv(v[3]);
	glVertex2fv(v[2]);

	glColor3f(0, 1, 0);

	glVertex2fv(v[2]);
	glVertex2fv(v[3]);
	glVertex2fv(v[5]);
	glVertex2fv(v[4]);
	

	glEnd();
	glFlush();

}

void init()
{
	glClearColor(0,0,0, 0.0);
	glColor3f(0, 0, 0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 500, 0, 500);
}

void main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB| GLUT_DEPTH);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("simple");
	glutDisplayFunc(display);
	init();
	glutMainLoop();
}