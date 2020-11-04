#include <iostream>
#include "Vector.h"
using namespace ds;


/*
Given that bd represents a chess board (8 × 8) that consists only of characters 'o' for free space and 'x' for occupied
space, the function returns true if a bishop whose start position is s can make it to the end position e in any number of
steps if s and e are both between 0 and 63 inclusively; otherwise, it returns false. It does not matter if the start and end
positions characters are 'o' or 'x'. However, movement to occupied spaces are prohibited. Since bd is in one-dimensional
array and s and e are coordinates represented in one-dimension, use the formulas


p(r,c)= r * 8 + c
r(p)= p / 8
c(p)= p % 8
where p(r,c) converts indices of a two-dimensional (8 × 8) array to an index of an equivalent one-dimensional array,
r(p) gets the row index for a two-dimensional (8 × 8) array from the index of an equivalent one-dimensional array, and
c(p) gets the column index for a two-dimensional (8 × 8) array from the index of an equivalent one-dimensional array.
Recall that a bishop in chess can only move diagonally.





*/

bool BishopMove(ds::Vector<char>& bd,int s,int e){

  // bd.Search(64, 4);
  std::cout<<"\nsearch test "<< bd.Search(64, 5)<<"\n";
  std::cout<<"\ns test "<< s<<"\n";
  std::cout<<"\ne test "<< e<<"\n";

  for(int i = 0; i < bd.Length(); i++){
    if(bd[i] >s && bd[i] <= e){
      if(bd.Contains('o')){
        return true;
      }
    }
    
  }

/*
  The ASCII value of X is 88
  The ASCII value of x is 120

  The ASCII value of O is 79
  The ASCII value of o is 111

*/

  return false;
}





int main() {


  ds::Vector<char> Board(64);
 //cord pairs is the represented by (p/8) * 8 + (p%8)
 //assuming p is 8 * 8 (64)

  int start = (8/8)*8+(8%8);
  //should be bottom left most corner

  int end = (64/8)*8+(64%8);
  //should be the upper right most corner

  

  std::cout<<"Value is: "<< BishopMove(Board, start, end);




  //std::cout << "Hello World!\n\n";






}