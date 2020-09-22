//next time use templates
#include <iostream>
#include <sstream>
#include <string>

class Set{

    private:
        int Array[100];//T Array[100]
        int CurrSize;

    public:
        /*
            A public default constructor that assigns the default generic value to each element of the array field and assigns
                0 to the int field.
        */
        Set(){
            for(int i = 0; i < CurrSize; i++){
                Array[i] = 0;
            }
        }

        /*
            A public copy constructor.
        */
        Set(const Set& obj){
            CurrSize = obj.CurrSize;
        }
        /*
            A public assignment operator
        */
        Set& operator =(const Set& rhs){
            if(this != &rhs){
                CurrSize = rhs.CurrSize;
            }
            return *this;
        }

        /*
            A public empty destructor.
        */
        ~Set(){}

        /*
           A public void method named Add() that takes a constant 
           generic reference parameter. It adds the parameter to
            the set if it is not already a member of the set.

            unquie elements in accending order

        */
           
        void Add(const int &Parameter){
           
            for(int i = 0; i < CurrSize; i++){
                if(Parameter != Array[i]){
                    if(Parameter <= Array[i] && Parameter > Array[i]){
                        Array[i] = Parameter; 
                    }
                }
            }
        }


        /*
            A public void method named Remove() that takes a constant generic 
            reference parameter. It removes the element
            of the set that equals to the parameter if the
            parameter is a member of the set.

        */
        void Remove(const int &Parameter){
            //I was trying to compare arrays
            int Arr[100]= {};
            for(int i =0; i < CurrSize; i++){
              
              Arr[i] = Array[i];
               
            }
        }

        /*
            A public bool constant method named IsFull() that takes no parameters.
             It returns true if the set is full;
            otherwise, it returns false.

            Checks if the end is full?

        */
        bool IsFull(){
          //long way / Worst case
            return CurrSize == 100;
        }

        /*
            A public bool constant method named IsEmpty() that takes no parameters. 
            It returns true if the set is empty;
            otherwise, it returns false.
        */
        bool IsEmpty(){
            return CurrSize == 0;
        }

        /*
            A public int constant method named Count() that takes no parameters.
             It returns the count of the set
        */
        int Count(){
            int count= 0;

            for(int i =0; i < CurrSize; i++){
                if(Array[i] != 0){
                    count++;
                }
            }
            return count;
        }

        /*
            A public bool constant method named Contains() that takes a constant 
            generic reference parameter. It returns true if the parameter 
            is a member of the set; 
            otherwise, it returns false.
        */
        bool Contains(const int &Parameter)const{
            for(int i = 0; i < CurrSize; i++){
                if(Parameter == Array[i]){
                    return true;
                }
                
            }
            return false;
        }

        /*
            A public constant method named ToString() that takes no parameters.
             It returns a string of elements of the set
             separated by commas all enclosed in curly braces.
        */
        std::string ToString() const{
            std::stringstream out;

            out << "{ ";
                for(int i = 0; i < CurrSize; i++){
                    out << Array[i];
                    if(CurrSize -1 != i){
                        out << ", ";
                    }
                }

            out << "} ";
            return out.str();
        }


        /*
            A friend overloaded ostream operator. It displays the
             elements of the set in the same format as ToString().
        */
        friend std::ostream& operator << (std::ostream& out, const Set& obj){
            out << obj.ToString();
			return out;
        }

        





};

