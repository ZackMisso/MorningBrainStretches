#include "problem.h"

Problem::Problem() {
	solution = 0x0;
	data = 0x0;
}

Problem::~Problem() {
	delete solution;
	delete data;
}

void Problem::tryProblem() {
	// to be implemented
}