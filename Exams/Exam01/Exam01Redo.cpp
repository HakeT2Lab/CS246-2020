#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Array.h"



//Question 1
int MinimumDistance(ds::Array<int>& data){
//comapares curr value with next value
	int minDist;
  int smallerValue = abs(data[0] - data[1]);

	for(int i = 0; i < data.Length() ; i++){
		for(int j = i+1; j < data.Length(); j++){
			if(minDist > abs(data[i] - data[j])&& minDist <0){
				
                minDist = abs(data[i] - data[j]);

                if(minDist <= smallerValue){
                    minDist = smallerValue;
                }
                
                if(j ==  data.Length())  {
                    j++;
                
                }            

            }if(minDist <= 1 || data.Length() <= 1){
                return 0;
            }

		}
	}
	return minDist;
}

//Question 2
template <typename T>
bool Similar(ds::Array<T>& ar1, ds::Array<T>& ar2){
	for(int i = 0; i < ar1.Length() + ar2.Length(); i++){
		//ar1.Length() + ar2.Length() is just used in case one array is longer than the other
        if(ar1[i]== ar2[i]){
            return true;
        }else{
            return false;
        }
	}
}


int main(){

	return 0;
}