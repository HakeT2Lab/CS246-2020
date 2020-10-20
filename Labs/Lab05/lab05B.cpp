#include <iostream>
#include <string>
#include "Node.h"


/*
It appends the linked list referenced by addon to the linked list referenced by data starting after the middle
node of data. For instances, if data = [a, b, c, d, e] and addon = [f, g, h, i, j]; then after the call of the function,
data = [a, b, f, g, h, i, j, c, d, e].


1) Create a code that will create a new node as to not effect the root(or data in this case).

2) Use eqation that would divide the idx of the node in half and gives me with the lower of the new numbers
	Ex: idx = 5 ->  5/2 will return me 2

3) Condiction that will start copying the root over to a temp array, but will stop at the number returned by step 2.
	...->link = addon
	treverse addon to get last elment

4) Return tmp.
*/

template <typename>
void MidAppend(Node<T>*& data,Node<T>* addon){
	int DataIdxCount= 0;
	int SaveIdxCount= 0;
	int AddonIdxCount = 0;
	
	// node* Appended = new node;//blank linked list
	// node *tmp = new node; // 1)

	Node<T>* save = data;//creates a save of data, so i can treverse it and get the length
	while(data->next != NULL){
		save = save->next;//traverses linklist
		DataIdxCount++;//counts nodes in linkedlist

		addon = addon->next;//trevrse addon
		AddonIdxCount++;
	}
	while(data != NULL){
		if(SaveIdxCount == DataIdxCount/2){
			tmp = tmp->next; //first move space   3
			tmp->link = addon;// fill in that space 3= ...
			tmp = tmp->next;// move to next space 4
			SaveIdxCount++;
			/*	What I think this will do:
				If the idex of Save(tmp)count = dataCount/2, 
					1) Moves to next node
					2) Fills in that node with the entire linkedlist addon
					4) Moves to next node once more
					5) increment the count
			*/
		}else{
			tmp = tmp->next;
			data = data->next;
			tmp->link = data;
			SaveIdxCount++;
			/*	What I think this will do:
				While Save(tmp)count = dataCount/2
					1) first node of tmp = first node pf data
					2) line 57: As both tmp and data are equal to there next node
						i link them, as such each tmp node when triggered = data's node
			
			*/
		}
	}

	return tmp;

}

//&& SaveIdxCount < (DataIdxCount/2 + AddonIdxCount+ 1)
/*
Given that op1 and op2 references doubly linked lists that represent binary numbers, the function returns true
if the list referenced by op1 is not equal the list referenced by op2 . For instances, if op1 = [0, 0, 1, 1, 0] and
op2 = [1, 0, 0, 1], the function will return true. Do not assume that the lists are the same size.

*/

bool NotEqual(Node<bool>* op1,Node<bool>* op2){

	while(op1 != NULL && op2 != NULL){ 
		if(op1->next != op2->data){//identical length linkedlist
			if(op1->data > op2->data || op1->data > op2->data){
				return true;
				
			}
		}

		//if the 2 linkedlist in length are not equal it will use this
		if((op1->next == NULL && op2->next !=NULL)||
		(op1->next != NULL && op2->next ==NULL)){
			return true;
		}
		op1 = op1->next;
		op2 = op2->next;
	}

	return false;
}




int main()
{
	return 0;
}


/*	Adds a new node
	node *tmp = new node;
	tmp->data = n;
	tmp->next = NULL;


*/