#include <iostream>
#include <fstream>
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
  int saveCount=0;
  int c=0;
  int mode= 0;

  std::cout<<data.ToString();
  if(data.Length() != 0){
    for(int i = 0; i<data.Length();i++){
      if(data[c] == data[i]){//every time the same number is the same increase count
        std::cout<<"\n data[i] ="<<data[i];
        count++;
        std::cout<<"\n data[c] ="<<data[c]<<"\n Count: "<<count<<"\n";
      }
      if(i == data.Length() - 1){
        // std::cout<<"\n data[i] ="<<data[i];
        // std::cout<<"\n data[c] ="<<data[c]<<"\n";
        if(saveCount<count){
          mode = data[c];//goes thru data once, mode is set to the first elements
          //if count is higher the second time replace mode with the new ele
        }
        i=0;//reset loop
        c++;//increase data[c];
        saveCount=count;//saves count from last loop cycle
        count=0;//reset count
      }else if(c == data.Length()-1){
        std::cout<<"\n final data[c] ="<<data[c]<<"\n";
        std::cout<<"Final Mode: "<<mode<<"\n";
        return mode;
      }
    }
  }
  return 0;
}



int main()
{
  ds::Vector<double> Data;
  // Data=15;
  // double array[] = {1,1,2,3,4,2,4,1};//does not count the last element of the array when formated like this
  double array[] = {2,4,1,3,5,1,3,1};//this format works fine
  std::cout<<"\n"<<Data.Length()<<"\n";

  for(int i = 0; i< 8; i++){
    Data.Insert(array[i]);
  }



  
  Mode(Data);

	return 0;
}
