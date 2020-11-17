#include <iostream>
#include <string>
#include "Vector.h"
using ulong = unsigned long;


/*
It returns the greatest common divisors of the elements of data where the greatest common divisor is the greatest
number that can divide all the elements evenly. If data is empty, it returns 0. You can only use functions you define to
help define GCD().

*/

ulong GCD(ds::Vector<ulong>& data){
  std::cout<<"\nActive\n";
  int GCD= 0;
  int k=0;

  int saveGCD;
  if(data.Length() != 0 ){
    for(int i =0; i< data.Length();i++){
      std::cout<<"\n Data[i]: "<<data[i];
      std::cout<<"\n Data[k]: "<<data[k]<<"\n";
      saveGCD= data[i] % data[k];// when i = to the size-1 incrament k
      // GCD=saveGCD;
      if(saveGCD>GCD){
        GCD= saveGCD;
      }
      std::cout<<"\n GCD= "<<GCD<<"\n";
      if(i == data.Length()-1){
        if(k == data.Length()-1){
          return GCD;
        }
        i=-1;//so it counts the first element as 0 seems to make it start from 1
        k++;
        saveGCD=0;
      }
    } 
  }


  std::cout<<"\n Returned Empty";
  return 0;
}

int main()
{
  ds::Vector<ulong> Data;
  double array[] = {2,6,24};

  for(int i = 0; i< 3; i++){
    Data.Insert(array[i]);
  }
  GCD(Data);

	return 0;
}
