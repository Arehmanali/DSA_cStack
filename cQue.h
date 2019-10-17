#pragma once
#include"cStack.h"
class cQue :protected cStack {
public:
	cNode* tail;
	cQue();
	cQue(cNode*& ptr); 
	cQue& Add(cNode*& ptr);
	void print()const;
	cQue(const cQue& src);
	cQue& operator =(const cQue& robj);
	cNode* remove();
	~cQue();
};

