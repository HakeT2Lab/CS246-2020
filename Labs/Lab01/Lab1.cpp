  
#include <iostream>
using namespace std;
// Pending: Ill Get this finished in a day or two
//In class

//Bool fuction HasDuplicates
bool HasDuplicates(double array[], int size){
    for(int i = 0; i < size; i++){

        for(int j = 1; j< size; j++){

            if( array[i] == array[j]){
                return true;
            }else{
                return false;
            }
        }
    }
}

//string function named TrimEnds()

std::string TrimEnds(std::string isReturned){
    //can i use .size() ?
    for(int i = 0; isReturned[i]; i++){
        if(isReturned[i] != ' '){
            cout<< isReturned[i];
        }
    }
}








//Take Home

class NumChange{

    
    private:
        //rivate static double array field consisting of 3 elements
        double arr[3] = {} ;

    public:

        double x;
        double z;
        double y;
        //public copy constructor
        double Zero(double array){
            for (int i = 0; i < 3; ++i) // Using for loop we are initializing
            {
                arr[i] = 0;
            }
        }

        //public overloaded constructor that takes three double parameters
        NumChange(double x, double z, double y){
            arr[0] = x;
            arr[1] = z;
            arr[2] = z;

            // x = arr[0];
            // y = arr[1];
            // z = arr[2];


        }


        //A public copy constructor
        NumChange(const NumChange& obj){
             x = obj.x;
             z = obj.z;
             y = obj.y;

        }

        //A public assignment operator.
        NumChange& operator= (const NumChange& rhs){
            //i was not sure wqhat to place here
            if(this !=  &rhs)   //parameter is not equal to current object
            {
                x = rhs.x;
                y = rhs.y;
                z = rhs.z;
                
            }
            return *this;
        }

        //A public empty destructor.
        ~NumChange();

        //A public double constant method named GetX() that takes no parameters. It returns the first element of the
        // field.
        double GetX() const{
            // int x =arr[0];
            return x;
        } 

        //  A public double constant method named GetZ() that takes no parameters. It returns the third element of the
        // field.
        double GetY() const {
            // int y = arr[2];
            return y;
        }

        double GetZ() const {
            // int z = arr[2];
            return z;
        }



        //  A public void method named SetX() that takes a double parameter. It assigns the parameter to the first element
        // of the field.4

        void SetX(double x ){
            arr[0] = x;
        }


        //  A public void method named SetY() that takes a double parameter. It assigns the parameter to the second
        // element of the field.
        
        void SetY(double y){
            arr[1] = y;
        }


        //  A public void method named SetZ() that takes a double parameter. It assigns the parameter to the third element
        // of the field.
        void SetZ(double z){
            arr[2] = z;
        }

        //  A public string constant method named ToString() that takes no parameters. It returns a string in the format
        // ''(x ,y ,z )'' where x , y, z are the elements of the field representing their respective coordinate. Furthermore,
        // they must be contain exactly two decimal points.

        // string ToString() const{
        //     //visual studio code is not allowing this and 
        //     //seems to want me to include <sstream>
        //     std::stringstream out;
        //     out << x.setprecision(2)<<", "<< y.setprecision(2)<<", "<< z.setprecision(2) ;
        //     return out.str();
        // }
        // //  A friend overloaded ostream operator. It displays the elements of the field in the same format as ToString().
        // friend ostream& operater<< (ostream&  const NumChange& obj)
        // {
        //     cut<< obj.ToString();
        //     return cut;

      
        // }


};