I// Pending
//Object Oriented Programming

/*
There are four concepts of OOP
-Abstraction
-Encapeulation
-Inheritance
-Polymorphism
*/

/*
Abstraction:
    Repedentation of real world objects as classes

    +What is a class?
        -It is a data structure that contains
        feilds(data members) [Properties of objects] and 
        methods(member functions)[behaviors off objects]

    Syntax;
        class <identifer>
        {
            <access-specifer>
            <Fields>
            <Methods>
        }

    Public: Fields and methods are public are accessable anywhere

    Private: Fields and methods are only accessible by the class and friends

    Protected-Fields and methods are only accessible by the class,
        derived classes and friends. Not thru the object of 
        the class(Check Inheritance)

    example:

    class Rational
    {
        public:
            int numerator;
            int denominator;

    -- Constructor(if empty a defaut constructor)--
            Rational();
            

    -- Overloaded Constructor--
            Rational(int n, int d);

    -- Copy Constructor--
            Rational(const Rational& obj);
    --  Destructor--
            ~Rational();

    --  Assignment operator--
            Rational& operator= (const Rational& rhs);

            string ToString();
            const();
    --  ostream operator--
            friend ostream& operator(ostream& out, const Rational& obj);
        private:


        Rational::Rational()
        {
             numerator = 0;
             denominator = 1;
        }
        Rational (int n, int d);
        {
            if(d == 0)
            {
                throw " Denuminator Can Not Be 0";
            }
            numerator = n;
            denuminator = d;

        }

        Rational (const Rational& obj)
        {
            -- These two are called shadow copies
            (used as long as the fields are not pointers) --

            numerator= obj.numerator;
            denuminator= obj.denuminator;
        }

        Rational& operator= (const Rational& rhs)
        {
            if(this !=  &rhs)   //parameter is not equal to current object
            {
                numerator = rhs.numerator;
                denuminator = rhs.denuminator;
            }
            return *this;
        }

        ~Rational(){}

        string ToString() const
        {
            stringstream out;
            out << numerator << "/" << denuminator    ;
            return out.str();
        }

        friend ostream& operater<< (ostream&  const Rational& obj)
        {
            cut<< obj.ToString();
            return cut;

            -- This also works --
            Rational a;
            cout << a.ToString();
            cout<< a;
        }
        


    };

*/

