/*
C  ��  0.2
N  ��  0.25
H  ��  0.15
O  ��  0.3
S  ��  0.32
*/

/*
//���������

1--�ʰ���     2--������   3--�Ұ���    4--������      5--��������   6--�Ӱ���     7--��������
8--������   9--ɫ����*   10--˿����   11--�Ȱ�����   12--�հ���    13--���װ���  14--�춬����
15--�춬����  16--�Ȱ���  17--������   18--������     19--�鰱��*    20--������*
*/

//7,6,14,16,19,4,13,1,10,19,4,6,16,2,4,3,4,6,13,1,16,18,1,7,7,3,12,20,17,12


#include <iostream>
#include <gl\glut.h>
#include <gl\GL.h>
#include <gl\GLU.h>
#include <Windows.h>
#include <math.h>
#include "Amino.h"
using namespace std;
GLint ChainAA[21] = { 1,5,6,16,11,13,13,12,10,5,13,10,4,3,11,4,16,14,3,13,14 };

GLint ChainBB[30] = { 7,6,14,16,19,4,13,1,10,19,4,6,16,2,4,3,4,6,13,1,16,18,1,7,7,3,12,20,17,12 };


static GLfloat xRot = 0.0f;
static GLfloat yRot = 0.0f;
GLfloat a = 7.0;

//������ˮ���Ϸ�Ӧ�ı���
int step = 0;
int start = 0;//��ʼ�����ı�־λ
static float xx = 0.0f;//�ƶ��İ������x����
static float yy = 0.0f;//�ƶ��İ������y����
static float zz = 0.0f;//�ƶ��İ������z����
static float angley = 0.0f;//�ƶ��İ��������y����ת�Ƕ�
static float anglez = 0.0f;//�ƶ��İ��������z����ת�Ƕ�
static float H2Ox = 0.0f;//ˮ���ӵ��ƶ�
static float zzz = 0.0f;//���Ĳ���������ƶ�

GLfloat C[] = { 0, 1, 0, 1.0 };
GLfloat H[] = { 0.7, 0.7, 0.7, 1.0 };
GLfloat O[] = { 0, 0, 1, 1.0 };
GLfloat N[] = { 1, 0, 0, 1.0 };
GLfloat S[] = { 1, 1, 0, 1.0 };
GLfloat key[] = { 1, 1, 1, 1.0 };

Amino amino;
Amino amino2;

int Rect = 0;
int Chain = 0;
int single = 0;


/*
���ư�������ˮ���Ϸ�Ӧ�ķ���
*/
void DrawProteiRreaction() {
	amino.setkeySize(0.6);  //���ü���b
	amino2.setkeySize(0.6);  //���ü���b

	glPushMatrix();
	amino.drawAmino(3);
	glTranslatef(-3, 0, 0);
	
	if (step == 3) { //������˵�����  ��ˮ����
		if (H2Ox < 10.0) {
			glPushMatrix();
			glTranslatef(3.3, -0.5, -1.3);
			glRotatef(-90, 0, 1, 0);	//ˮ����Զ��
			glTranslatef(0, 0, -H2Ox);
			H2Ox += 0.1;
			amino.drawH2O();
			glPopMatrix();
		}
	}
	
	glPushMatrix();
	
	if (start == 1) {

		//����1 ��������1�Ƶ����백����2�İ����Ͻ���λ��
		if (zz > -3.0) {
			glTranslatef(0, 0, zz);//-3
			zz -= 0.1;
		}
		else {
			zz = -3.0;
			glTranslatef(0, 0, zz);
		}
		if (xx < 3.0) {
			glTranslatef(xx, 0, 0);//3
			xx += 0.1;
		}
		else {
			xx = 3.0;
			glTranslatef(xx, 0, 0);
		}

		glTranslatef(0, -0.5, 0);//-0.5


		//����4  �ƶ��������������ƴ�ӣ����ͬʱˮ����Զ��
		if (step == 3) {
			if (zzz <= 1.3) {
				glTranslatef(0, 0, zzz);
				zzz += 0.1;
			}
			else {
				zzz = 1.3;
				glTranslatef(0, 0, zzz);
			}
		}

		//����2 ���Ȼ�λ����ת����ֱ����
		if (zz <= -3.0&&angley <= 120) {
			glRotatef(angley, 0, 1, 0);//120
			angley += 10;
		}
		else if (zz == -3.0) {
			angley = 120;
			glRotatef(angley, 0, 1, 0);//120
		}
		if (anglez<=30) {
			glRotatef(anglez, 0, 0, 1);//30
			anglez += 5;
		}else{
			anglez = 30;
			glRotatef(anglez, 0, 0, 1);
		}
		

		//����3 ���һ֡ͼ��ȡ��-OH��-H��ͬʱ�ڽϽ���λ�û���һ����ˮ
		if (angley == 120) {
			amino2.setFlag2(1);
			amino.setFlag(1);
			step = 3;
		}

	}
	amino2.drawAmino(1);
	
	glPopMatrix();
	
	glPopMatrix();
	
}

/*
���Ƶ��������ģ�͵ķ���
*/
void DrawProteinInBallA() {
	
	amino.setkeySize(0.4);
	amino.drawPeptideChain(21,ChainAA);
}

void DrawProteinInBallB() {

	amino2.setkeySize(0.4);
	amino2.drawPeptideChain(30, ChainBB);

}


void DrawProtein() {
	amino.setkeySize(0.6);
	amino.drawAmino(18);
}

//����Ʈ��
void DrawRibbon() {

}


void ChangeSize(int w, int h) {
	GLfloat fAspect;
	if (h == 0)
		h = 1;
	glViewport(0, 0, w, h);
	fAspect = (GLfloat)w /(GLfloat)h;

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-a, a, -a, a, 0.01, 1.0e3);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

void SpecialKeys(int key, int x, int y) {
	if (key == GLUT_KEY_LEFT) {
		yRot -= 5.0f;
	}
	if (key == GLUT_KEY_RIGHT) {
		yRot += 5.0f;
	}
	if (key == GLUT_KEY_UP) {
		xRot -= 5.0f;
	}
	if (key == GLUT_KEY_DOWN) {
		xRot += 5.0f;
	}
	if (key > 356.0f) {
		xRot = 0.0f;
	}
	if (key < -1.0f) {
		xRot = 355.0f;
	}
	if (key > 356.0f) {
		yRot = 0.0f;
	}
	if (key < -1.0f) {
		yRot = 355.0f;
	}
	if (key == GLUT_KEY_F1) {
		start = 1;
	}
	glutPostRedisplay();
}

void RenderScene() {
	glClear(GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT);

	GLfloat no_mat[] = { 0.1, 0.1, 0.1, 1.0 };
	GLfloat diffuse[] = { 0, 1, 0, 1.0 };
	GLfloat specular[] = { 0.1, 0.1, 0.1, 1.0 };


	glPushMatrix();

	gluLookAt(0.0, -10.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);

	glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, no_mat);
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, diffuse);
	glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, specular);
	glMaterialf(GL_FRONT_AND_BACK, GL_SHININESS, 8);


	glRotatef(xRot, 1.0f, 0.0f, 0.0f);
	glRotatef(yRot, 0.0f, 0.0f, 1.0f);
	
	if (Rect == 1) {
		DrawProteiRreaction();//���ư�������ˮ���Ϸ�Ӧ�ķ���
	}
	else if(Chain == 1) {
		DrawProteinInBallA(); //���ư��������ģ��
	}
	else if (single == 1) {
		DrawProtein();//���Ƶ���������
	}


	//DrawProteinInBallB(); //���ư��������ģ��
	//DrawProtein();//���Ƶ���������
	

	glPopMatrix();

	glutSwapBuffers();
}

void SetupRC() {
	GLfloat white_light[] = { 0.9, 0.9, 0.9, 1.0 };
	GLfloat light_position[] = { 4, 4, 4, 0 };
	
	glClearColor(0, 0, 0, 0.0);
	glClearDepth(1.0);
	glShadeModel(GL_SMOOTH); //��ɫģʽ���⻬��ɫ��

	glLightfv(GL_LIGHT0, GL_AMBIENT, white_light);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, white_light);
	glLightfv(GL_LIGHT0, GL_SPECULAR, white_light);
	glLightfv(GL_LIGHT0, GL_POSITION, light_position);

	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glEnable(GL_DEPTH_TEST);
}

void TimerFunc(int value)
{
	glutPostRedisplay();                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
	glutTimerFunc(70, TimerFunc, 1);
}

void ProcessMenu(int value) {
	switch (value)
	{
	case 1:
		Rect = 1;
		Chain = 0;
		single = 0;
		break;
	case 2:
		Chain = 1;
		Rect = 0;
		single = 0;
		break;
	case 3:
		single = 1;
		Chain = 0;
		Rect = 0;
		break;
	default:
		break;
	}
	glutPostRedisplay();
}

int main(int argc, char* argv[]) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
	glutInitWindowSize(700, 600);
	glutInitWindowPosition(200, 100);
	glutCreateWindow("Protein");

	glutCreateMenu(ProcessMenu);
	glutAddMenuEntry("��������ˮ���Ϲ���", 1);
	glutAddMenuEntry("����������", 2);
	glutAddMenuEntry("����������", 3);
	glutAttachMenu(GLUT_RIGHT_BUTTON);

	glutReshapeFunc(ChangeSize);
	glutSpecialFunc(SpecialKeys);
	glutDisplayFunc(RenderScene);
	glutTimerFunc(250, TimerFunc, 1);
	SetupRC();
	glutMainLoop();
	return 0;

}