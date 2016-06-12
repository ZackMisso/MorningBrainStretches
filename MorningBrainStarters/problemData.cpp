#include "problemData.h"

ProblemData::ProblemData() {
	type = DATA_NONE;
}

ProblemData::~ProblemData() {
	// to be implemented
}

bool ProblemData::compare(ProblemData* data) {
	if (verify(data))
		return compareTo(data);
	return false;
}

bool ProblemData::verify(ProblemData* data) {
	return data->type == type;
}
