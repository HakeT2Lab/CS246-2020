#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Node.h"
#include "ProjectA.h"

using namespace ds::sn;


int main(){
  Integer<int>* Test = new Integer<int>(54);
  std::cout<<Test->ToString();
  return 0;
}