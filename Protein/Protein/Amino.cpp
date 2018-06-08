#include "Amino.h"

/*
//���������

1--�ʰ���     2--������   3--�Ұ���    4--������      5--��������   6--�Ӱ���     7--��������
8--������   9--ɫ����   10--˿����   11--�Ȱ�����   12--�հ���    13--���װ���  14--�춬����
15--�춬����  16--�Ȱ���  17--������   18--������     19--�鰱��    20--������
*/

GLint ChainA[21] = { 1,5,6,16,11,13,13,12,10,5,13,10,4,3,11,4,16,14,3,13,14 };
GLint ChainB[30] = { 7,6,14,16,19,4,13,1,10,19,4,6,16,2,4,3,4,6,13,1,16,18,1,7,7,3,12,20,17,12 };

Amino::Amino()
{
	qObj = gluNewQuadric();
}


Amino::~Amino()
{ 
}

//���Ƶ���������
void Amino::drawAmino(int n) {
	GeneralAmino();
	drawR(n);
}

//������ṹͨʽ
void Amino::GeneralAmino()  
{
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
	glutSolidSphere(0.2, 20, 20);

	glPushMatrix();//����
	glRotatef(120, 1, 0, 0);
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
	gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
	glTranslatef(0, 0, keySize);
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, N);
	glutSolidSphere(0.25, 20, 20);
	
	glPushMatrix();
	glRotatef(60, 1, 0, 0);
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
	gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
	if (flag == 0) {
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
	}
	glPopMatrix();


	glPushMatrix();
	glRotatef(240, 0, 0, 1);
	glRotatef(60, 1, 0, 0);
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
	gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
	glTranslatef(0, 0, keySize);
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
	glutSolidSphere(0.15, 20, 20);
	glPopMatrix();
	glPopMatrix();
	
	glPushMatrix();//��
	glRotatef(120, 0, 0, 1);
	glRotatef(120, 1, 0, 0);
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
	gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
	glTranslatef(0, 0, keySize);
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
	glutSolidSphere(0.15, 20, 20);
	glPopMatrix();
	
	glPushMatrix();//�Ȼ�
	glRotatef(240, 0, 0, 1);
	glRotatef(120, 1, 0, 0);
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
	gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
	glTranslatef(0, 0, keySize);
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
	glutSolidSphere(0.2, 20, 20);
	if (flag2 == 0) {
		glPushMatrix();
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, O);
		glutSolidSphere(0.3, 20, 20);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();
	}
	glPushMatrix();//˫����
	glRotatef(90, 0, 1, 0);
	glTranslatef(0, 0.1, 0);
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
	gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
	glTranslatef(0, -0.2, 0);
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
	gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
	glTranslatef(0, 0.1, 0);
	glTranslatef(0, 0, keySize);
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, O);
	glutSolidSphere(0.3, 20, 20);
	glPopMatrix();
	glPopMatrix();
}

//���ü���
void Amino::setkeySize(float n)
{
	keySize = n;
}

float Amino::getkeySize()
{
	return keySize;
}

void Amino::setFlag(int n)
{
	flag = n;
}

void Amino::setFlag2(int n)
{
	flag2 = n;
}

//����ˮ����
void Amino::drawH2O() {				//����ˮ����
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, O);
	glutSolidSphere(0.3, 20, 20);
	glPushMatrix();
	glRotatef(-52.25, 0, 1, 0);
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
	gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
	glTranslatef(0, 0, keySize);
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
	glutSolidSphere(0.15, 20, 20);
	glPopMatrix();
	glPushMatrix();
	glRotatef(52.25, 0, 1, 0);
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
	gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
	glTranslatef(0, 0, keySize);
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
	glutSolidSphere(0.15, 20, 20);
	glPopMatrix();
}

//���ƶ�����
void Amino::drawPeptideChain(int n,int array[])
{
	
	if (n == 1) { //��һ�����������
		drawAmino(array[0]);
	}

	else if (n >= 2) {
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);

		glPushMatrix();//����
		glRotatef(120, 1, 0, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, N);
		glutSolidSphere(0.25, 20, 20);

		glPushMatrix();
		glRotatef(60, 1, 0, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();


		glPushMatrix();
		glRotatef(240, 0, 0, 1);
		glRotatef(60, 1, 0, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();
		glPopMatrix();

		glPushMatrix();//��
		glRotatef(120, 0, 0, 1);
		glRotatef(120, 1, 0, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();


		glPushMatrix();
		glRotatef(240, 0, 0, 1);
		glRotatef(120, 1, 0, 0);
		drawR(array[0]);
		glPopMatrix();
		
		glPushMatrix();//�Ȼ�
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);
		
		glPushMatrix();//˫����
		glRotatef(90, 0, 1, 0);
		glTranslatef(0, 0.1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, -0.2, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0.1, 0);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, O);
		glutSolidSphere(0.3, 20, 20);
		glPopMatrix();
		
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		
		glTranslatef(0, 0, keySize);

		//===============================================================================
		//ѭ��
		for (int i = 0; i < n - 2; i++) {
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, N);
		glutSolidSphere(0.25, 20, 20);

		glPushMatrix();
		glRotatef(60, 0, 1, 0);
		glRotatef(-20, 1, 0, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPushMatrix();
		glRotatef(-60, 0, 1, 0);
		glRotatef(-20, 1, 0, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);
		//======================
		glPushMatrix();//��
		glRotatef(60, 1, 0, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();
		//===========================
		glPushMatrix();//R
		glRotatef(120, 0, 0, 1);
		glRotatef(60, 1, 0, 0);
		drawR(array[i+1]);
		glPopMatrix();
		//=======================
		glPushMatrix();//�Ȼ�
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);

		glPushMatrix();//˫����
		glRotatef(90, 0, 1, 0);
		glTranslatef(0, 0.1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, -0.2, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0.1, 0);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, O);
		glutSolidSphere(0.3, 20, 20);
		glPopMatrix();

		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);

		glTranslatef(0, 0, keySize);
		}
		

		//=============================================================================
		//���һ�����������


		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, N);
		glutSolidSphere(0.25, 20, 20);

		glPushMatrix();
		glRotatef(60, 0, 1, 0);
		glRotatef(-20, 1, 0, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPushMatrix();
		glRotatef(-60, 0, 1, 0);
		glRotatef(-20, 1, 0, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);
		//======================
		glPushMatrix();//��
		glRotatef(60, 1, 0, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();
		//======================
		glPushMatrix();//�Ȼ�
		glRotatef(240, 0, 0, 1);
		glRotatef(60, 1, 0, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);
		
		glPushMatrix();
			glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
			gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
			glTranslatef(0, 0, keySize);
			glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, O);
			glutSolidSphere(0.3, 20, 20);
			glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
			gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
			glTranslatef(0, 0, keySize);
			glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
			glutSolidSphere(0.15, 20, 20);
		glPopMatrix();
		
		glPushMatrix();//˫����
		glRotatef(90, 0, 1, 0);
		glTranslatef(0, 0.1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, -0.2, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0.1, 0);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, O);
		glutSolidSphere(0.3, 20, 20);
		glPopMatrix();
		glPopMatrix();

		//======================
		glPushMatrix();//R
		glRotatef(120, 0, 0, 1);
		glRotatef(60, 1, 0, 0);
		drawR(array[n-1]);
		glPopMatrix();


		glPopMatrix();

		glPopMatrix();
		
		while (n > 2) {
			glPopMatrix();
			glPopMatrix();
			n--;
		}
	
	}


}

//����R��
void Amino::drawR(int n)  //��������Ĳ������ư������R��
{
	//�ʰ���
	if (n == 1) {
		//R��
		glPushMatrix();
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();
	}

	//������
	if (n == 2) {
		//R��
		glPushMatrix();
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);
		glPushMatrix();
		glRotatef(60, 1, 0, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();
		glPushMatrix();
		glRotatef(120, 0, 0, 1);
		glRotatef(60, 1, 0, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();
		glPushMatrix();
		glRotatef(240, 0, 0, 1);
		glRotatef(60, 1, 0, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();
		glPopMatrix();
	}

	//�Ұ���
	if (n == 3) {
		//R��
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);
		glPushMatrix();
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);

		glPushMatrix();//����

		glutSolidSphere(0.2, 20, 20);
		glRotatef(-60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, 0.6*keySize, 20, 20);
		glTranslatef(0, 0, 0.6*keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);
		glPushMatrix();
		glRotatef(-60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, 0.6*keySize, 20, 20);
		glTranslatef(0, 0, 0.6*keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, 0.6*keySize, 20, 20);
		glTranslatef(0, 0, 0.6*keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);
		glPushMatrix();
		glRotatef(-60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, 0.6*keySize, 20, 20);
		glTranslatef(0, 0, 0.6*keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, 0.6*keySize, 20, 20);
		glTranslatef(0, 0, 0.6*keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);
		glPushMatrix();
		glRotatef(-60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, O);
		glutSolidSphere(0.3, 20, 20);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, 0.6*keySize, 20, 20);
		glTranslatef(0, 0, 0.6*keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);
		glPushMatrix();
		glRotatef(-60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, 0.6*keySize, 20, 20);
		glTranslatef(0, 0, 0.6*keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, 0.6*keySize, 20, 20);
		glTranslatef(0, 0, 0.6*keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);
		glPushMatrix();
		glRotatef(-60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, 0.6*keySize, 20, 20);
		glTranslatef(0, 0, 0.6*keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, 0.6*keySize, 20, 20);
		glPopMatrix();
		glPopMatrix();
		glPushMatrix();
		glRotatef(120, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();
		glPushMatrix();
		glRotatef(240, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPopMatrix();
	}

	//������
	if (n == 4) {
		//R��
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);

		glPushMatrix();//1
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);
		glPushMatrix();//2

		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);

		glPushMatrix();//3
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();//3

		glPushMatrix();
		glRotatef(120, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPushMatrix();//��
		glRotatef(240, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPopMatrix();//2

		glPushMatrix();
		glRotatef(120, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);
		glPushMatrix();

		glPushMatrix();
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPushMatrix();
		glRotatef(120, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPushMatrix();//��
		glRotatef(240, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPopMatrix();
		glPopMatrix();

		glPushMatrix();
		glRotatef(240, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();


		glPopMatrix();//1

		glPushMatrix();
		glRotatef(120, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPushMatrix();
		glRotatef(240, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();
	}

	//��������
	if (n == 5) {
		//R��
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);

		glPushMatrix();//1
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);
		glPushMatrix();//2

		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);

		glPushMatrix();//3
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();//3

		glPushMatrix();
		glRotatef(120, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPushMatrix();//��
		glRotatef(240, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPopMatrix();//2

		glPushMatrix();
		glRotatef(240, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPushMatrix();
		glRotatef(120, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPopMatrix();//1

		glPushMatrix();
		glRotatef(120, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);
		glPushMatrix();

		glPushMatrix();
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPushMatrix();
		glRotatef(120, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPushMatrix();//��
		glRotatef(240, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPopMatrix();
		glPopMatrix();

		glPushMatrix();
		glRotatef(240, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

	}

	//�Ӱ���
	if (n == 6) {
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);

		glPushMatrix();
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);
		
		glPushMatrix();
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPushMatrix();
		glRotatef(120, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPushMatrix();//��
		glRotatef(240, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();
		glPopMatrix();

		glPushMatrix();
		glRotatef(120, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPushMatrix();
		glRotatef(240, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);

		glPushMatrix();
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPushMatrix();
		glRotatef(120, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPushMatrix();//��
		glRotatef(240, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();
		glPopMatrix();

	}

	//��������
	if (n == 7) {
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);

		
		glPushMatrix();
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();
		
		glPushMatrix();
		glRotatef(120, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		
		glPushMatrix();
		glRotatef(240, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);
		glRotatef(-60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, 0.6*keySize, 20, 20);
		glTranslatef(0, 0, 0.6*keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);
		
		glPushMatrix();
		glRotatef(-60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, 0.6*keySize, 20, 20);
		glTranslatef(0, 0, 0.6*keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();
		
		
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, 0.6*keySize, 20, 20);
		glTranslatef(0, 0, 0.6*keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);
		glPushMatrix();
		glRotatef(-60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, 0.6*keySize, 20, 20);
		glTranslatef(0, 0, 0.6*keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();
		
		
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, 0.6*keySize, 20, 20);
		glTranslatef(0, 0, 0.6*keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);
		glPushMatrix();
		glRotatef(-60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, 0.6*keySize, 20, 20);
		glTranslatef(0, 0, 0.6*keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();
		
		
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, 0.6*keySize, 20, 20);
		glTranslatef(0, 0, 0.6*keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);
		glPushMatrix();
		glRotatef(-60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, 0.6*keySize, 20, 20);
		glTranslatef(0, 0, 0.6*keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();
		
		
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, 0.6*keySize, 20, 20);
		glTranslatef(0, 0, 0.6*keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);
		glPushMatrix();
		glRotatef(-60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, 0.6*keySize, 20, 20);
		glTranslatef(0, 0, 0.6*keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();
		
		
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, 0.6*keySize, 20, 20);
		glPopMatrix();
		
	}

	//������
	if (n == 8) {
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);

		glPushMatrix();
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPushMatrix();
		glRotatef(120, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPushMatrix();
		glRotatef(240, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, S);
		glutSolidSphere(0.32, 20, 20);
		
		glRotatef(-70, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);
		
		glPushMatrix();
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPushMatrix();//��
		glRotatef(240, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();
		

		glPushMatrix();
		glRotatef(120, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPopMatrix();

	}

	//ɫ����------------δ���
	if (n == 9) {

	}

	//˿����
	if (n == 10) {
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);

		glPushMatrix();
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPushMatrix();
		glRotatef(120, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPushMatrix();
		glRotatef(240, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, O);
		glutSolidSphere(0.3, 20, 20);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

	}

	//�Ȱ�����
	if (n == 11) {
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);

		glPushMatrix();
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPushMatrix();
		glRotatef(120, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPushMatrix();
		glRotatef(240, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);

		glPushMatrix();
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPushMatrix();
		glRotatef(120, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPushMatrix();
		glRotatef(240, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);

		glPushMatrix();//˫����
		glRotatef(-90, 0, 1, 0);
		glTranslatef(0, 0.1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, -0.2, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0.1, 0);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, O);
		glutSolidSphere(0.3, 20, 20);
		glPopMatrix();

		glPushMatrix();
		glRotatef(60, 1, 0, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, N);
		glutSolidSphere(0.25, 20, 20);

		glPushMatrix();
		glRotatef(60, 1, 0, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);

		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);

		glPopMatrix();


		glPushMatrix();
		glRotatef(240, 0, 0, 1);
		glRotatef(60, 1, 0, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();
		glPopMatrix();



		glPopMatrix();



		glPopMatrix();

	}

	//�հ���
	if (n == 12) {
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);

		glPushMatrix();
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);

		glPushMatrix();
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPushMatrix();
		glRotatef(120, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPushMatrix();//��
		glRotatef(240, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();
		glPopMatrix();

		glPushMatrix();
		glRotatef(120, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPushMatrix();
		glRotatef(240, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, O);
		glutSolidSphere(0.3, 20, 20);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();
		
	}

	//���װ���
	if (n == 13) {
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);

		glPushMatrix();
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPushMatrix();
		glRotatef(120, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPushMatrix();
		glRotatef(240, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, S);
		glutSolidSphere(0.32, 20, 20);
		glRotatef(-70, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();
	}

	//�춬����
	if (n == 14) {
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);

		glPushMatrix();
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPushMatrix();
		glRotatef(120, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPushMatrix();
		glRotatef(240, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);
		
		glPushMatrix();
			glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
			gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
			glTranslatef(0, 0, keySize);
			glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, O);
			glutSolidSphere(0.3, 20, 20);
			glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
			gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
			glTranslatef(0, 0, keySize);
			glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
			glutSolidSphere(0.15, 20, 20);
		glPopMatrix();
		
		glPushMatrix();//˫����
		glRotatef(-90, 0, 1, 0);
		glTranslatef(0, 0.1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, -0.2, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0.1, 0);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, O);
		glutSolidSphere(0.3, 20, 20);
		glPopMatrix();
		glPopMatrix();
	}

	//�춬����
	if (n == 15) {
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);

		glPushMatrix();
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPushMatrix();
		glRotatef(120, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPushMatrix();
		glRotatef(240, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);
		
		glPushMatrix();//˫����
		glRotatef(-90, 0, 1, 0);
		glTranslatef(0, 0.1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, -0.2, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0.1, 0);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, O);
		glutSolidSphere(0.3, 20, 20);
		glPopMatrix();

		glPushMatrix();
		glRotatef(60, 1, 0, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, N);
		glutSolidSphere(0.25, 20, 20);

		glPushMatrix();
		glRotatef(60, 1, 0, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		
			glTranslatef(0, 0, keySize);
			glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
			glutSolidSphere(0.15, 20, 20);
		
		glPopMatrix();


		glPushMatrix();
		glRotatef(240, 0, 0, 1);
		glRotatef(60, 1, 0, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();
		glPopMatrix();

		glPopMatrix();
	}

	//�Ȱ���
	if (n == 16) {
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);

		glPushMatrix();
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPushMatrix();
		glRotatef(120, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPushMatrix();
		glRotatef(240, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);

		glPushMatrix();
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPushMatrix();
		glRotatef(120, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		
		glPushMatrix();//�Ȼ�
		glRotatef(240, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);

		glPushMatrix();
			glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
			gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
			glTranslatef(0, 0, keySize);
			glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, O);
			glutSolidSphere(0.3, 20, 20);
			glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
			gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
			glTranslatef(0, 0, keySize);
			glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
			glutSolidSphere(0.15, 20, 20);
		glPopMatrix();
		
		glPushMatrix();//˫����
		glRotatef(90, 0, 1, 0);
		glTranslatef(0, 0.1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, -0.2, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0.1, 0);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, O);
		glutSolidSphere(0.3, 20, 20);
		glPopMatrix();
		

		glPopMatrix();
		glPopMatrix();
	}

	//������
	if (n == 17) {
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);

		glPushMatrix();
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPushMatrix();
		glRotatef(120, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPushMatrix();
		glRotatef(240, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);

		glPushMatrix();
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPushMatrix();
		glRotatef(120, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPushMatrix();
		glRotatef(240, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);

		glPushMatrix();
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPushMatrix();
		glRotatef(120, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPushMatrix();
		glRotatef(240, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);

		glPushMatrix();
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPushMatrix();
		glRotatef(120, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPushMatrix();
		glRotatef(240, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, N);
		glutSolidSphere(0.25, 20, 20);

		glPushMatrix();
		glPushMatrix();
		glRotatef(60, 1, 0, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		
		glPopMatrix();


		glPushMatrix();
		glRotatef(240, 0, 0, 1);
		glRotatef(60, 1, 0, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();
		glPopMatrix();

		glPopMatrix();

		glPopMatrix();

		glPopMatrix();

		glPopMatrix();

	}

	//������
	if (n == 18) {
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);

		glPushMatrix();
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPushMatrix();
		glRotatef(120, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPushMatrix();
		glRotatef(240, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);

		glPushMatrix();
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPushMatrix();
		glRotatef(120, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPushMatrix();
		glRotatef(240, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, N);
		glutSolidSphere(0.25, 20, 20);

		glPushMatrix();
		glRotatef(60, 1, 0, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPushMatrix();
		glRotatef(240, 0, 0, 1);
		glRotatef(60, 1, 0, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);

		glPushMatrix();//˫��N
		glRotatef(90, 0, 1, 0);
		glTranslatef(0, 0.1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, -0.2, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0.1, 0);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, N);
		glutSolidSphere(0.25, 20, 20);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPushMatrix();
		glRotatef(240, 0, 0, 1);
		glRotatef(60, 0, 1, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, N);
		glutSolidSphere(0.25, 20, 20);

		glPushMatrix();
		glPushMatrix();
		glRotatef(60, 1, 0, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();

		glPushMatrix();
		glRotatef(240, 0, 0, 1);
		glRotatef(60, 1, 0, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();
		glPopMatrix();

		glPopMatrix();

		glPopMatrix();

		glPopMatrix();

		glPopMatrix();
	}

	//�鰱��---------δ���
	if (n == 19) {

	}

	//������---------δ���
	if (n == 20) {

	}
}

//����Ʈ��ģ��
void Amino::drawRibbon() {

}

