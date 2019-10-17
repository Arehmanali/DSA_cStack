#include "cPriorityQue.h"
#include <iostream>
using namespace std;


	cPriorityQue::cPriorityQue(cNode*& ptr) :cQue(ptr) {}
	cPriorityQue::cPriorityQue(){}
	cPriorityQue& cPriorityQue::add(cNode*& ptr)
	{
		if (!top)
		{
			top = tail = ptr;
			top->next = ptr = NULL;
		}
		else if (top->priority < ptr->priority)
		{
			cStack::push(ptr);
		}
		else if (tail->priority >= ptr->priority)
		{
			cQue::Add(ptr);
		}
		else
		{
			cNode* rptr = top;
			while (rptr->priority >= ptr->priority)
			{
				rptr = rptr->next;
			}
			ptr->next = rptr->next;
			rptr->next = ptr;
			ptr = NULL;
		}
		return *this;

	}
	cPriorityQue::cPriorityQue(const cPriorityQue& src)
	{
		this->top = src.top;
		this->tail = src.tail;
		if (src.top)
		{
			cNode* sptr, * dptr;
			dptr = top = new cNode(*src.top);
			sptr = top->next;
			while (sptr) {
				dptr->next = new cNode(*sptr);
				sptr = sptr->next; dptr = dptr->next;
			}
			tail = dptr;
		}
	}
	cPriorityQue& cPriorityQue::operator =(const cPriorityQue& robj)
	{
		if (this == &robj)
		{
			return *this;
		}
		if (true)
		{
			cPriorityQue temp;
			temp.top = top;
			temp.tail = tail;
		}
		if (true)
		{
			cPriorityQue temp = robj;
			top = temp.top;
			tail = temp.tail;
			temp.tail = temp.top = NULL;
		}
		return *this;
	}
	void cPriorityQue::print()const
	{
		cQue::print();
	}
	cPriorityQue::~cPriorityQue()
	{
		cQue::~cQue();
	}