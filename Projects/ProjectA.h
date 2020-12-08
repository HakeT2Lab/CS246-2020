//due 29 of october
//interger field means to move information into a linklist
//Ex: number 123 covers 3 Nodes.
//possitve in nodes

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
    Node<int>* integerNode = new Node<int>;//declared

    public:
      //A public default constructor that initializes the integer field to 0.

      Integer(){
        integerNode->link = NULL;
        integerNode->data = 0;//intializes integer field to 0
      }

      //A public overloaded constructor that takes a string parameter
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
        for(int i = 0; i < digitCount; i++) {//Changes an int into   an array, but its backwards
          //ex: num = 12345. This gives array[] = {5, 4, 3, 2, 1}
          digitArray[i] = stringToInt % 10;
          stringToInt /= 10;
        }
        int CT = digitCount;
   
        integerNode->data = digitArray[digitCount -1];
        CT--;
        while(CT >= 0  ){//If CT = 0 and the linkedlist is not  empty the array will be inserted
          Insert(INCopy ,INCopy ,digitArray[CT-1]);//Inserts current index into linkedlist t
          INCopy = INCopy->link;//goes to created node;
          CT--;
        }

      }

      //A public overloaded constructor that takes an int parameter.
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
        for(int i = 0; i < digitCount; i++) {//Changes an int into    an array, but its backwards
          //ex: num = 12345. This gives array[] = {5, 4, 3, 2, 1}
          digitArray[i] = integer % 10;
          integer /= 10;
        }
        int CT = digitCount;
   
        integerNode->data = digitArray[digitCount -1];
        CT--;
        while(CT >= 0  ){//If CT = 0 and the linkedlist is not       empty the array will be inserted
          Insert(INCopy ,INCopy ,digitArray[CT-1]);//Inserts current index into linkedlist t
          INCopy = INCopy->link;//goes to created node;
          CT--;
        }
      }

      //A public overloaded constructor that takes an double parameter.
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

      //A public copy constructor.
      Integer(const Integer& obj){//obj should be Test from main
        integerNode = Copy(obj.integerNode);
      }

      //A public assignment operator.
      Integer& operator=(const Integer& rhs){
        if(this != &rhs){
          Clear(integerNode);
          integerNode = Copy(rhs.integerNode);
        }
        return *this;
      }

      //A public destructor. I think i have to set the LinkedLists to zero
      ~Integer(){
        delete integerNode;
      }

      friend Integer operator+(const Integer& int1, const Integer& int2){
        cout<<"Addiction opertator\n";
        /*
        what im going to do. Im going to traverse both Nodes at the same time

        node1[i] + node2[i]
        and if one is longer that the other
        im going to have shorter one add 0 in its place 

        1->2->3  +  3->2->7 = 6->7->0 

        if(node1[i] + node2[i] >9){
          insert(newNode, newNode, 1);
          insert(newNode, newNode, node1[i] + node2[i] - 10)
        }
        */

      
        // Integer intTest = new Integer;
        // Integer sum = new Integer;

        Node<int>* copyInt1 = int1.integerNode;
        Node<int>* copyInt2 = int2.integerNode;
               
        int intOneNum=0;
        int intTwoNum=0;
        int intOCount=0, intTCount=0;

        cout<<"\n ---Int1---";
        while(copyInt1->link != NULL ){//currently works with same length integers
          // cout<<copyInt1->data<<"\n";
          intOCount++;
          intOneNum= (intOneNum*10)+ copyInt1->data;
          copyInt1= copyInt1->link;
          cout<<"\n"<<intOneNum;
        }
        cout<<"\n ---Int2---";
        while(copyInt2->link != NULL ){
          intTCount++;
          intTwoNum= (intTwoNum*10)+ copyInt2->data;
          copyInt2= copyInt2->link;
          cout<<"\n"<<intTwoNum;
        }

        int sum = intOneNum + intTwoNum;
        
        cout<<"\n\n Sum: "<<sum<<"\n";


        return Integer(sum);
      }

      
      friend Integer operator-(const Integer& int1, const Integer& int2){
        Node<int>* copyInt1 = int1.integerNode;
        Node<int>* copyInt2 = int2.integerNode;
               
        int intOneNum=0;
        int intTwoNum=0;
        int intOCount=0, intTCount=0;

        cout<<"\n ---Int1---";
        while(copyInt1->link != NULL ){//currently works with same length integers
          // cout<<copyInt1->data<<"\n";
          intOCount++;
          intOneNum= (intOneNum*10)+ copyInt1->data;
          copyInt1= copyInt1->link;
          cout<<"\n"<<intOneNum;
        }
        cout<<"\n ---Int2---";
        while(copyInt2->link != NULL ){
          intTCount++;
          intTwoNum= (intTwoNum*10)+ copyInt2->data;
          copyInt2= copyInt2->link;
          cout<<"\n"<<intTwoNum;
        }
      

        int diffrence = intOCount>intTCount ? intOneNum - intTwoNum : intTwoNum - intOneNum;   
        cout<<"\n\n Differnce: "<< diffrence;     

        return Integer(diffrence);
      }


      const Integer operator+=(const Integer& intNum){
        Node<int>* copyintNum = intNum.integerNode;
        
        std::cout<<"\n\nTest intNum: "<< intNum.ToString() <<"\n";

        // Integer& sum = +Integer(sum)();



        /*
        int func2(int x){
          int v2 = func1(x) / 4;
        }
        
        */





        return intNum;
      }



      friend Integer operator!=(const Integer& int1, const Integer& int2){
        Node<int>* copyInt1 = int1.integerNode;
        Node<int>* copyInt2 = int2.integerNode;

        while(copyInt1->link != NULL){
          copyInt1= copyInt1->link;
          copyInt2= copyInt2->link;
          if(copyInt1->data != copyInt2->data){
            cout<<"\n True";
            return true;
          }
          if( (copyInt1->link == NULL && copyInt2->link != NULL) || (copyInt1->link != NULL && copyInt2->link == NULL) ){
            cout<<"\n True";
            return true;
          }
        }
        cout<<"\n False";
        return false;
      }

      friend Integer operator==(const Integer& int1, const Integer& int2){
        Node<int>* copyInt1 = int1.integerNode;
        Node<int>* copyInt2 = int2.integerNode;
        
        int intOneNum=0;
        int intTwoNum=0;
        
        while(copyInt1->link != NULL ){
          intOneNum= (intOneNum*10)+ copyInt1->data;
          intTwoNum= (intTwoNum*10)+ copyInt2->data;
          copyInt1= copyInt1->link;
          copyInt2= copyInt2->link;
        }       

        if(intOneNum == intTwoNum){
          cout<<"\n True";
          return true;
        }
        cout<<"\n False";
        return false;
      }

      friend Integer operator>(const Integer& int1, const Integer& int2){
        Node<int>* copyInt1 = int1.integerNode;
        Node<int>* copyInt2 = int2.integerNode;
        // Node<int>* SNcopyInt1 = int1.integerNode;
        // Node<int>* SNcopyInt2 = int2.integerNode;
        int intOneNum=0;
        int intTwoNum=0;
        // int intOCount=0, intTCount=0;

        while(copyInt1->link != NULL){
          if(copyInt1->data > copyInt2->data){
            cout<<"\n True";
            return true;
          }
          intOneNum= (intOneNum*10)+ copyInt1->data;
          intTwoNum= (intTwoNum*10)+ copyInt2->data;
          copyInt1= copyInt1->link;
          copyInt2= copyInt2->link;

          
        }
        // while(SNcopyInt1->link != NULL){
        //   intOCount++;
        //   SNcopyInt1=SNcopyInt1->link;
        // }
        // while(SNcopyInt2->link != NULL){
        //   intTCount++;
        //   SNcopyInt2=SNcopyInt2->link;
        // }
        // if(intOCount > intTwoNum){
        //   return true;
        // }
        cout<<"\n False";
        return false;
      }

      friend Integer operator<(const Integer& int1, const Integer& int2){
        Node<int>* copyInt1 = int1.integerNode;
        Node<int>* copyInt2 = int2.integerNode;
        int intOneNum=0;
        int intTwoNum=0;

        while(copyInt1->link != NULL){
          if(copyInt1->data < copyInt2->data){
            cout<<"\n True";
            return true;
          }
          intOneNum= (intOneNum*10)+ copyInt1->data;
          intTwoNum= (intTwoNum*10)+ copyInt2->data;
          copyInt1= copyInt1->link;
          copyInt2= copyInt2->link;

          
        }
        cout<<"\n False";
        return false;
      }

      friend Integer operator>=(const Integer& int1, const Integer& int2){
        Node<int>* copyInt1 = int1.integerNode;
        Node<int>* copyInt2 = int2.integerNode;
        int intOneNum=0;
        int intTwoNum=0;

        while(copyInt1->link != NULL){
          intOneNum= (intOneNum*10)+ copyInt1->data;
          intTwoNum= (intTwoNum*10)+ copyInt2->data;
          copyInt1= copyInt1->link;
          copyInt2= copyInt2->link;
        }
        if(intOneNum >= intTwoNum){
          cout<<"\n True";
          return true;
        }
        cout<<"\n False";
        return false;
      }

      friend Integer operator<=(const Integer& int1, const Integer& int2){
        Node<int>* copyInt1 = int1.integerNode;
        Node<int>* copyInt2 = int2.integerNode;
        int intOneNum=0;
        int intTwoNum=0;

        while(copyInt1->link != NULL){
          intOneNum= (intOneNum*10)+ copyInt1->data;
          intTwoNum= (intTwoNum*10)+ copyInt2->data;
          copyInt1= copyInt1->link;
          copyInt2= copyInt2->link;
        }
        if(intOneNum <= intTwoNum){
          cout<<"\n True";
          return true;
        }
        cout<<"\n False";
        return false;
      }

      //dont allicate new node
      //
      std::string ToString()const{
        Node<int>* INCopy = integerNode;
     

        std::stringstream out;
        while(INCopy->link != NULL){
          out << INCopy->data;
          INCopy = INCopy->link;
        }
        return out.str();
      }

      friend std::ostream operator<<(std::ostream& out, const Integer obj){
				cout << obj.ToString();



				return out;
      }
    // A friend overloaded istream operator. It reads into the inetger field.
    //   friend std::istream& operator>>(std::istream& in, const Integer<T>& obj){
    //     in>> obj.ToString;
    //     return in; 
    //   }    

};
