#include "cStack.h"
#include<iostream>
using namespace std;

	cStack::cStack() :top(NULL) {}
	cStack::cStack(cNode* ptr)
	{
		top->next = NULL;
		ptr = NULL;
	}
	bool cStack::isNotEmpty()const
	{
		if (top)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	bool cStack::isEmpty()const
	{
		if (top) { return false; }
		else { return true; }
	}
	cStack& cStack::push(cNode* ptr)
	{
		ptr->next = top;
		top = ptr;
		ptr = NULL;
		return*this;
	}
	cStack& cStack::pop()
	{
		cNode* ptr = top;
		top = top->next;
		ptr->next = NULL;
		return *this;
	}
	void cStack::printStack()const
	{
		if (!top) { cout << "Stack Empty" << endl; }
		else {
			cNode* ptr = top;
			while (ptr) {
				ptr->print();
				ptr = ptr->next;
			}
		}
	}
	cStack::~cStack()
	{
		cNode* ptr = top;
		while (ptr) {
			ptr = ptr->next;
			delete top;
			top = ptr;
		}
	}
	cStack::cStack(const cStack& src)
	{
		this->top = src.top;
		if (src.top)
		{
			cNode* sptr, * dptr;
			dptr = top = new cNode(*src.top);
			sptr = src.top->next;
			while (sptr) {
				dptr->next = new cNode(*sptr);
				sptr = sptr->next; dptr = dptr->next;
			}
		}
	}
	cStack& cStack::operator=(const cStack& robj)
	{
		if (this == &robj) {
			return*this;
		}
		if (true) {
			cStack temp; temp.top = top;
		}
		if (true) {
			cStack temp = robj; top = temp.top;
			temp.top = NULL;
		}return *this;
	}
