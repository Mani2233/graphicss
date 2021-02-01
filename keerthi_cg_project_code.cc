#include<stdio.h>
#include <glut.h>

static float rev= 0, rot = 0;
float x=1.0;
GLfloat light_ambient0[] = { 0.0, 0.0, 1.0, 1.0};
GLfloat light_ambient1[] = { 1.0, 0.0, 0.0, 1.0};
GLfloat light_ambient2[] = { 0.0, 1.0, 0.0, 1.0};


void init(void)
{
	GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };
	GLfloat mat_shininess[] = { 50.0 };
	GLfloat light_position[] = { 1.0, .0, .0, 1.0};
	glClearColor (0.0, 0.0, 0.0, 0.0);
	glShadeModel (GL_SMOOTH);
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
	glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
	glLightfv(GL_LIGHT0, GL_POSITION, light_position);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glEnable(GL_DEPTH_TEST);
}

void displayH(void)
{
	glClear (GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	
	
	//Draw the neutrons and protons at the centre
	//Blue color represents neutrons and red represents protons
	
	glPushMatrix();
		glTranslatef(0.1,0,0);
		glRotatef ((GLfloat) rot, 0.0, 1.0, 0.0);
		glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient1);
		glutSolidSphere(0.125, 15,12);
	glPopMatrix();
	
	glPushMatrix();
		glRotatef ((GLfloat) rev, 0.0, 0.0, 1.0);
		glTranslatef (0.0, 01.0, 0.0);
		glRotatef ((GLfloat) rot, 0.0, 0.0, 1.0);
		glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient2);
		glutSolidSphere(0.125, 15,12); 
	glPopMatrix();

	glutSwapBuffers();
}

void displayHe(void)
{
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glPushMatrix();
		glTranslatef(0.1,0,0);
		glRotatef ((GLfloat) rot, 0.0, 1.0, 0.0);
		glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient1);
		glutSolidSphere(0.125, 15,12);
	glPopMatrix();

	glPushMatrix();
		glTranslatef(-0.1,0,0);
		glRotatef ((GLfloat) rot, 0.0, 1.0, 0.0);
		glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient1);
		glutSolidSphere(0.125, 15,12);
	glPopMatrix();

	glPushMatrix();
		glTranslatef(0,0.1,0);
		glRotatef ((GLfloat) rot, 0.0, 1.0, 0.0);
		glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient0);
		glutSolidSphere(0.125, 15,12);
	glPopMatrix();

	glPushMatrix();
		glTranslatef(0,-0.1,0.0);
		glRotatef ((GLfloat) rot, 0.0, 1.0, 0.0);
		glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient0);
		glutSolidSphere(0.125, 15,12);
	glPopMatrix();

	glPushMatrix();
		glRotatef ((GLfloat) rev, 0.0, 1.0, 0.0);
		glTranslatef (1.0, 0.0, 0.0);
		glRotatef ((GLfloat) rot, 0.0, 0.0, 1.0);
		glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient2);
		glutSolidSphere(0.125, 15,12); 
	glPopMatrix();

	glPushMatrix();
		glRotatef ((GLfloat) rev, 0.0, 0.0, 1.0);
		glTranslatef (0.0, 01.0, 0.0);
		glRotatef ((GLfloat) rot, 0.0, 0.0, 1.0);
		glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient2);
		glutSolidSphere(0.125, 15,12); 
	glPopMatrix();

	glutSwapBuffers();
}

void displayLi(void)
{
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
//neutrons
	glPushMatrix();
		glTranslatef(0,0,0.1);
		glRotatef ((GLfloat) rot, 0.0, 1.0, 0.0);
		glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient0);
		glutSolidSphere(0.125, 15,12);
	glPopMatrix();

	glPushMatrix();
		glTranslatef(0,0,-0.1);
		glRotatef ((GLfloat) rot, 0.0, 1.0, 0.0);
		glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient0);
		glutSolidSphere(0.125, 15,12);
	glPopMatrix();

	glPushMatrix();
		glTranslatef(0.1,0,0);
		glRotatef ((GLfloat) rot, 0.0, 1.0, 0.0);
		glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient0);
		glutSolidSphere(0.125, 15,12);
	glPopMatrix();

	glPushMatrix();
		glTranslatef(-.1,0,0);
		glRotatef ((GLfloat) rot, 0.0, 1.0, 0.0);
		glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient0);
		glutSolidSphere(0.125, 15,12);
	glPopMatrix();

	//Protons
	
	glPushMatrix();
		glTranslatef(0,-0.1,0);
		glRotatef ((GLfloat) rot, 0.0, 1.0, 0.0);
		glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient1);
		glutSolidSphere(0.125, 15,12);
	glPopMatrix();
	
	glPushMatrix();
		glTranslatef(0,0.1,0);
		glRotatef ((GLfloat) rot, 0.0, 1.0, 0.0);
		glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient1);
		glutSolidSphere(0.125, 15,12);
	glPopMatrix();
	
	glPushMatrix();
		glTranslatef(0.0,0,0.0);
		glRotatef ((GLfloat) rot, 0.0, 1.0, 0.0);
		glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient1);
		glutSolidSphere(0.125, 15,12);
	glPopMatrix();

	//Electrons
	
	glPushMatrix();
		glRotatef ((GLfloat) rev, 0.0, 1.0, 0.0);
		glTranslatef (1.0, 0.0, 0.0);
		glRotatef ((GLfloat) rot, 0.0, 0.0, 1.0);
		glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient2);
		glutSolidSphere(0.125, 15,12); 
	glPopMatrix();

	glPushMatrix();
		glRotatef ((GLfloat) rev, 0.0, 0.0, 1.0);
		glTranslatef (0.0, 1.0, 0.0);
		glRotatef ((GLfloat) rot, 0.0, 0.0, 1.0);
		glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient2);
		glutSolidSphere(0.125, 15,12); 
	glPopMatrix();

	glPushMatrix();
		glRotatef ((GLfloat) rev, -1.0, 0.0, 0.0);
		glTranslatef (0.0,-1.0, 0.0);
		glRotatef ((GLfloat) rot, 0.0, 0.0, 1.0);
		glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient2);
		glutSolidSphere(0.125, 15,12); 
	glPopMatrix();

	glutSwapBuffers();
}

void displayBe(void)
{
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
//neutrons
	glPushMatrix();
		glTranslatef(0, 0, 0.08);
		glRotatef ((GLfloat) rot, 0.0, 1.0, 0.0);
		glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient0);
		glutSolidSphere(0.125, 15,12);
	glPopMatrix();

	glPushMatrix();
		glTranslatef(0, 0, -0.08);
		glRotatef ((GLfloat) rot, 0.0, 1.0, 0.0);
		glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient0);
		glutSolidSphere(0.125, 15,12);
	glPopMatrix();

	glPushMatrix();
		glTranslatef(0.1, 0, 0);
		glRotatef ((GLfloat) rot, 0.0, 1.0, 0.0);
		glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient0);
		glutSolidSphere(0.125, 15,12);
	glPopMatrix();

	glPushMatrix();
		glTranslatef(-.1, 0, 0);
		glRotatef ((GLfloat) rot, 0.0, 1.0, 0.0);
		glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient0);
		glutSolidSphere(0.125, 15,12);
	glPopMatrix();

	glPushMatrix();
		glRotatef ((GLfloat) rot, 0.0, 1.0, 0.0);
		glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient0);
		glutSolidSphere(0.125, 15,12);
	glPopMatrix();

	//Protons
	
	glPushMatrix();
		glTranslatef(0.05, 0.1, 0);
		glRotatef ((GLfloat) rot, 0.0, 1.0, 0.0);
		glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient1);
		glutSolidSphere(0.125, 15,12);
	glPopMatrix();
	
	glPushMatrix();
		glTranslatef(0.05, -0.1, 0);
		glRotatef ((GLfloat) rot, 0.0, 1.0, 0.0);
		glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient1);
		glutSolidSphere(0.125, 15,12);
	glPopMatrix();

	glPushMatrix();
		glTranslatef(-0.05, -0.1, 0.0);
		glRotatef ((GLfloat) rot, 0.0, 1.0, 0.0);
		glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient1);
		glutSolidSphere(0.125, 15,12);
	glPopMatrix();

	glPushMatrix();
		glTranslatef(-0.05, 0.1, 0.0);
		glRotatef ((GLfloat) rot, 0.0, 1.0, 0.0);
		glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient1);
		glutSolidSphere(0.125, 15,12);
	glPopMatrix();

	//Electrons
	
	glPushMatrix();
		glRotatef ((GLfloat) rev, 0.0, 1.0, 0.0);
		glTranslatef (1.0, 0.0, 0.0);
		glRotatef ((GLfloat) rot, 0.0, 0.0, 1.0);
		glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient2);
		glutSolidSphere(0.125, 15,12); 
	glPopMatrix();

	glPushMatrix();
		glRotatef ((GLfloat) rev, 0.0, 0.0, 1.0);
		glTranslatef (0.0, 1.0, 0.0);
		glRotatef ((GLfloat) rot, 0.0, 0.0, 1.0);
		glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient2);
		glutSolidSphere(0.125, 15,12); 
	glPopMatrix();

	glPushMatrix();
		glRotatef ((GLfloat) rev, -1.0, 1.0, 0.0);
		glTranslatef (0.0, 0.0, -1.0);
		glRotatef ((GLfloat) rot, 0.0, 0.0, 1.0);
		glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient2);
		glutSolidSphere(0.125, 15,12); 
	glPopMatrix();

	glPushMatrix();
		glRotatef ((GLfloat) rev, 1.0, 1.0, 0);
		glTranslatef (0.0 ,0.0, 1.0);
		glRotatef ((GLfloat) rot, 0.0, 0.0, 1.0);
		glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient2);
		glutSolidSphere(0.125, 15,12); 
	glPopMatrix();

	glutSwapBuffers();
}

void reshape (int w, int h)
{
	glViewport (0, 0, w, h);
	glMatrixMode (GL_PROJECTION);
	glLoadIdentity ();
	gluPerspective(60.0, (GLfloat) w/(GLfloat) h, 1.0, 20.0);
	glMatrixMode(GL_MODELVIEW);
    gluLookAt (0.0, 0.0, 5.0, 0.0, .0, .0, 0.0, 1.0, 0.0);
	
}

void speed_menu(int index)
{
	switch(index)
	{
	case 1:
		x=0.15;
		break;
	case 2:
		x=1.0;
		break;
	case 3:
		x=2.5;
		break;
	}
	glutPostRedisplay();
}


void elements_menu(int index)
{
	switch(index)
	{
	case 1:
		glutDisplayFunc(displayH);
		break;
	case 2:
		glutDisplayFunc(displayHe);
		break;
	case 3:
		glutDisplayFunc(displayLi);
		break;
	case 4:
		glutDisplayFunc(displayBe);
		break;
	}
	glutPostRedisplay();
}

void main_menu(int index)
{
	switch(index)
	{
		case 3: exit(0);
	}
}

void myidle()
{
	rot=rot+x;
	if(rot>=360.0)
		rot-=360.0;
	rev=rev+x;
	if(rev>=360.0)
		rev-=360.0;

	glutPostRedisplay();
}



int main(int argc, char** argv)
{
	int s_menu,e_menu;
	glutInit(&argc, argv);
	glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize (600, 600);
	glutInitWindowPosition (100, 100);
	glutCreateWindow ("Model of an atom");
	glutDisplayFunc(displayH);
	glutIdleFunc(myidle);
		
	e_menu= glutCreateMenu(elements_menu);
	glutAddMenuEntry("Hydrogen",1);
	glutAddMenuEntry("Helium",2);
	glutAddMenuEntry("Lithium",3);
	glutAddMenuEntry("Beryllium",4);

	s_menu=glutCreateMenu(speed_menu);
	glutAddMenuEntry("Slow",1);
	glutAddMenuEntry("Normal",2);
	glutAddMenuEntry("Fast",3);
	
	glutCreateMenu(main_menu);
	glutAddSubMenu("Speed of revolution",s_menu);
	glutAddSubMenu("Elements",e_menu);
	glutAddMenuEntry("Quit",3);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
	
	glutReshapeFunc(reshape);
	init ();
	glutMainLoop();
	return 0;
}