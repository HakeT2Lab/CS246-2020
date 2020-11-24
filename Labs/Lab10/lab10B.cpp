#include <iostream>
#include <string>
#include "Vector.h"
#include "Node.h"
#include "HashTable.h"
using ulong = unsigned long;


bool TwoSum(ds::Vector<ulong>& data, ulong target){
  // std::cout<<"is working";
  ulong sum=0;
  ulong sumtwo;
  int c=0;
  if(data.Length() != 0){
    if(target < 1000){
      for(int i = 0; i< data.Length(); i++){
        sum = sum + data[c];
        if(i == data.Length()-1){
          if(sumtwo == sum){
            sumtwo = sum;
            sum = 0;

            }
          }
          sumtwo = sum;
          i=0;
          c++;
        }
      }
      if(c== data.Length()-1){
        if(){
          return true;
        }else{
          return false;
        }
      }

    }else if(target >= 1000 || data.Length() <= 1){
      return false;
    }else{
      return false;
    }

  return false;
}



int main()
{
  ds::Vector<ulong> Data;
  ulong target= 4;
  double array[] = {1,2,2,1,4,3};
  //Problem I came across: Above numbers give a sum of 5(1 + 2 + 2) instead of 3(1 + 2)

  std::cout<<"\n"<<Data.Length()<<"\n";

  for(int i = 0; i< 6; i++){
    Data.Insert(array[i]);
  }

  TwoSum(Data, target);

	return 0;
}
