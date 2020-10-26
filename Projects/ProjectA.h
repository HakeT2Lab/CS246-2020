//due 27 of october




template<class T>
class Integer{

    private:
    //A private linked list field that is used to represent the integer.
    Node<int>* t = new Node<int>;
    t->data = data;
    t->link= NULL;
    //return t
    integer<int>;



    public:
    //A public default constructor that initializes the integer field to 0.
        Integer(integer = 0){}

    /*    A public overloaded constructor that takes a string parameter. It converts the parameter and assigns
    it to the integer field if parameter is in the proper real number integer format. Otherwise, it initialize
    the integer field to 0.
    
    Type conversion:
        bool -> char -> short int -> int ->
        unsigned int -> long -> unsigned -> 
        long long -> float -> double -> long double
    */
        Interger(stringstream::string interger){
            int numberInt= 0;// Tracks place of number Ex: 1's, 10's 100's places
            while(interger->data >= '0' && interger->data != NULL){ //while the string (interger) >= string 0 
                numberInt = interger '0';
                if(interger->data >= 0 !! interger->data < 0){// if the data is a real number( covers inf to -inf)
                    //I need something to deal with doubles
                    numberInt = interger->data + '0'; // Type conversion makes the data of the node a interger
                    t->data->link = numberInt;  // Changes the data(rather than the node) into the newly converted information
                    t = t->next;    //traverses the linklist
                    interger = interger->next;  //traverses the linklist
                }else{  // initialize the integer field to 0
                    t->link = 0; //Set first node to 0(WIP)
                    t->next->link = NULL;//Sets next node NULL so the while loop terminates
                }
            }
            return t;//returns  new linklist 
        }

        /*A public overloaded constructor that takes an int parameter. It converts the parameter and assigns it
    to the integer field.

        **I assume this is a short int to integer(int) conversion**
    */
        Interger(int interger){
            
          
        }


        /*A public overloaded constructor that takes an double parameter. It converts the parameter and assigns
    it to the integer field. When converting a double to an int, the decimal portion is truncated.*/

        Interger(double interger){
            while(interger->next != NULL){
                convert<int> = interger->data/100; //converts the double node of interger and makes it an interger
                t->link = convert; // links t's node with the converted one
                t=t->next;
                interger=interger->next;// node t should be as long as node interger
            }
            return t;
        }
    //A public copy constructor.
        Integer(const Integer& obj);
    //A public assignment operator.
        Integer& operator= (const Rational& rhs);
    //A public destructor. It deallocates the integer field.
        ~Integer(int Integer);
        /*A friend overloaded addition operator that takes two constant integer reference parameters. It returns
    an integer object that is equal to the sum of the two parameters.*/
        friend Addition& operator(T& int1, T& int2){
            //check if varibles are ints

            //Addition
            int solution= int1 + int2;
            return solution.obj;
        }
        /*A friend overloaded subtraction operator that takes two constant integer reference parameters. It
    returns an integer object that is equal to the difference of the first parameter minus the second pa-
    rameter.*/
        friend Subtraction& operator(T& int1, T& int2){

            int difference = int1 - int2;

            if(difference < 0){
                difference * (-1);
            }

            return difference;
        }

        /*A public constant method named ToString() that takes no parameter. It returns a string represen-
    tation of the integer field.*/
        std::string ToString(){
            stringstream out;
            out <<"The addition of the chosen numbers is: "<< Addition<<".\n";
            out <<"The difference of the chosen numbers is: "<< Subtraction<<".";
            return out.str();
        }
    // A friend overloaded ostream operator. It displays the integer field.
        friend ostream& operator(ostream& const Interger& obj){
            Integer a;
            cout << a.ToString();
            cout<< a;
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

