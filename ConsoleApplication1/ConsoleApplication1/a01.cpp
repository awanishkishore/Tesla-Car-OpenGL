#include<GL/glut.h>
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);
	glVertex2f(250, 400);
	glVertex2f(130.0, 300.0);
	glVertex2f(370.0, 300.0);
	glEnd();
	glFlush();

	glColor3f(1.0, 0.8, 0);//square wall
	glBegin(GL_POLYGON);
	glVertex2f(150.0, 300.0);
	glVertex2f(350.0, 300.0);
	glVertex2f(350.0, 120.0);
	glVertex2f(150.0, 120.0);
	glEnd();

	glColor3f(0, 1, 0);//house foundation
	glBegin(GL_POLYGON);
	glVertex2f(140, 120);
	glVertex2f(360.0, 120);
	glVertex2f(360.0, 90);
	glVertex2f(140, 90);
	glEnd();

	glColor3f(1.0, 0, 0); //door
	glBegin(GL_POLYGON);
	glVertex2f(220.0, 220.0);
	glVertex2f(280.0, 220.0);
	glVertex2f(280.0, 120.0);
	glVertex2f(220.0, 120.0);
	glEnd();

	glColor3f(1.0, 0.5, 0);//door outline
	glLineWidth(2.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(220.0, 220.0);
	glVertex2f(280.0, 220.0);
	glVertex2f(280.0, 120.0);
	glVertex2f(220.0, 120.0);
	glEnd();

	glColor3f(1.0, 0.3, 0); //step1
	glBegin(GL_POLYGON);
	glVertex2f(215.0, 120.0);
	glVertex2f(285.0, 120.0);
	glVertex2f(285.0, 105.0);
	glVertex2f(215.0, 105.0);
	glEnd();

	glColor3f(0.0, 0.0, 0);  //ground
	glBegin(GL_POLYGON);
	glVertex2f(0,90);
	glVertex2f(800,90);
	glVertex2f(800, 0);
	glVertex2f(0, 0);
	glEnd();
	glFlush();

	glColor3f(1, 1, 1); //white stripe 01
	glBegin(GL_POLYGON);
	glVertex2f(40, 50);
	glVertex2f(140, 50);
	glVertex2f(140, 35);
	glVertex2f(40, 35);
	glEnd();
	glFlush();

	glColor3f(1, 1, 1); //white stripe 02
	glBegin(GL_POLYGON);
	glVertex2f(240, 50);
	glVertex2f(340, 50);
	glVertex2f(340, 35);
	glVertex2f(240, 35);
	glEnd();
	glFlush();

	glColor3f(1, 1, 1); //white stripe 03
	glBegin(GL_POLYGON);
	glVertex2f(440, 50);
	glVertex2f(540, 50);
	glVertex2f(540, 35);
	glVertex2f(440, 35);
	glEnd();
	glFlush();

	glColor3f(1, 1, 1); //white stripe 04
	glBegin(GL_POLYGON);
	glVertex2f(640, 50);
	glVertex2f(740, 50);
	glVertex2f(740, 35);
	glVertex2f(640, 35);
	glEnd();
	glFlush();

		

	glColor3f(1.0, 0.5, 0); //step2
	glBegin(GL_POLYGON);
	glVertex2f(210.0, 105.0);
	glVertex2f(290.0, 105.0);
	glVertex2f(290.0, 88.0);
	glVertex2f(210.0, 88.0);
	glEnd();

	glColor3f(0, 0.4, 1);
	glBegin(GL_POLYGON);
	glVertex2f(230.0, 350.0);
	glVertex2f(270.0, 350.0);
	glVertex2f(270.0, 310.0);
	glVertex2f(230.0, 310.0);
	glEnd();
	glFlush();

	glLineWidth(2.0); //window outline
	glColor3f(1.0, 0.5, 0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(230.0, 350.0);
	glVertex2f(270.0, 350.0);
	glVertex2f(270.0, 310.0);
	glVertex2f(230.0, 310.0);
	glEnd();
	glFlush();

	glLineWidth(2.0);
	glColor3f(1.0, 0.5, 0);
	glBegin(GL_LINES);
	glVertex2f(250.0, 350.0);
	glVertex2f(250.0, 310.0);
	glEnd();
	glFlush();

	glLineWidth(2.0);
	glColor3f(1.0, 0.5, 0);
	glBegin(GL_LINES);
	glVertex2f(270.0, 330.0);
	glVertex2f(230.0, 330.0);
	glEnd();
	glFlush();
}

void init()
{
	glClearColor(0.204, 0.57, 0.86, 0.0);
	glColor3f(1.0, 1.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 800, 0, 800);
}

void main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("simple");
	glutDisplayFunc(display);
	init();
	glutMainLoop();
}