#pragma once
#include"cQue.h"

class cPriorityQue :public cQue
{
public:
	cPriorityQue(cNode*& ptr); 
	cPriorityQue();
	cPriorityQue& add(cNode*& ptr);
	cPriorityQue(const cPriorityQue& src);
	cPriorityQue& operator =(const cPriorityQue& robj);
	void print()const;
	~cPriorityQue();
};

