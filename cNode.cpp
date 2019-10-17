#include "cNode.h"
#include<iostream>
using namespace std;

	cNode::cNode()
	{
		next = NULL;
		data = 0;
	}
	cNode::cNode(int d)
	{
		data = d;
		next = NULL;
	}
	int cNode::getData()const { return data; }
	cNode* cNode::setData(int d) {
		this->data = d;
	}
	void cNode::print()const {
		cout << "data is :" << data << endl;
	}

