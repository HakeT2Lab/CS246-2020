#include <iostream>
#include <cmath>
#include "Shape.h"
using namespace std;

class RightTriangle : public Shape 
{
    private:
        double triangleSides[3] = {};
        double SideOne;
        double SideTwo;
        double Hypotenuse;


    public:
        //default    
        RightTriangle() 
        {
            triangleSides[0]= SideOne;
            triangleSides[1]= SideTwo;
            triangleSides[2]= Hypotenuse;

        }
        //overloaded
        RightTriangle(double SideOne, double SideTwo){
           
            SideOne = 1;
            SideTwo = 1;
            Hypotenuse = sqrt(SideOne * SideOne) + sqrt(SideTwo * SideTwo);

        }

        //copy
        RightTriangle(const RightTriangle& obj){
            SideOne = obj.SideOne;
            SideTwo = obj.SideTwo;
            Hypotenuse = obj.Hypotenuse;
        }

        //assignment
        RightTriangle& operator = (const RightTriangle& rhs){
            if(this != &rhs){
                SideOne = rhs.SideOne;
                SideTwo = rhs.SideTwo;
                Hypotenuse = rhs.Hypotenuse;
            }
        }

        //destructor
        ~RightTriangle() {}

        //public overidden Perimeter
        RightTriangle() : public Shape{

        }

        //public overidden Area



        //public overidden  ToSTring
        std::string ToString() const 
		{
			std::stringstream out;
			out << "{ "<<SideOne<<", "<< SideTwo<<", "<< Hypotenuse<<" }" << Shape::ToString();
			return out.str();
		}

        //public overidden Ostream operator 


};