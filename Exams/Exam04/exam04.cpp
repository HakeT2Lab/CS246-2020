#include <iostream>
#include <cstdlib>
#include <ctime>
#include "BTNode.h"
#include "Repository.h"
#include "Vector.h"
#include "Node.h"

/*********************************************************************
Data Structure Namespaces
data structure		name		namespace	
vector			Vector		ds
singly linked node	Node		ds::sn
doubly linked node	Node		ds::mn
binary tree node	BTNode		ds::bn
*********************************************************************/

/*********************************************************************
Define functions below here
*********************************************************************/
//Problem 1
/*
Given that rt is referencing a binary tree, the function removes the node of the tree whose data is equal to value.
If the tree is empty or value is not found, it does nothing.
*/
template<typename T>
void BTRemove(ds::bn::BTNode<T>*& rt,const T& value){
  if(rt != NULL){
    ds::bn::BTNode<T>*& tmpLeft=rt->left; 
    ds::bn::BTNode<T>*& tmpRight=rt->right; 

    if(IsLeaf(rt->left) == true && rt->left->data == value){//search left
      rt->left= NULL;//deletes node 
    }else if(IsLeaf(rt->right) == true && rt->right->data==value){//search right
      rt->right = NULL;
    }else{
       if(BTSearch(rt, value) != NULL  ){//if the search does not fail
       //if node is not a leaf, and is a sub tree instead
        if(tmpLeft->data == value){//check left, if subtree delete value than replace with the rest of the tree
          tmpLeft = NULL;//delete current value
          rt->link(tmpLeft->left);
        }else if(tmpRight->data == value){
          tmpRight = NULL;//delete current value
          rt->link(tmpRight->left);
        }

      }
    }

  }
    
}

//problem 2
/*
Given that rt is referencing a doubly linked list whose data is sorted, the function removes all duplicate values
from the linked list in O(n) runtime where n is the length of the list. For instances, if rt = [1, 1, 3], after the call
it will be [1, 3].

know i have to reduce size, may be move duplicate numbers outside of size
*/
void SortedDuplcatesRemoval(ds::mn::Node<int>*& rt){
  //already sorted
  //Hint: Use two node pointers and compare adjacent nodes.
//   ds::mn::Node<int>* rtSize=rt;
//   int n=0;//size of rt
//   while(rtSize != NULL){
//     rtSize= rtSize->next;
//     n++;
//   }

  ds::mn::Node<int>* rtCopy=rt;

  if(rt != NULL){// as this is a void i can not return 0, as such the function will do nothing if == NULL
    while(rt->next != NULL){
      if(rt->data == rtCopy->data){//rt and rtCopy are adjacent nodes(one apart)
        rt= rtCopy->next;// is lList  is [1,1,3] sets it to [1,3,3]
        Clear(rt->next);//i think this deletes the node// clears rt's next node so we get [1,3]

        rtCopy= rtCopy->next;// moves to rtCopy's next node
      }else{
        rt=rt->next;
      }
      
    }
  }

}

//problem 3
ulong MinimumKSum(ds::Vector<ulong>& data,ulong k){
  if(!data.IsEmpty()){//if not empty
    int c=0;
    int count=0;
    int sum=0;
    int num = data[0];
    int preNum;
    if(data.Length() < k){
      for(int i =0; i< data.Length(); i++){
        if(data[i] < num){
          num= data[i];//get the smallest number
        }
        if(num< data[c]){//go thru data again but looking for a number not less that current num
          preNum=num;
          num=data[c];
        }
        if(data[i] < num && data[i] > preNum){
          num= data[i];
        }

        if(data[i]== data.Length()){
          count++;
          c++;
          i=0;
          sum=sum+num;
          if(count == k){
            return sum;
          }
        }
      }
    }
  }
  return 0;
}






/*********************************************************************
Define functions above here
*********************************************************************/

int main()
{
	//Write problem 4 solutions as string literal arguments 
	//for each of the following cout statememts
	std::cout << "Infix: {40, 43, 11, 21, 47, 14, 5}\n";

	std::cout << "Postfix:{40, 11, 43, 47, 5, 14, 21}\n";

	std::cout << "Prefix: {21, 43, 40, 41, 14, 47, 5}";

	return 0;
}
