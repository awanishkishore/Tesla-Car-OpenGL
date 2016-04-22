#include<GL/glut.h>
void display()
{
	
	
	glColor3f(1,0,0); //traingle roof
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);
	glVertex2f(250,400);
	glVertex2f(130.0,300.0);
	glVertex2f(370.0,300.0);
	glEnd();
	glFlush();

	glColor3f(1.0,0.8,0);//square wall
	glBegin(GL_POLYGON);
	glVertex2f(150.0,300.0);
	glVertex2f(350.0,300.0);
	glVertex2f(350.0,120.0);
	glVertex2f(150.0,120.0);
	glEnd();

	glColor3f(0,1,0);//ground
	glBegin(GL_POLYGON);
	glVertex2f(140,120);
	glVertex2f(360.0,120);
	glVertex2f(360.0,90);
	glVertex2f(140,90);
	glEnd();

	glColor3f(1.0,0,0); //door
	glBegin(GL_POLYGON);
	glVertex2f(220.0,220.0);
	glVertex2f(280.0,220.0);
	glVertex2f(280.0,120.0);
	glVertex2f(220.0,120.0);
	glEnd();

	glColor3f(1.0,0.5,0);//door outline
	glLineWidth(2.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(220.0,220.0);
	glVertex2f(280.0,220.0);
	glVertex2f(280.0,120.0);
	glVertex2f(220.0,120.0);
	glEnd();

	glColor3f(1.0,0.3,0); //step1
	glBegin(GL_POLYGON);
	glVertex2f(215.0,120.0);
	glVertex2f(285.0,120.0);
	glVertex2f(285.0,105.0);
	glVertex2f(215.0,105.0);
	glEnd();

	glColor3f(1.0,0.5,0); //step2
	glBegin(GL_POLYGON);
	glVertex2f(210.0,105.0);
	glVertex2f(290.0,105.0);
	glVertex2f(290.0,88.0);
	glVertex2f(210.0,88.0);
	glEnd();

	glColor3f(0,0.4,1);
	glBegin(GL_POLYGON);
	glVertex2f(230.0,350.0);
	glVertex2f(270.0,350.0);
	glVertex2f(270.0,310.0);
	glVertex2f(230.0,310.0);
	glEnd();
	glFlush();
	
	glLineWidth(2.0); //window outline
	glColor3f(1.0,0.5,0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(230.0,350.0);
	glVertex2f(270.0,350.0);
	glVertex2f(270.0,310.0);
	glVertex2f(230.0,310.0);
	glEnd();
	glFlush();

	glLineWidth(4.0); //bird
	glColor3f(0,0,0);
	glBegin(GL_LINES);
	glVertex2f(400.0,450.0);
	glVertex2f(380.0,430.0);
	glLineWidth(4.0); 
	glColor3f(0,0,0);
	glBegin(GL_LINES);
	glVertex2f(380.0,450.0);
	glVertex2f(400.0,430.0);
	
	glEnd();
	glFlush();
	
	glLineWidth(2.0);
	glColor3f(1.0,0.5,0);
	glBegin(GL_LINES);
	glVertex2f(250.0,350.0);
	glVertex2f(250.0,310.0);
	glEnd();
	glFlush();
		
	glLineWidth(2.0);
	glColor3f(1.0,0.5,0);
	glBegin(GL_LINES);
	glVertex2f(270.0,330.0);
	glVertex2f(230.0,330.0);
	glEnd();
	glFlush();


	glClearColor(0,0.8,1,0);
}

void init()
{
	glClearColor(0.0,0.0,0.0,0.0);
	glColor3f(1.0,1.0,1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,500,0,500);
}

void main(int argc,char **argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(0,0);
	glutCreateWindow("simple");
	glutDisplayFunc(display);
	init();
	glutMainLoop();
}