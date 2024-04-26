#pragma once
class ALU
{
private:
	int NoOfAdders;
	int NoOfSubtractor; 
	int NoOfRegisters;
	int sizeOfRegisters;

public:

	ALU();
	
	ALU(int adders, int subtractors, int registers, int size);


	int getNoOfAdders() const;
	int getNoOfSubtractor() const;
	int getNoOfRegisters() const;
	int getsizeOfRegisters() const;

	void setNoOfAdders( int adders);
	void setNoOfSubtractor(int subtractors);
	void setNoOfRegisters(int registers);
	void setsizeofRegisters(int size);

	
};

