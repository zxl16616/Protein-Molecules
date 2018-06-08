#include <gl\glut.h>
#include <gl\GL.h>
#include <gl\GLU.h>

#pragma once
class Amino
{

public:
	Amino();
	~Amino();

	GLUquadric *qObj;
	GLfloat keySize = 0.7;
	GLfloat C[4] = { 0, 1, 0, 1.0 };
	GLfloat H[4] = { 0.7f, 0.7f, 0.7f, 1.0f };
	GLfloat O[4] = { 0, 0, 1, 1.0 };
	GLfloat N[4] = { 1, 0, 0, 1.0 };
	GLfloat S[4] = { 1, 1, 0, 1.0 };
	GLfloat key[4] = { 1, 1, 1, 1.0 };
	static int Amino_acid[];
	int flag = 0;//标志位，如果标志位为1，则绘制的氨基酸不绘制-H
	int flag2 = 0;
	
	void drawAmino(int n);
	void GeneralAmino();
	void setkeySize(float n);
	float getkeySize();
	void setFlag(int n);
	void setFlag2(int n);
	void drawH2O();
	void drawPeptideChain(int n,int array[]);
	void drawR(int n);

	void drawRibbon();



};

