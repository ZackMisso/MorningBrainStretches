#include "matrixData.h"

MatrixData::MatrixData(int r,int c) {
	rows = r;
	cols = c;
	mat = new float[r*c];
}

MatrixData::~MatrixData() {
	delete mat;
}

float MatrixData::getValueAt(int r,int c) {
	return mat[x][y];
}

void MatrixData::setValueAt(int r,int c,float val) {
	mat[r][c] = val;
}

void MatrixData::readData() {
	// to be implemented
}

void MatrixData::writeData() {
	// to be implemented
}
