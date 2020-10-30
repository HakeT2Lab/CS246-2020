/*
    This code was tested in Replit where It had run the Calls that are inluded in the main.cpp

    I was not able to get The Addiction and Subtraction Methods to be called at all, Addiction is commented out
    I atempted to do the ostream(and the istream) but ran into the same issue as the Addiction method
    I Struggled with the copy/ assignment operators, I think for them I am just reprinting all the values of the link list
        when given this:
                        Integer* intTest = new Integer(12345);
                        Integer* deepCopy = new Integer(intTest);
                        cout<<deepCopy->ToString();

                        //I got it to run something, however, I only ever got an adress, and any other type of
                        //minipulation caused errors

                        Whats in the Integer(Integer* const obj) method is the only thing I got to run without errors.

*/

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

#include "Node.h"

using namespace ds::sn;
using namespace std;


class Integer{

    private:
    //A private linked list field that is used to represent the integer.
    Node<int>* integerNode= new Node<int>;
    // integerNode->data = data;
    // integerNode->link= NULL;
    



    // int data;
    // Node* next;
    // int integerNode;




    public:
    // //A public default constructor that initializes the integer field to 0.
      Integer(){

        integerNode->link = NULL;
        integerNode->data = 0;//intializes integer field to 0

      } 

      Integer(std::string integer){
        int stringToInt = stoi(integer);
       
        int n = abs(stringToInt);
        int digitCount = 0;
        Node<int>* INCopy = new Node<int>;
        INCopy= integerNode;
      
        while(n != 0 && n >= 1 ){//123/10 -> 0.0123
          n = n/10;
          
          digitCount++;//this is used to find the length without changing the oringnal integer
        }
   

        int digitArray[digitCount];
        for(int i = 0; i < digitCount; i++) {//Changes an int into an array, but its backwards
          //ex: num = 12345. This gives array[] = {5, 4, 3, 2, 1}
          
          digitArray[i] = stringToInt % 10;
          stringToInt /= 10;
          
        }
        int CT = digitCount;
   
        integerNode->data = digitArray[digitCount -1];
        CT--;
        while(CT >= 0  ){//If CT = 0 and the linkedlist is not empty the array will be inserted
          Insert(INCopy ,INCopy ,digitArray[CT-1]);//Inserts current index into linkedlist t
          INCopy = INCopy->link;//goes to created node;
          CT--;
        }

      }

      Integer(int integer){
        int n = abs(integer);
        int digitCount = 0;
        Node<int>* INCopy = new Node<int>;
        INCopy= integerNode;
      
        while(n != 0 && n >= 1 ){//123/10 -> 0.0123
          n = n/10;
          
          digitCount++;//this is used to find the length without changing the oringnal integer
        }

        int digitArray[digitCount];
        for(int i = 0; i < digitCount; i++) {//Changes an int into an array, but its backwards
          //ex: num = 12345. This gives array[] = {5, 4, 3, 2, 1}
          
          digitArray[i] = integer % 10;
          integer /= 10;
          
        }
        int CT = digitCount;
   
        integerNode->data = digitArray[digitCount -1];
        CT--;
        while(CT >= 0  ){//If CT = 0 and the linkedlist is not empty the array will be inserted
          Insert(INCopy ,INCopy ,digitArray[CT-1]);//Inserts current index into linkedlist t
          INCopy = INCopy->link;//goes to created node;
          CT--;
        }
      }

      Integer(double integer){
      
        //convert double into int than to interger field
        int doubleToInt;
        doubleToInt = (int) integer;

        int n = abs(doubleToInt);
        int digitCount = 0;
        Node<int>* INCopy = new Node<int>;
        INCopy= integerNode;
      
        while(n != 0 && n >= 1 ){//123/10 -> 0.0123
          n = n/10;
          
          digitCount++;//this is used to find the length without changing the oringnal integer
        }
   

        int digitArray[digitCount];
        for(int i = 0; i < digitCount; i++) {//Changes an int into an array, but its backwards
          //ex: num = 12345. This gives array[] = {5, 4, 3, 2, 1}
          
          digitArray[i] = doubleToInt % 10;
          doubleToInt /= 10;
          
        }
        int CT = digitCount;
   
        integerNode->data = digitArray[digitCount -1];
        CT--;
        while(CT >= 0  ){//If CT = 0 and the linkedlist is not empty the array will be inserted
          Insert(INCopy ,INCopy ,digitArray[CT-1]);//Inserts current index into linkedlist t
          INCopy = INCopy->link;//goes to created node;
          CT--;
        }
      }

      Integer(Integer* const obj){//obj should be Test from main
        cout<<"Interger* called\n";
        // Integer const &INCopy =  obj;
        Integer* IntCopy= new Integer;
        // IntCopy= integerNode->link;
        cout<<"\n"<<IntCopy<<"\n\n";

        
      }














    //Addition Operator
    // friend Integer* operator +(const Integer*& int1, const Integer*& int2 ){
    //   cout<<"Using addition\n";
    //   // Integer integer;
    //   // integer= this* + int1;
    //    Integer* INCopy = new Integer;

        
    //   return INCopy;
    // }








      std::string ToString(){
        Node<int>* INCopy = new Node<int>;
        INCopy= integerNode;

        std::stringstream out;
        while(INCopy->link != NULL){
          out << INCopy->data;
          INCopy = INCopy->link;
        }
        return out.str();
      }

      // friend std::ostream& operator<<(std::ostream& out, const Integer* obj){
			// 	cout << obj;
			// 	return out;
      // }
    // A friend overloaded istream operator. It reads into the inetger field.
      // friend std::istream& operator>>(std::istream& in, const Integer<T>& obj){
      //   in>> obj.ToString;
      //   return in; 
      // }    

};
