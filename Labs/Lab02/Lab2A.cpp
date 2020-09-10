//Part A: In class
/*

Define an int function named SecondToLastOccurrence() that takes a double array parameter, an int parameter
and a double parameter respectively. 

Given that the int parameter represents the size of the array parameter,
the function returns the index of the second to last occurrence of the double parameter if the parameter appears
at least twice in the array parameter; otherwise, the function returns -1.

*/


//Define an int function named SecondToLastOccurrence() that takes a double array parameter, an int parameter
//and a double parameter respectively
#include <iostream>
using namespace std;
int SecondToLastOccurrence(double array[], int size, double number)
{
 
    //check thru the array
    for(int i = 0; i< size; i++){
        //if statement that checks if second to last index of array if the something is repeated
        for(int j = 0; j < size; j++){
            if(array[i] == array[j]){
                cout << array[i] << " ";


                return array[i];
            }else{
                return -1;
            }
        }
    }

}