#pragma once

class SphereData : public ProblemData {
private:
	float* pos;
	float rad;
protected:
	virtual bool compare(ProblemData* data);
public:
	SphereData();
	~SphereData();
	float getPos(int d);
	float getRad();
	void setPos(int d,float val);
	void setRad(float r);
	virtual void readData();
	virtual void writeData();
};
