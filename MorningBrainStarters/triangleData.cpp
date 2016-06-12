#include "triangleData.h"

TriangleData::TriangleData(int d) {
	dim = d;
	pos = new float(3*d);
}

TriangleData::~TriangleData {
	delete pos[];
}

bool TriangleData::compare(ProblemData* data) {
	// to be implemented
	return false;
}

float TriangleData::getPoint(int point,int d) {
	return pos[dim*point + d];
}

void TriangleData::setPoint(int point,int d,float val) {
	pos[dim*point + d] = value;
}

void TriangleData::readData() {
	// to be implemented
}

void Triangle::writeData() {
	// to be implemented
}
