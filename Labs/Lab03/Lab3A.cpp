//assume array[] = {1,2,3,4...etc}
#include <iostream>
using namespace std;

int PlaceTarget(int Array[], int Parameter, const int &Input ) {
    //Parameter is the Size of array
    cout << "[ ";
    for(int i = 0; i < Parameter; i++){
        cout << Array[i]<< ", ";
        
        if( Array[i] <= Input || Array[i] > Input){
            Parameter =+ 1;
            cout << Array[i]<< ", ";
        }
    }

    cout<< "]"
}
/*
    -First go thru array
    -Second Find index that matches int PlaceTarget(int Array[], int Parameter, const int &input ) {
    -will need to increase size
    -Add Input into the array

*/