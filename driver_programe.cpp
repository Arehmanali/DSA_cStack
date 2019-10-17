#include<iostream>
#include"cNode.h"
#include"cStack.h"
#include"cQue.h"
#include"cPriorityQue.h"
using namespace std;
int main()
{
	/***************************************************************
		Driver Program For cNode Class
	 ***************************************************************/
	cNode* c1, c2, * c3, * c4, * c5;
	c1 = new cNode(1);
	c2.setData(2);
	c3 = new cNode(3);
	c4 = new cNode(4);
	c5 = new cNode(5);
	c1->print();
	c2.print();
	/***************************************************************
		Driver Program For cStack Class
	 ***************************************************************/
	cStack s1;
	s1.push(c1);
	s1.push(c3);
	s1.push(c4);
	s1.push(c5);
	s1.printStack();
	s1.pop();
	s1.printStack();
	cStack s2(s1);		//Testing the copy Constructor
	s2.printStack();
	cStack s3 = s2;		//Testing the Assignment Operator
	s3.printStack();
	/***************************************************************
		Driver Program For cQue Class
	 ***************************************************************/
	cQue q1;
	q1.Add(c1);
	q1.Add(c3);
	q1.Add(c4);
	q1.Add(c5);
	q1.print();
	q1.remove();
	q1.print();				
	cQue q2(q1);			//Testing the copy Constructor
	q2.print();
	cQue q3 = q2;			//Testing the Assignment Operator
	q3.print();

	/***************************************************************
		Driver Program For cPriorityQue Class
	 ***************************************************************/
	cPriorityQue pq1;
	pq1.add(c1);
	pq1.add(c3);
	pq1.add(c4);
	pq1.add(c5);
	pq1.print();
	pq1.remove();
	pq1.print();
	cPriorityQue pq2(pq1);					//Testing the copy Constructor
	pq2.print();
	cPriorityQue pq3 = pq2;					//Testing the Assignment Operator
	pq3.print();
	return 0;
}