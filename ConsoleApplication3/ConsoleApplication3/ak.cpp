#include<GL\glut.h>
#include<stdio.h>

float angle = 0;

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glPushMatrix();
	glRotatef(angle, 0, 0.5, 0.5);
	glBegin(GL_QUAD_STRIP);
	glColor3f(1, 0, 0);
	glVertex3f(0.1, 0.1, 1);
	glVertex3f(0.1, 0.1, -1);
	
	glVertex3f(-0.1, 0.1, 1);
	glVertex3f(-0.1, 0.1, -1);
	
	glVertex3f(-0.1, -0.1, 1);
	glVertex3f(-0.1, -0.1, -1);

	glVertex3f(0.1, -0.1, 1);
	glVertex3f(0.1, -0.1, -1);

	glEnd();

	glPopMatrix();
	angle += 0.1;
	glFlush();
}

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutCreateWindow("ak");
	glutDisplayFunc(display);
	glutIdleFunc(display);
	glutMainLoop();
}