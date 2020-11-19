#include <iostream>
#include <string>
#include "Vector.h"
#include "Node.h"
#include "Map.h"
using ulong = unsigned long;

int DuplicateSum(ds::Vector<int>& data)
{
  int c=0;
  int count=0;
  int sum=0;

  for(int i =0; i< data.Length(); i++){
    // std::cout<<"\ndata[i] = "<<data[i]<<"\n";
    if(data[c] == data[i]){
      // std::cout<<"data[c] = "<<data[c]<<"\n";
      count++;
    }

    if(i == data.Length()-1){
      if(count > 1){
        // std::cout<<"\n Sum C    = "<<data[c]<<"\n";
        //maybe something here to catch duplicate data[c]
        sum = sum + data[c];
      }
      i=0;
      c++;
      count=0;
      if(c== data.Length()-1){
        std::cout<<"\n Sum: "<<sum<<"\n";
        return sum;
      }
    }
  }
  return 0;
}


int main()
{
  ds::Vector<int> Data;
  double array[] = {1,2,2,1,4,3};
  //Problem I came across: Above numbers give a sum of 5(1 + 2 + 2) instead of 3(1 + 2)

  std::cout<<"\n"<<Data.Length()<<"\n";

  for(int i = 0; i< 6; i++){
    Data.Insert(array[i]);
  }

  DuplicateSum(Data);

	return 0;
}
