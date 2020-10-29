#include <iostream>
#include <string>
#include "Node.h"
#include "Array.h"
#include "Vector.h"
#include "Stack.h"


/*Problem one
It returns the amount of times the maximum value of data appears in data. If data is empty, it returns
0. For instance, if data = [7, 1, 4, 9, 6, 7, 7, 3, 2, 6, 9, 5, 9], it will return 3 since 9 appears three times.
*/

int MaximunCount(ds::Array<double>* data){
	int HighestNum;
	int Count = 0;
	int idx= data[].length();

	if(){//if data is empty
		for(int i = 0; i < idx; i++){
			if(i != idx){ //this should mean that idx is not 0
			HighestNum = data[0];//first element
				if(HighestNum < data[i]){
					HighestNum = data[i];

					Count = 0;
					Count++;
				}else{
					count++;
				}
			}
		}

	

	return Count;
	}else{
		return 0;
	}

}

/*Problem 2
Given that root is referencing a doubly linked list, it sorts the list using the bubble sort method. It must
sort the data of the linked list; not the nodes of the linked list.
*/
template<typename T>
void BubbleSort(Node<T>* root){
	Node<T>* RTClone = new Node<T>;
	Node<T>* tmp = new Node<T>;
	RTClone = root;

	while(RTClone->next != NULL){//checks from begining to end
		if(RTClone->data > RTClone->next->data  ){	//if in 54321 if current (2) is more than next (1) swap
			tmp->data = RTClone->next->data;	//stores next data so 4
			RTClone->next->data = RTClone->data;	// replaces the lower num with the higher so i have 227245, tmp stores the 1
			RTClone->data == tmp->data;	//replaces the current node with tmps data 127245
			tmp=NULL;//clear data of tmp

		}//when this ends i should hav 122457
		RTClone= RTClone->next;
		
	}//by now i should be at the end of RTClone
				//if i somehow end up with ...769
	while(RTClone->prev != NULL){//Check in reverse
		if(RTClone->data < RTClone->prev->data){//if current is less than prev
			tmp->data = RTClone->prev->data;//tmp stores the prev
			RTClone->prev->data = RTClone->data;//set prev to curr
			RTClone->prev->data= tmp->data;//set curr to tmp
			tmp= NULL;//clear data of tmp
		}
		RTClone = RTClone->prev;
	}
	return RTClone;
}

/*Problem 3
It returns true if word represents a valid enclosure of a mixture of parentheses, (), and brackets, []; otherwise, it returns false. For instance, the function calls ValidEnclosure(''(([([])]))'') and ValidEnclosure(''([)]'')
will evaluate to true and false respectively.
*/
bool ValidEnclosure(string word){// given "([{}])" should give true;
	int idx=0;
	int PersenCount=0;
	int SquBrCount=0;
	int CurlBrCount= 0;
	/*
		The idea behind this is that it will push thruough the string 
		if i hit and parenthesiss or brakets i will increment the count for that type.
		
		I would than decrease the count if i find the corasponding closing type.

		If any of the counts are not 0 by the end, i return false
	*/

	ds::sn::Stack<char> s;
	while(word[idx] != '\0'){
		if(word[idx] == '(' ||word[idx] == '{'||word[idx] == "["){
			word.Push(word[idx]);

			if(word.IsEmpty()){
				return false;
			}else{
				word.Pop();

				if(word[idx] == '(' ){
					PersenCount++;
				}else if(word[idx] == '{' ){
					CurlBrCount++;
				}else if(word[idx] == '[' ){
					SquBrCount++;
				}else if(word[idx] == ')'){
					PersenCount--;
				}else if(word[idx] == '}'){
					CurlBrCount--;
				}else if(word[idx] == ']'){
					SquBrCount--;
				}
			}

		}else{
			return false;
		}
		idx++;
	}

	if(PersenCount != 0 && SquBrCount != 0 && CurlBrCount != 0){
		return false;
	}

	return word.IsEmpty();;
}


/**/




int main()
{
	return 0;
}
