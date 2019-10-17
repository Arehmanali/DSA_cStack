#include "cQue.h"
#include<iostream>
using namespace std;

	cQue::cQue()
	{
		tail = NULL;
	}
	cQue::cQue(cNode*& ptr) :cStack(ptr)
	{
		tail = top;
	}
	cQue& cQue::Add(cNode*& ptr)
	{
		if (tail)
		{
			tail->next = ptr;
			tail = tail->next;
		}
		else
		{
			tail = top = ptr;
		}
		tail->next = NULL;
		ptr = NULL;
		return *this;
	}
	void cQue::print()const {
		cStack::printStack();
	}
	cQue::~cQue() {
		cStack::~cStack();
	}
	cQue::cQue(const cQue& src)
	{
		this->top = src.top;
		this->tail = src.tail;
		if (src.top)
		{
			cNode* sptr, * dptr;
			dptr = top = new cNode(*src.top);
			sptr = src.top->next;
			while (sptr) {
				dptr->next = new cNode(*sptr);
				sptr = sptr->next; dptr = dptr->next;
			}
			tail = dptr;
		}
	}
	cQue& cQue::operator =(const cQue& robj)
	{
		if (this ==&robj) { return *this; }
		if (true)
		{
			cQue temp;
			temp.top = top;
			temp.tail = tail;
		}
		if (true)
		{
			cQue temp = robj;
			top = temp.top;
			tail = temp.tail;
			temp.top = temp.tail = NULL;
		}
		return *this;
	}
	cNode* cQue::remove()
	{
		if (!top->next)
		{
			tail = NULL;
			cStack::pop();
		}
		return *this;
	}
