#include <iostream>
#include "Vector.h"
using namespace ds;


/*
  //Using Black bishop
*/

bool BishopMove(Vector<char>& bd,int s,int e){
  // if( bd.Search(bd.Length(), 'S') ){
 
  //   std::cout<<"\nYou Start here\n";
  // }if(bd.Search(bd.Length(), 'E')){
  //     std::cout<<"\nYou end here\n";
  // }

/*
Two perpendicular movements are implemented by moving 9 and 7 spaces back and forward repectivly.

Ex: +9, amd -9 move along the same line

1) Cover bishop's dignal movements, check with lower left to upper right. 
  -test with placement of start and end swapped
  
  

2) check from upper left to lower right
  -test with placement of start and end swapped

3) Make code to calculate right direction 


*/


  //First directions
  int move = 7;
  int firstLine = s;//first perpendicular line starts at Start(s)
  int secondLine = s;//second perpendicular line starts at Start(s)
  int mFL= firstLine+move;//Up the first line
  int rmFL= firstLine - move;// down the first line

  if(bd.Length() != 0){//not empty
  //Up chosen Line
    for(int i =0; i < bd.Length(); i++){
      // std::cout<<" "<<bd[i]<<" ";//print Array  
      if(i==mFL && mFL + move < 64 ){ 
        bd[i]= 'H';    
        mFL+=move;
      }
      if(bd[mFL] == 'x'){
        std::cout<<"returned false\n";
        return false;
      }

    }
    std::cout<<"\n\n";//print Array  
    //Down chosen line
    for(int i = bd.Length()-1; i >= 0; i--){
         
      if(i==rmFL && rmFL >0 ){  
        bd[i]= 'V';
          rmFL-=move;
      }
      std::cout<<" "<<bd[i]<<" ";//print Array
      if(bd[mFL] == 'x'){
        std::cout<<"returned false";
        return false;
      }
      
    }
  } 
    

  


  
  



  return false;
}





int main() {


  Vector<char> Board(64);
 //cord pairs is the represented by (p/8) * 8 + (p%8)
 //tests movements parellel to line 1A -> 8H 
 //move =7
  int startRow = 0;
  int startCol = 0;
  int endRow =56;
  int endCol =7;

 //tests movements parellel to line 7A -> 1G 
  // int startRow = 24;
  // int startCol = 3;
  // int endRow =1;
  // int endCol =6;
 
  // int start = 0;
  int start = (startRow/8)*8+(startCol%8);
  std::cout<<"\n start value: "<<start<<"\n";
  //should be bottom left most corner
  //9 

  // int end =63;
  int end = (endRow/8)*8+(endCol%8);
  /*
  how to get position if you have row and column//cant be higher than 63
  position(row,col) = row * 8 + col
  3,6 : position of row=3, col=6 = 30

  Rows (Multiplies of 8)
  formula for rows : r(p)= p / 8
  in other words  row = position / 8
  example: if position is 24, it's row is 24 / 8 = 3
  input || chessboard roq 1->8
  position || row
  0       0
  8       1
  16      2
  24      3
  32      4
  40      5
  48      6
  56      7
  
  columns (Modulus of 8  %8)
  formula for cols : c(p)= p % 8
  in other words  col = position % 8
  example: if position is 24, it's row is 24 / 8 = 3
        columns A->H
  position || col  || column leter
  0 OR 8      0       A
  7 if 1      1       B
  6 if 2      2       C
  5 if 3      3       D
  4 if 4      4       E
  3 if 5      5       F
  2 if 6      6       G
  1 if 7      7       H

i want to have cords 7E
  foloowing the formula
  r * 8 + c == (p/8) * 8
  
  
  
  
  
  
  */
  std::cout<<"\n end value: "<<end<<"\n";
  //should be the upper right most corner

 for(int i = 0; i < Board.Length(); i++){
   if(i> 46 && i <= 47){//where the 'x' 's are
     
     Board[i] = 'x';
   
   }
   else if(i == start){
     Board[i] = 'S';
   }else if(i == end){
     Board[i] = 'E';
   }
   else{
     Board[i] = 'o';
   }
 
   
   
 }
//  std::cout<<"\nSearch test: "<< Board.Search(Board.Length(), 'x')<<"\n";
 std::cout<<Board.ToString();




  

  std::cout<<"\n"<< BishopMove(Board, start, end);




  //std::cout << "Hello World!\n\n";






}