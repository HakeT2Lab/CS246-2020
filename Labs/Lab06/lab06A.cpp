#include <iostream>
#include "Node.h"


/*
Given that root is referencing a null-terminated doubly linked list, the function makes the last node of the linked list
referenced by root the new first node of the linked list referenced by root given that the linked list contains at least two
nodes.

ABC -> CAB

*/
//Define Function Here
template<typename T>
void ForwardRotation(ds::Node<T>*& root){
	//move the ending node to the begining of root
	Node<T> tmp = new Node;
	tmp= root;
	while(tmp->next != NULL){
		tmp = tmp->next;
	}
	root->link =  tmp;

	//now remove the last node
	while(root->next != NULL){
		root = root->next;
	}
	root->data = NULL;

	return root;
}


int main()
{
	return 0;
}
