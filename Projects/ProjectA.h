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
    the integer field to 0.*/
        Interger(stringstream::string interger){
            bool run = true;
            int numberInt= 0;
            interger<stringstream::string>
            /*
                example used:
                    string  = 345
                    do math from places
                    5 * 1= 5
                    4 * 10 = 40
                    3 * 100 = 300

                    5 + 40 + 300 = 345
            */

            int n = interger.length();
          
            while(*interger >= '0' && *interger){
                numberInt = interger[i] - 'i';
                t->data->link = numberInt;
                i++;
            }



            //s[0] - '0'

            return t;
        }

        /*A public overloaded constructor that takes an int parameter. It converts the parameter and assigns it
    to the integer field.*/

        /*A public overloaded constructor that takes an double parameter. It converts the parameter and assigns
    it to the integer field. When converting a double to an int, the decimal portion is truncated.*/

    //A public copy constructor.

    //A public assignment operator.

    //A public destructor. It deallocates the integer field.

        /*A friend overloaded addition operator that takes two constant integer reference parameters. It returns
    an integer object that is equal to the sum of the two parameters.*/

        /*A friend overloaded subtraction operator that takes two constant integer reference parameters. It
    returns an integer object that is equal to the difference of the first parameter minus the second pa-
    rameter.*/

        /*A public constant method named ToString() that takes no parameter. It returns a string represen-
    tation of the integer field.*/

    // A friend overloaded ostream operator. It displays the integer field.

    // A friend overloaded istream operator. It reads into the inetger field.








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

