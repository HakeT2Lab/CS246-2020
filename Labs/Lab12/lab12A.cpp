#include <iostream>
#include "BTNode.h"
/*
Given that rt is referencing a binary search tree, it returns the node of the tree that has the minimum data if the
tree is not empty; otherwise, it returns NULL.

*/
template <typename T>
ds::da::BTNode<T>* TreeMininum(ds::da::BTNode<T>* rt){
  bool left=true;
  for(int i= 0; i<3;i++){
    if(i == 2){

    }
  }

}


template <typename T>
int TreeDepth(ds::da::BTNode<T>* rt){

}

int main() {
  
	ds::sn::BTNode<int>* Test[2];
	Test[0] = ds::sn::Create(1);
  Test[0]->left= ds::sn::Create(3);
  Test[0]->right= ds::sn::Create(2);

  // std::cout<<Test[1] << "\n\n";
  std::cout<<LEFT(1) << "\n\n";
  std::cout<<RIGHT(1) << "\n\n";
  std::cout<<RIGHT(0) << "\n\n";
  std::cout<<LEFT(0) << "\n\n";

  return 0;

}