/*
Encapeulation:
    Preventing direct access to field but allowing read/write acess 
    through methods.

    Example:
        class Rational {
            private: //hide data from direct access

                int numerator;
                int denuminator
                bool sign;

            public:
                //below is similare to just having numerator and friends in the
                // {  }... can only be used with constructors.
                Rational(): numerator(0), denuminator(1), sign(false)
                {}

                - Rational (int n, int d);
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


                --9/3 classwork--

                //standard Syntax for gey method
                //<data-type-of-the-field>
                //Get(),


                --Get method- Read Method--

                int GetNumerator()
                {
                    //turnary expression
                    return (sign) ? (-1 * numerator) : (numerator);
                }

                int GetNumerator() const
                {
                    //same as the none constant version
                    //If object is const, ikt can only be called with a const
                }

                int GetDenuminator() const
                {
                    return denuminator;
                }

                --Set Methods / Write Methods--

                //Standard Syntax
                //void Set (<Data-type-of-the-field>)

                void setNumerator(int value)
                {
                    //checks if negative
                    if(value < 0)
                    {
                        sign = true;
                        numerator =  -1 * value;
                    }
                    else
                    {
                        sign = false;
                        numerator = value;
                    }
                }

                void SetDenuminator(int value)
                {
                    //allows you to change denuminator vaule
                    if(value != 0)
                    {
                        if(value < 0)
                        {
                            sign = true;
                            denuminator = -1 * value;
                        }
                        else
                        {
                            sign =  false;
                            denuminator = value;
                        }
                    }
                }


                
                //overloaded * operator
                //midterm have to do the same for + and -
                friend Rational operator*(const Rational& a, const Rational& b)
                {
                    Rational r;
                    r.numerator = a.numerator * b.numerator;
                    r.denuminator = a.denuminator * b.denuminator;
                    r.sign = a.sign != b.sign;

                    return r;
                }

                //Rational a,b,c; c = a * B;


        };

        class Array
        {
            //interger array
            private:

                int *data;
                int capacity;

            public:
                Array(): capacity(10)
                {
                    data = new int[10]; //allocating memory for array

                    for(int i = 0; i < 10; i++)
                    {
                        data[i]= 0;
                    }
                }   

                --Overloaded constructor--
                Array(int capacity)
                {
                    if(capacity = 0)
                    {
                       throw "Invalid capacity";
                    }
                    
                    this -> capacity = capacity; //pereameter capacity is assigned capacity
                    data = new int[capacity];

                    for(int i = 0; i< this->capacity; i++)
                    {
                        data[i]= 0;
                    }
                }

                --Diffrence between a deep and a shandow  --
                //Deep compy is only for refrances and pointers [ this ->]

                --Copy Constructor--
                Array(const Array& obj)
                {
                    capacity = obj.capacity;

                    //to deap copy must allocate
                    //copies contant from one array to another
                    data = new int [capacity];
                    for(int i = 0; i < capacity; i++)
                    {
                        data[i] = obj.data[i];
                    }
                }

                //operator means object has been created
                Array& operator = (const Array& rhs)
                {
                    //deallocate saved memory
                    if(this != &rhs)
                    {
                        capacity = rhs.capacity;
                        delete[] data; //to avoid memory leaks
                        data = new int[capacity];

                        for(int i =0; i< capacity; i++)
                        {
                            data= rhs.data[i];
                        }
                    }
                    return *this;
                }

                --Subscript operator that allows reading and writing--
                //is capable of this beacuse of the int reference
               
                int& operator[] (int index)
                {
                    if(index < 0 || index >= capacity){
                        throw "Out Of Bound";
                    }
                    return data[index];
                }

                //data of const can not be changed
                --Read only--
                const int& operator[](int index)const
                {
                           if(index < 0 || index >= capacity){
                        throw "Out Of Bound";
                    }
                    return data[index];
                }

                //preforms like a Get() method
                int length() const
                {
                    return capacity;
                }

                std::string ToString() const
                {
                    std::stringstream out;
                    out << "[";
                    for(int i = 0; i < capacity; i++)
                    {
                        out << data[i];
                        if(i != capacity - 1)
                        {
                            out << ", ";
                        }
                        out << "]";
                        return out str();
                    }
                }



        };


*/

/*
Inheritance   
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





*/

/*
Polymorphism

*/

/*

*/