#pragma once

class TriangleData {
private:
	float* pos;
	int dim;
protected:
	virtual bool compare(ProblemData* data);
public:
	TriangleData(int d);
	~TriangleData();
	float getPoint(int point,int d);
	void setPoint(int point,int d,float val);
	virtual void readData();
	virtual void writeData();
};
