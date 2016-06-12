#pragma once

#include "problemData.h"

class MatrixData : public ProblemData {
private:
	int rows;
	int cols;
	float* mat;
protected:
	virtual bool compare(ProblemData* data);
public:
	MatrixData(int r,int c);
  ~MatrixData();
	float getValueAt(int r,int c);
	void setValueAt(int r,int c,float val);
	virtual void readData();
	virtual void writeData();
};
