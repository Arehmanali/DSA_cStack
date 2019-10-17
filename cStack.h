#pragma once
#include"cNode.h"
class cStack {
public:
	cNode* top;
	cStack();
	cStack(cNode* ptr);
	bool isNotEmpty()const;
	bool isEmpty()const;
	cStack& push(cNode* ptr);
	cStack& pop();
	void printStack()const;
	cStack(const cStack& src);
	cStack& operator=(const cStack& robj);
	~cStack();
};

