#include "sphereData.h"

SphereData::SphereData() {
	rad = 1.0f;
	pos = new float[3];
}

SphereData::~SphereData() {
	delete pos[];
}

bool SphereData::compare(ProblemData* data) {
	// to be implemeneted
	return false;
}

float SphereData::getPos(int d) {
	return pos[d];
}

float SphereData::getRad() {
	return rad;
}

void SphereData::setPos(int d,float val) {
	pos[d] = val;
}

void SphereData::setRad(float val) {
	rad = val;
}

void SphereData::readData() {
	// to be implemented
}

void SphereData::writeData() {
	// to be implemented
}
