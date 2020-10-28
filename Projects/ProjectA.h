//due 29 of october
//interger field means to move information into a linklist
//Ex: number 123 covers 3 Nodes.
//possitve in nodes

#include <iostream>
#include <string>
#include <sstream>
#include "Node.h"


template<class T>
class Integer{

    private:
    //A private linked list field that is used to represent the integer.
    Node<T>* integerNode = new Node;
    // t->data = data;
    // t->link= NULL;
    //return t



    // int data;
    // Node* next;
    // int integerNode;




    public:
    //A public default constructor that initializes the integer field to 0.
        Integer(){
            integerNode= 0;//Sets linkedlist to 0
    
        }

    /*    A public overloaded constructor that takes a string parameter. It converts the parameter and assigns
    it to the integer field if parameter is in the proper real number integer format. Otherwise, it initialize
    the integer field to 0.
    
    Type conversion:
        bool -> char -> short int -> int ->
        unsigned int -> long -> unsigned -> 
        long long -> float -> double -> long double


    //Step 1) Convert string into an int
    //Step 2) Link coverted varible into node(s) Ex: 7203 makes a node per digit, so i have 4 nodes now
    //      if i can not (no string), initialize to 0;
    //Step 3) Return new node or rather the new linklist
    */
        Integer(std::string integer){
    
            int strToInt = 0;
           
        
                //this should create a node for each number a string has, and skip non-number charcters
            for(int i = 0; integer.length(); i++){
            if(strToInt > 0 || strToInt <= 0){//Checks if number is a negative or postive number

                strToInt = integer[i] - '0';//strToInt is set to the interger of the current index
                Insert(integerNode,integerNode, strToInt); //inserts converted string into linklist: This should also fill in the first node
                Create(integerNode);//creates a new node for linkedlist t;
                integerNode = integerNode->next;//goes to created node;
                    
                }else{//anything other than a number triggers this else
                    i++;//will increase i once basically skipping that char
                }

            } 
            return integerNode = 0; //initializes list to 0
        }

        /*A public overloaded constructor that takes an int parameter. It converts the parameter and assigns it
    to the integer field.

        If peremter is an Int, i sould assign it to a linkedlist 
            Link coverted varible into node(s) Ex: 7203 makes a node per digit, so i have 4 nodes now

    */
        Integer(int integer){
            int digitArray[]={};
                //counts digit to give length
            int n = integer;
            int digitCount = 0;

            while(n != 0){
                n = n/10;
                digitCount++;//this is used to find the length without changing the oringnal integer
            }

            for (int i = 0; i <= digitCount; i++) {//Changes an int into an array, but its backwards
                //ex: num = 12345. This gives array[] = {5, 4, 3, 2, 1}
                digitArray[i] = integer % 10;
                integer /= 10;
            }

            //Next i transfer the contents of the array into nodes, accounting for
            //the number being printed backwards
            int CT = digitCount;
            while(CT != 0 && integerNode->next != NULL){//If CT = 0 and the linkedlist is not empty the array will be inserted

                Insert(integerNode ,integerNode ,digitArray[CT]);//Inserts current index into linkedlist t
                Create(integerNode);//creates a new node for linkedlist t;
                integerNode = integerNode->next;//goes to created node;
                CT--;
            }


        }

       
        /*A public overloaded constructor that takes an double parameter. It converts the parameter and assigns
    it to the integer field. When converting a double to an int, the decimal portion is truncated(rounded).*/

        Integer(double integer){
            int doubleToInt = integer - 0;//due to type casting int has more priority than double, so double is changed to int 
            //aside from this first bit, this shoul look like Integer(int integer)

            int digitArray[]={};
                //counts digit to give length
            int n = doubleToInt;
            int digitCount = 0;

            while(n != 0){
                n = n/10;
                digitCount++;//this is used to find the length without changing the oringnal integer
            }

            for (int i = 0; i <= digitCount; i++) {//Changes an int into an array, but its backwards
                //ex: num = 12345. This gives array[] = {5, 4, 3, 2, 1}
                digitArray[i] = doubleToInt % 10;
                doubleToInt /= 10;
            }

            //Next i transfer the contents of the array into nodes, accounting for
            //the number being printed backwards
            int CT = digitCount;
            while(CT != 0 && integerNode->next != NULL){//If CT = 0 and the linkedlist is not empty the array will be inserted

                Insert(integerNode ,integerNode ,digitArray[CT]);//Inserts current index into linkedlist t
                Create(integerNode);//creates a new node for linkedlist t;
                integerNode = integerNode->next;//goes to created node;
                CT--;
            }



        }
    //A public copy constructor.
        Integer(const Integer& obj){
            //Am I supposed to turn the linkedlist into an Obj or the all nodes
            //all nodes into obj
            while(integerNode->next != NULL){
                integerNode = integerNode->next;
                integerNode = obj.integerNode->data;//will turn current node into an obj
            }
            /*
                //linked-list into obj
                t= obj.t;
            */
        }
    //A public assignment operator.
        Integer& operator= (const Integer& rhs){
            //Am I supposed to turn the linkedlist into an rhs or the all nodes
            //all nodes into rhs
            while(integerNode->next != NULL){
                integerNode = integerNode->next;
                integerNode = rhs.integerNode->data;//will turn current node into an rhs
            }
            /*
                //linked-list into rhs
                t= rhs.t;
            */
        }
        

    //A public destructor. It deallocates the integer field.
        ~Integer();
        /*A friend overloaded addition operator that takes two constant integer reference parameters. It returns
    an integer object that is equal to the sum of the two parameters.*/
        friend std::ostream& operator Addition(T& int1, T& int2){
           //Since these int1 and int2 are references I assume both come from nodes
            


            //Addition
            int solution= int1 + int2;
            return solution.obj;
        }
        /*A friend overloaded subtraction operator that takes two constant integer reference parameters. It
    returns an integer object that is equal to the difference of the first parameter minus the second pa-
    rameter.*/
        friend std::ostream& operator Subtraction(T& int1, T& int2){
            //Since these int1 and int2 are references I assume both come from nodes

            int difference = int1 - int2;

            if(difference < 0){
                difference * (-1);
            }

            return difference;
        }

        /*A public constant method named ToString() that takes no parameter. It returns a string represen-
    tation of the integer field.*/
        std::string ToString(){
            std::stringstream out;
            out <<"The addition of the chosen numbers is: "<< solution<<".\n";
            out <<"The difference of the chosen numbers is: "<< difference<<".";
            return out.str();
        }
    // A friend overloaded ostream operator. It displays the integer field.
        friend ostream& operator(ostream& const Interger& obj){
            stringstream out;
            while(integerNode->next != NULL){
                integerNode = integerNode->next;
                out << integerNode->data;

            }
            return out.str();
        }
    // A friend overloaded istream operator. It reads into the inetger field.
        friend ostream& operator(){
            
            ofstream myfile;
            myfile.open ("Text.txt");

          
            myfile <<"\n"<< out.str();;
            myfile.close();
        }







};










 /*

You must adhere to the following restritions. Failure to follow restrictions will result in a 0 for the project.
• You must use class defined data structures and functions, and/or define your own.
• The use of STL library classes are prohibited.
• The class must be defined in a header file.
• You must write a main cpp file to test the integer object methods.











useless code:


       // while(run == true ){
            //     integer = t->data;
            //     if(t->next->data != NULL){
            //         interger * 10;
            //         interger =+ (interger * 10);
            //     }else{
            //         run = false;
            //     }

*/

