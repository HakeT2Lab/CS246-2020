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
  int Divisor= 0;
  if(data.Length() != 0 ){
    for(int i =0; i< data.Length();){
      Divisor++;
      if(data[i] % Divisor == 0){//ex: 5/1 = 5  R =0, 5/2 = 2 R=1;
        
      }

    }
  }



  return 0;
}

int main()
{
  ds::Vector<ulong> Data;
  GCD(Data);

	return 0;
}
