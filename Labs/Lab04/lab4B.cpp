#include <iostream>
#include <string>
#include "Node.h"
/*
It returns true if the nodes of ar1 and ar2 with the same position have different values, but ar1 and ar2 are not
necessarily the same length; otherwise, it returns false..
*/

//Function Definition Here
template <typename T>
bool Different(ds::mn::Node<T>* ar1, ds::mn::Node<T>* ar2){


	ar1->Next->data;
	ar2->Next->data;
	if(ar1->data == ar2->data){
		return true;

	}

	//Return true if the loop terminates
	return false;
}



int main()
{
	return 0;
}
