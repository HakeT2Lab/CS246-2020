#include <iostream>
#include <string>
#include "Node.h"
#include "Array.h"
#include "Vector.h"
#include "Stack.h"
//I cannot get the IsEmpty function to work for data
//Problem 1
int MaximunCount(ds::Array<double>* data){
	int HighestNumberCounted;
    int count = 0;
    int nextNumCount=0;
    int c= 0;

	if(sizeof(data) != 0){
        HighestNumberCounted = data[0].Length();
        for(int i = 0; i < sizeof(data)-1; i++){//subtracted one as i was giving a blank spot
            std::cout<<"For resault: "<<data[i]<<"\n";
            if( HighestNumberCounted == data[i].Length()  ){//this counts HighestNumberCounted i just need figure out how to change the number of it
                nextNumCount++;
                std::cout<<"Count: " << count<<"\n";
                std::cout<<"nextNumCount: " << nextNumCount<<"\n";
            }
            if(c < sizeof(data)-1 && i== sizeof(data)- 2){
                HighestNumberCounted =data[c].Length();
                c++;
                if(count < nextNumCount){//highest count of the elements = count
                    count= nextNumCount;
                    nextNumCount=0;
                }
                nextNumCount=0;//reset count to check next number's
            i=0;//reset array
            }
        }
        return count;
    }
  return 0;
}


//Problem 4
//set is {1,2,3,4,7,6,5}
//set is not {1,1,2,5,2,3}
//no repeating numbers
//I find myself un able to add anything to data (a) to truely test my code
////I litterally can not do anything with this code without getting an error
template <typename T>
bool IsSet(ds::Array<T>& data){
  std::cout<<"Working\n";
  int count= 0;
  for(int i = 0; i  < data.Length(); i++){
    count++;
    std::cout<<"data[i]: "<< count<<"\n";
  }

  return false;
}



int main() {
    //Problem one;

  //currently works if array of numbers is not lower that the choosen number
  //Example: data[] = {1, 3, 5, 10, 7, 1} will not run properly
  ds::Array<double> data[] = { 1, 2, 3, 2, 2, 3, 4};
  //data[]={};
  //data[] = { 1, 2, 3, 2, 2, 3, 4};
  // ds::Array<double> data[] = {1, 3, 5, 0, 7};
  // std::cout<<"Test: "<<sizeof(data)<<"\n";
  MaximunCount(data);


  //Problem 4;
    ds::Array<int> a=9;
    a.Resize(6);
	

	// for(int i = 0;i < 10;i += 1)
	// {
	// 	// a[i] = (rand() % 100 + 1);
  //   // a[i]=2;
    
	// }

	std::cout << a.ToString() << "\n";
  IsSet(a);
}
