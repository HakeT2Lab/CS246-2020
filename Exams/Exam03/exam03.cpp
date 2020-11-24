#include <iostream>
#include <string>
#include <cctype>
#include "Vector.h"
#include "Node.h"
#include "Queue.h"
#include "Map.h"
#include "HashTable.h"

//write work here
//Question 1
std::string CommonSuffix(ds::Vector<std::string>& words){
  if(words.Length() > 0){
    ds::Vector<std::string> returnStr;
    std::string saveWord;
    int v=0;
    for(int i = 0; i<words.Length(); i++){
      for(int c = 0; c < words[i].length(); c++){
        saveWord= words[i];
        if(saveWord[c] == 'l' && saveWord[c+1]== 'y' ){
          returnStr.Insert("ly");

        }else{
          returnStr.Insert("");

        }
        
      }
    }
    std::cout<<"\n"<<returnStr.ToString()<<"\n";
    
  }

  return "\0";
}

// void KeyPadWords(std::string number){
//   // A=1 B=1 C=1
//   //number to array
  
//   for(int i = 0; i < number.size(); i++){
//     if(number[i] == '2'){
//       std::cout<<" "<<
//     }
//   }

// }


//question 3
ulong TotalBoundedModes(ds::Vector<ulong>& data, ulong lo, ulong hi){
  if(data.Length() != 0){//one gives no mode
    //keys
    int n = data.Length();
    int c=0;
    // ulong holdmode = 0;
    // ulong mode=0;
    int count=0;
    int savecount=0;
    // int modecount=0;
    //key end

    for(int i =0; i < n;i++){
      // if(data[c] == data[i]){
      //   count++;
      // }
      // if(i == data.Length()-1){
      //   // if(savecount < count){
      //   //   std::cout<<"\n"<<savecount<<"\n";
      //   // }
      // }
      i=0;
      c++;
      savecount = count;
      count=0;


    }
  }

  return 0;
}


/*Problem 4
T(n)= AT(n/b) + n^k


a. T(n) = 4T(n/2) + n
by dividing case 1
A=4   B=2  k=1
log4 base 2= 2
1<2 ? yes
so:
T(n)= O(n^2)

b. T(n) = 9T(n/3) + n^2
by dividing case 1
log9 base 3 = 3
k=2
2<3 by case 3
T(n)= O(n^2)

c. T(n) = 6T(n/6) + 8
log6 base 6 = 1
k= 0
0<1

d. T(n) = T(n/5) + log (n)

e. T(n) = 2T(n/4) + lg (n)





*/


int main()
{
  //1
  ds::Vector<std::string> Data;
  Data.Insert("Hello");
  Data.Insert("Happily");
  Data.Insert("Sadly");
  Data.Insert("Bye");
  std::cout<<"\n"<<Data.ToString()<<"\n";
  // CommonSuffix(Data);

  //2
  // KeyPadWords("26");
  ds::Vector<ulong> Numbers;
  ulong target= 4;
  double array[] = {7, 2, 4, 3, 2, 8, 3, 9, 3, 2, 9, 4, 2, 5, 3};
  // std::cout<<"\n"<<Data.Length()<<"\n";
  for(int i = 0; i< 6; i++){
    Numbers.Insert(array[i]);
  }
  TotalBoundedModes(Numbers, 2, 9);


  
	return 0;
}
