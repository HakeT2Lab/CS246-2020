#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Node.h"
#include "ProjectA.h"

using namespace ds::sn;


int main(){
  Integer* intTest = new Integer(12345);
  cout<<intTest->ToString()<<"\n";

  Integer* stringTest = new Integer("54321");
  cout<<stringTest->ToString()<<"\n";

  Integer* doubleTest = new Integer(47622.94);
  cout<<doubleTest->ToString()<<"\n";  

  Integer* negintTest = new Integer(-12345);//was not able to get negatives to work in think.
  cout<<negintTest->ToString()<<"\n";
}