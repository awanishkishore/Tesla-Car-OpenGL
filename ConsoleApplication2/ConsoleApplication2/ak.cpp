#include<GL/glut.h>
#include<math.h>

float deg = 3.14 / 180;
float r = 30;
float m = r / 6;

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(1, 1, 0);
	glBegin(GL_POLYGON);			//Sun Fill
	for (int i = 0; i < 360; i++)
	{
		glVertex2f((r - 2)*cos(i*deg) + 60, (r - 2)*sin(i*deg) + 420);
	}
	glEnd();

	glColor3f(0, 0, 0);			//Solar Panel Fill
	glBegin(GL_POLYGON);		
	glVertex2f(330, 255);
	glVertex2f(475, 250);
	glVertex2f(425, 140);
	glVertex2f(280, 175);
	glEnd();

	glColor3f(1, 1, 1);			//Solar Panel Outline
	glBegin(GL_LINE_LOOP);
	glVertex2f(330, 255);
	glVertex2f(475, 250);
	glVertex2f(425, 140);
	glVertex2f(280, 175);
	glEnd();

	glBegin(GL_LINES);			//Solar Panel Outline 02
	glVertex2f(400, 252.5);
	glVertex2f(350, 157.5);
	glEnd();
	glFlush();

	glLineWidth(6.0);			//Solar Panel Outline 03
	glBegin(GL_LINES);
	glVertex2f(475, 250);
	glVertex2f(425, 140);
	glEnd();
	glFlush();

	glLineWidth(1.0);
	for (float j = 0; j < 15; j++)		//Sun Outline
	{
		for (int i = 0; i < 36; i++)
		{
			glColor3f(1, 1 - (j / 15) + 0.4, 0);
			glBegin(GL_POINTS);
			for (int i = 0; i < 360; i++)
			{
				glVertex2f((r + j - 16)*cos(i*deg) + 60, (r + j - 16)*sin(i*deg) + 420);
			}
			glEnd();

			glColor3f(1, (j / 15), 0);
			glBegin(GL_LINES);
			glVertex2f(r*cos(i * 10 * deg) + 60, r*sin(i * 10 * deg) + 420);
			glVertex2f((r + j)*cos(i * 10 * deg + ((int)i % 2)) + 60, (r + j)*sin(i * 10 * deg + ((int)i % 2)) + 420);
			glEnd();

			glColor3f(0, 0, 0);				//Rays
			glBegin(GL_POINTS);
			if (i % 2 == 0)
			{
				m += (r / 3);
				for (int j = 0; j < 180; j++)
					glVertex2f(r / 6 * cos(j*deg) + m, r / 6 * sin(j*deg) + 40);
			}
			else
			{
				m = m + (r / 3);
				for (int j = 180; j < 360; j++)
					glVertex2f(r / 6 * cos(j*deg) + m, r / 6 * sin(j*deg) + 40);
			}
			glEnd();


			for (int k = 0; k < 999; k++)
				for (int l = 0; l< 99; l++)
				{
					glFlush();
				}
		}
	}

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
	glEnable(GL_LINE_SMOOTH);
	glutDisplayFunc(display);
	init();
	glutMainLoop();
}