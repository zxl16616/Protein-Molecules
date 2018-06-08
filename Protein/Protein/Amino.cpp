#include "Amino.h"

/*
//°±»ùËá±àÂë

1--¸Ê°±Ëá     2--±û°±Ëá   3--ÀÒ°±Ëá    4--ÁÁ°±Ëá      5--ÒìÁÁ°±Ëá   6--çÓ°±Ëá     7--±½±û°±Ëá
8--¼×Áò°±Ëá   9--É«°±Ëá   10--Ë¿°±Ëá   11--¹È°±õ£°·   12--ËÕ°±Ëá    13--°ëë×°±Ëá  14--Ìì¶¬°±Ëá
15--Ìì¶¬õ£°·  16--¹È°±Ëá  17--Àµ°±Ëá   18--¾«°±Ëá     19--×é°±Ëá    20--¸¬°±Ëá
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

//»æÖÆµ¥¶À°±»ùËá
void Amino::drawAmino(int n) {
	GeneralAmino();
	drawR(n);
}

//°±»ùËá½á¹¹Í¨Ê½
void Amino::GeneralAmino()  
{
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
	glutSolidSphere(0.2, 20, 20);

	glPushMatrix();//°±»ù
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
	
	glPushMatrix();//Çâ
	glRotatef(120, 0, 0, 1);
	glRotatef(120, 1, 0, 0);
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
	gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
	glTranslatef(0, 0, keySize);
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
	glutSolidSphere(0.15, 20, 20);
	glPopMatrix();
	
	glPushMatrix();//ôÈ»ù
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
	glPushMatrix();//Ë«¼üÑõ
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

//ÉèÖÃ¼ü³¤
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

//»æÖÆË®·Ö×Ó
void Amino::drawH2O() {				//»æÖÆË®·Ö×Ó
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

//»æÖÆ¶àëÄÁ´
void Amino::drawPeptideChain(int n,int array[])
{
	
	if (n == 1) { //»­Ò»¸ö°±»ùËá·Ö×Ó
		drawAmino(array[0]);
	}

	else if (n >= 2) {
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);

		glPushMatrix();//°±»ù
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

		glPushMatrix();//Çâ
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
		
		glPushMatrix();//ôÈ»ù
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);
		
		glPushMatrix();//Ë«¼üÑõ
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
		//Ñ­»·
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
		glPushMatrix();//Çâ
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
		glPushMatrix();//ôÈ»ù
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, C);
		glutSolidSphere(0.2, 20, 20);

		glPushMatrix();//Ë«¼üÑõ
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
		//×îºóÒ»¸ö°±»ùËá·Ö×Ó


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
		glPushMatrix();//Çâ
		glRotatef(60, 1, 0, 0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();
		//======================
		glPushMatrix();//ôÈ»ù
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
		
		glPushMatrix();//Ë«¼üÑõ
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

//»æÖÆR»ù
void Amino::drawR(int n)  //¸ù¾ÝÊäÈëµÄ²ÎÊý»æÖÆ°±»ùËáµÄR»ù
{
	//¸Ê°±Ëá
	if (n == 1) {
		//R»ù
		glPushMatrix();
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, key);
		gluCylinder(qObj, 0.05, 0.05, keySize, 20, 20);
		glTranslatef(0, 0, keySize);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, H);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();
	}

	//±û°±Ëá
	if (n == 2) {
		//R»ù
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

	//ÀÒ°±Ëá
	if (n == 3) {
		//R»ù
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

		glPushMatrix();//±½»·

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

	//ÁÁ°±Ëá
	if (n == 4) {
		//R»ù
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

		glPushMatrix();//Çâ
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

		glPushMatrix();//Çâ
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

	//ÒìÁÁ°±Ëá
	if (n == 5) {
		//R»ù
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

		glPushMatrix();//Çâ
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

		glPushMatrix();//Çâ
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

	//çÓ°±Ëá
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

		glPushMatrix();//Çâ
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

		glPushMatrix();//Çâ
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

	//±½±û°±Ëá
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

	//¼×Áò°±Ëá
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

		glPushMatrix();//Çâ
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

	//É«°±Ëá------------Î´Íê³É
	if (n == 9) {

	}

	//Ë¿°±Ëá
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

	//¹È°±õ£°·
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

		glPushMatrix();//Ë«¼üÑõ
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

	//ËÕ°±Ëá
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

		glPushMatrix();//Çâ
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

	//°ëë×°±Ëá
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

	//Ìì¶¬°±Ëá
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
		
		glPushMatrix();//Ë«¼üÑõ
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

	//Ìì¶¬õ£°·
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
		
		glPushMatrix();//Ë«¼üÑõ
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

	//¹È°±Ëá
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

		
		glPushMatrix();//ôÈ»ù
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
		
		glPushMatrix();//Ë«¼üÑõ
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

	//Àµ°±Ëá
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

	//¾«°±Ëá
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

		glPushMatrix();//Ë«¼üN
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

	//×é°±Ëá---------Î´Íê³É
	if (n == 19) {

	}

	//¸¬°±Ëá---------Î´Íê³É
	if (n == 20) {

	}
}

//»æÖÆÆ®´øÄ£ÐÍ
void Amino::drawRibbon() {

}

