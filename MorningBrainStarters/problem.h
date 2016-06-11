#pragma once

#include "problemSolution.h"
#include "problemDataContainer.h"
#include "problemBatch.h"

class Problem {
private:
	ProblemSolution* solution;
	ProblemDataContainer* data;
public:
	Problem();
	~Problem();

	virtual ProblemBatch* makeBatch(int size) = 0;
	virtual void checkSoluion(const ProblemSolution& candidate) = 0;
	virtual void initializeRandomData() = 0;
	virtual void computeSolution() = 0;
	virtual void takeInput() = 0;
	bool tryProblem();
};