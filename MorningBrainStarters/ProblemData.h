#pragma once

enum DataType {
	DATA_MATRIX,
	DATA_NONE
};

class ProblemData {
protected:
	DataType type;
	virtual bool compare(ProblemData* data) = 0;
public:
	ProblemData();
	~ProblemData();
	bool verify(ProblemData* data);
	bool compareTo(ProblemData* data);
	virtual void readData() = 0;
	virtual void writeData() = 0;
};
