#ifndef MYCALENDAR_H
#define MYCALENDAR_H

#include <iostream>
#include <string>
#include <sstream>
#include "Node.h"
#include "Map.h"
#include "Vector.h"
using ulong = unsigned long;
using namespace ds::da;



namespace ds
{
	class Calendar
	{
		public:
		virtual bool Book(ulong,ulong) = 0;
	};
  
	class MyCalendar : public Calendar
	{
		public:
    //default constructor
		MyCalendar(){
      int days = 365;
      ds::da::Map<int, std::string>* calender = new ds::da::Map<int, std::string>(days);


      for(int i =0; i < days; i++){
        calender->Put(i,"No Event " );
      }
    }
    //overloaded  constructor
    //years in days 365 =1 year
		MyCalendar(ulong years){
      if(years != 0){

      }
  
    }
    //copy constructor
		MyCalendar(const MyCalendar&);
    
		MyCalendar& operator=(const MyCalendar&);
		bool Book(ulong,ulong);
	};
}


int main(){
  // srand(time(NULL));
  // int days = 365;
	// ds::MapInterface<char,int>* a[3] = {new ds::da::Map<char,int>(30),new ds::sn::Map<char,int>(),new ds::mn::Map<char,int>()};

  // new ds::da::Map<std::string, int>("Hello");
  ds::da::Map<ulong, ulong>* Test = new ds::da::Map<ulong, ulong>;
    
  // char Num;


  // // for(int i =0; i < days; i++){
  // //   // Num= (char)i;
  // //   // Test->Put(Num,"Testing: " );
  // //   Test->Put(i,"Testing: " );
  // // }
  // // std::cout<<"\n"<<Test->Get('1')<<"\n";
  //   Test->Get(2)= "Hello \n";
    
  //   Test->Get(2)+= "Good bye\n";
  //   std::cout<<"\n"<<Test->Get(364)<<"\n";

  ulong i= 100;
  ulong k= 300;
    MyCalendar();
  std::cout<<i;
  
  return 0;
}
#endif
