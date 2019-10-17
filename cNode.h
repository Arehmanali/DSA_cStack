#pragma once
class cNode {
	int data;
public:
	cNode* next;
	int priority;
	cNode();
	cNode(int d);
	int getData()const;
	cNode* setData(int d);
	void print()const;
};
