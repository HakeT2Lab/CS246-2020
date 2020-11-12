#include <iostream>
#include <string>
#include <sstream>
#include "Node.h"
#include "Map.h"
#include "Vector.h"
using ulong = unsigned long;

//Define Function Here
//Singlely linked node
template<typename T>
bool HasCycle(ds::sn::Node<T>* root){
  ds::sn::Node<T>* rtClone = new ds::sn::Node<T>;
  ds::sn::Node<T>* rtTpClone = new ds::sn::Node<T>;
  ds::sn::Node<T>* tmp = new ds::sn::Node<T>;

  rtClone =root;
  rtTpClone= root;//is the previous node
  rtTpClone= rtTpClone;//rtTpClone is ahead of rtClone
  tmp= root;
  if(root->link != NULL){
    std::cout<<"\n"<<"Full"<<"\n";
    
    while(rtClone->Link != NULL && rtTpClone->link != NULL){
      if(rtClone->data != rtTpClone->data){
        rtTpClone = rtTpClone->Link;
      }else{
        return true;
      }

    }



    if(rtClone->data == rtTpClone->data){
      return true;
    }


    // while(rtClone != NULL){
    //   std::cout<<"\n"<<rtClone->data<<"\n";
    //   rtClone = rtClone->link;
    // }
  
    // return 1;
  }
  
  std::cout<<"\n"<<"Empty"<<"\n";
  return false;
}

int main(){
  ds::sn::Node<int>* root;
  for(int i=0; i<5; i++){
    ds::sn::Insert(root, root, 4);

  }
  



  HasCycle(root);
	return 0;
}
