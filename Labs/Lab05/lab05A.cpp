#include <iostream>
#include <string>
#include "Node.h"

/*
It returns the maximum value from the singly linked list referenced by root. If root is referencing an empty list, the
function returns 0.
*/

/*		idea:
	 1 8 3 2 10 4 1 5
	starts with 1, less than 8 so 8 replaces it
	
	next 8 is greater than 3 so it goes to the next node
	... 3 8 2...

*/
double Maximum(Node<double>* root){


	node *tmp = new root;
	tmp = root;

	while(root != NULL){
		if(tmp->data <= root->next->data ){
			tmp = root->next;
			
		}
		//does
		if(tmp->data > root->next->data){
			root->next;
		}

		if(root->next == NULL){
			return tmp;
		}
	}



	return 0;
}



int main()
{
	return 0;
}
/*
	orginal idea code:
		while(root != NULL){
		if(root->data <= root->next->data ){
			root = root->next;
			
		}
		//does
		if(root->data > root->next->data){
			root->next;
		}

		if(root->next == NULL){
			return root;
		}
	}




*/