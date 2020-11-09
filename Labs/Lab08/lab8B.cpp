#include <iostream>
#include <fstream>

#include <stdlib.h>     //Used for random numbers

#include <string>
#include "Node.h"
#include "Vector.h"
#include "Map.h"
using ulong = unsigned long;
using namespace ds::sn;

/*
It returns the mode of the elements of data where the mode is the value that appears the most times. If data is empty
or data does not have a mode, it returns 0.
*/

double Mode(ds::Vector<double>& data){
  int count=0;
  int c=0;
  std::cout<<data.ToString();
  if(data.Length() != 0){
    std::cout<<"\nNot Zero\n";
    for(int i = 0; i<data.Length();i++){
      if(data[c] == data[i]){
        count++;
      }
      if(i == data.Length() - 1){
        i=0;
        c++;
        std::cout<< c <<"\n";
        count=0;
      }else if(c == data.Length()-1){
        std::cout<<"\n No Mode\n";
        return 0;
      }
    }
  }


  return 0;
}



int main()
{
  ds::Vector<double> Data;
  Data=15;
  std::cout<<"\n"<<Data.Length()<<"\n";

  for(int i = 0; i< Data.Length(); i++){
    // Data 
  }



  
  Mode(Data);

	return 0;
}
