/*



Inheritance   
    Continued from Day3 lession
    It is the base class
     --fields--
        accNumGen
        accNum
        balance

    --Methods--
        GetBalance()
        Deposit()
        Withdraw()
        ToString()

    
    --important notes: --
        -The special member functions are not inherited (Thats default, 
        copy constructor, destructor, and assignment operators)

        -No constructor is inherited.

        -Friends are not inherited.

        -Derived classes only have access to protected andpublic members
        of the base class.

        -unless for good reason base class is to be public

    


    --Syntax for a derived(inheritaned) class--

    class <identifer> : <access-specifer>
    <base.class> [<access-specifer>]
    <base.class>]* // ]* means u can do it as much times as u want
    {
        <access-specifer>:
        [<field>]*
        [(method)]*
    };


    -Access of base class through the derived class 
        if publicly inherited:

    --public inheritance--
            class D public B{}; //publicly inherites B
                in D:
                    a is private
                    b is protected
                    c is public

            class B
            {
                private:
                    int a;
                protected:
                    int b;
                public:
                    int c;
            }

            class c public D
            {
                only has access to C and B
                c(): b(3){}
            };

    --protected inheritance--

                 class D protected B{}; //publicly inherites B
                 in D:
                    a is private
                    b is protected
                    c is protected
            class B
            {
                private:
                    int a;
                protected:
                    int b;
                public:
                    int c;
            }

            class c public D
            {
                only has access to C and B
                c(): b(3){}
            };

     --private inheritance--

            class D private B{}; //publicly inherites B
                 in D:
                    a is private
                    b is private
                    c is private
            class B
            {
                private:
                    int a;
                protected:
                    int b;
                public:
                    int c;
            }

            class c public D
            {
             gives errors
            };
                
--checking account class--

    in Checking h;
          //note: When you create a derived class object
            //the default constructor of the base class 
            //will be called first and than the derived class
            //constructor will be called.

            //what if i dont want to call the default,
            // you want to call the overloaded constructor?
            

            //Note: If you want to call another constructor aside from the
            //default constructor, you use the initiization list with
            //the desired constructor

        class Checking : public Account
        {
            public:
                Checking(){]

                //below calls overloaded constructor
                Checking(double amt) : Account(amt)
                {}

                //upcasting in copy constructor: convert derived obj to base class
                Checking(const Checking& obj) 
                : Account(static_cast<const Account&>(obj))
                {}

                Checking& operator = (const Checking& rhs)
                {
                    //can access base class elements by using the scoop operator

                    //call it
                    Acount::operator=(static_cast<const Account&(rhs));}

                    return *this
                }
                //Overridden function: has the same header 
                //as the base class, with different function/peremeter list(optional)
                
                //Overridden ToString()
                std::string ToString() const
                {
                    std::stringstream out;
                    out << "Checking "<< Acount::ToSTring();
                    return out;
                }

                //create our own friends as it was not inherited
                //note: firends can be writen anywhere as they are not part of the class
                
                friend ostream& operator<< (ostream& out, const Checking& obj)
                {
                    out << obj.ToString();
                    return out;
                }

        };

        class Saving : public Account
        {
            public:
                //is mostly the same as the cjecking class
                //whats writen is new

                bool Withdraw(double amt)
                {
                    if(amt <= GetBalance()){
                    
                        return Account::Withdraw(amt);
                    }
                    return false;
                
                }
        };

        class CD : public Account  //make choose method inaccessable: gives error
        {
            private:
                Account::Deposit;

            public:
                bool Account::Withdraw(double amt) = delete;
               

        };




        Note:
            for pointers and references of the base class,
            derived class objects can bve used. however, the base class 
            version of overriden methods will be used.






--Inheritance section--

class Account
{
    private;
        static int accNumGen;
        int accNum; //unqiue per object
        long balance;

    protected:
        --Overloaded constructor--
        Account (double amt): accNum(accNumGen)
        {
            if(amt < 0)
            {
                throw "Invaild amount";
            }
            //assign to long balance
            balance = (long)(amt *100);

            accNumGen = 1;
        }
}







--Polymorphism--
    known as accessing derived class overriden methods.

    class Account
    {
        public:
        //these are headers check the notes
            virtual bool Deposit(double amt);

            virtual bool Withdraw(double amt);


    }


    -A pure virtual method is a method that does not contain
    a definition.

    -Any class that contains a pure virtual metvhod os called an abstract
    class .

    -An abstract class cannot be instantiated
    (meaning that you cannot create an object of the clss)

    -A class that consists only of pure virtual methods is called
    an interface.

    virtual <return_type> <identifer> ( <parameter>)[const]* = 0;












*/