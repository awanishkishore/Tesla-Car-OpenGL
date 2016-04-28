#include<GL\glut.h>
#include<math.h>

float deg = 3.14 / 180;
float r = 2;

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1, 1, 1);
	for (int x = 0; x < 40; x++)
	{
		if (x < 10)
		{
			glBegin(GL_POLYGON);
			for (int i = 0; i < 360; i++)
				glVertex2f((r + x)*cos(i*deg) + 460, (r + x)*sin(i*deg) + 60);
			glEnd();
		}

		else
		{
			glClear(GL_COLOR_BUFFER_BIT);
			if (x < 25 && x>20)
				glColor3f(1 - ((float)(x-20) / 5), 0.8, 1);
			glTranslatef(-x, x, 0);
			glBegin(GL_POLYGON);
			for (int i = 0; i < 360; i++)
				glVertex2f((r + x)*cos(i*deg) + 460, (r + x)*sin(i*deg) + 60);
			glEnd();
		}
		
		for (int i = 0; i < 600; i++)
			for (int j = 0; j < 999; j++)
				glFlush();
	}
}

void idle()
{
	glutPostRedisplay();
}

void init()
{
	glClearColor(0, 0.8, 1, 0);
	glColor3f(1.0, 1.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 500, 0, 500);
}

void main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("simple");
	glutDisplayFunc(display);
	glutIdleFunc(idle);
	init();
	glutMainLoop();
}